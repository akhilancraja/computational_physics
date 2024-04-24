# computational_physics
Simulation of Josephson Junction Dynamics for Quantum Computing Applications

The Josephson equations are fundamentally important in the field of quantum computing, particularly for the design and operation of superconducting qubits. These equations describe the behavior of supercurrents across Josephson junctions.

Josephson junctions consist of two superconductors separated by a thin insulating barrier. The unique properties of these junctions, such as the ability to carry a supercurrent via tunneling electrons without a voltage drop (under certain conditions), make them highly suitable for quantum computing. They are used to construct superconducting qubits.

Josephson junctions are used to create and control the quantum states that represent bits in a quantum computer.

Project goals:

1. Simulating the Jopsephson equations' core relationships with simple numerical methods.

    1a. Voltage-Phase Relationship: ComputingS the voltage across the junction evolves with changes in the phase difference, ϕ, over time:

    \[ V = \frac{\hbar}{2e} \frac{d\phi}{dt} \]

    1b. Current-Phase Relationship: Computing the relationship between the supercurrent and the phase difference, highlighting the sinusoidal dependence of the current on ϕ and its effects under different conditions:

    \[ I = I_c \sin(\phi) \]

2. Leveraging a HPC Cluster with advanced numerical methods for quantum behavior.

    After simulating the relationship between parameters and phase, the next step is to simulate phase qubits. Phase qubits utilize the phase difference across a Josephson junction directly.

