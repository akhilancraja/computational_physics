# computational_physics
Simulation of Josephson Junction Dynamics for Quantum Computing Applications

The Josephson equations are fundamentally important in the field of quantum computing, particularly for the design and operation of superconducting qubits. These equations describe the behavior of supercurrents across Josephson junctions, which are crucial components in certain types of superconducting qubits, such as flux qubits and transmon qubits. These qubits are key to building quantum circuits that leverage the principles of quantum mechanics to perform computations far beyond the capabilities of classical computers.

Project goals:

1. Simulating the Jopsephson equations' core relationships with simple numerical methods.

    1a. Voltage-Phase Relationship: Show how the voltage across the junction evolves with changes in the phase difference, ϕ, over time:

    \[ V = \frac{\hbar}{2e} \frac{d\phi}{dt} \]

    1b. Current-Phase Relationship: Demonstrate the relationship between the supercurrent and the phase difference, highlighting the sinusoidal dependence of the current on ϕ and its effects under different conditions:

    \[ I = I_c \sin(\phi) \]

2. Leveraging a HPC Cluster with advanced numerical methods for quantum behavior.

