/*

    1a. Voltage-Phase Relationship: 
    Computing the voltage across the junction evolves with changes in the phase difference, ϕ, over time.

*/

#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

// Constants
const double h_bar = 1.0545718e-34;                 //Reduced Planck's constant, J*s
const double e = 1.60217662e-19;                    //Elementary charge, CS

int main(){
    double dt = 0.01;                               //Time step, s
    double total_time = 1.0;                        //total time for simulation, s
    int steps = static_cast<int> (total_time / dt);
    std::vector<double> phi(steps);                 //Phase difference array
    std::vector<double> V(steps);                   //Voltage array

    // Initializing the phase array with some function of time
    for (int i = 0; i < steps; ++i){
        phi[i] = 2.0 * M_PI * 10 * i * dt; // Linearly increasing phase
    }

    // Calculating voltage using the Josephson relation: V = (h_bar / 2e) * (dphi/dt)
    for (int i = 1; i < steps; ++i) {
        double dphi = phi[i] - phi[i - 1];
        V[i] = (h_bar / (2.0 * e)) * (dphi / dt);
    }

    // File operations
    std::ofstream file;
    file.open("voltage_phase_data.csv");

    file << "Time,Voltage,Phase\n";

    // Writing data to file
    for (int i = 0; i < steps; ++i) {
        file << i * dt << "," << V[i] << "," << phi[i] << "\n"; // Time, Voltage, Phase
    }

    file.close();

    return 0;
}