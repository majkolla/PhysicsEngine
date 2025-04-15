# Physics Engine 

- **Multi-Dimensional Simulation:** Supports both 2D and 3D environments.
- **Rigid Body Dynamics:** Accurate simulation of rigid body motion.
- **Collision Detection:** Implement basic collision control
- **Debugging Tools:** Built-in visualization for collision boundaries and force vectors to simplify debugging (perhaps something like SFML)
- **Optimization Ready:** Designed with performance and scalability in mind; potential for multithreading and SIMD optimizations.


## Project Scope

This engine aims to provide:

- **Accurate Simulation:** Real-time physics simulation using collision detection and numerical integration.
- **Extensible Framework:** A modular architecture 
- **High Performance:** Try to write fast and good code 
- **Development and Research:** Suitable for both game development environments and academic research, with easy adaptability for different physics scenarios. Maybe we can do some raytracing later! 

## Architecture Overview


- **Core Engine:**  
  - Manages the simulation loop and orchestrates updates across all subsystems.
  - Handles object management and integration (time-stepping).
  
- **Mathematics Module:**  
  - Implements vectors, matrices, quaternions, and bounding volumes.
  - Build my own to optimzie or use something 
  
- **Collision Detection Module:**  
    - **Broad-Phase Detection:** Identifies possible collision pairs using spatial partitioning.
  - **Narrow-Phase Detection:** Computes detailed collision information 
  
- **Collision Resolution and Constraint Solving:**  
  - Applies impulse-based methods for collision response.
  
- **Integration Methods:**  
  - Implements numerical integration techniques to update simulation states based on computed forces and collisions.
  
- **Debug and Profiling Tools:**  
  - Supports real-time visualization of simulation states and collision boundaries.
  - Profiling routines to optimize performance bottlenecks.
- **Further expansions **
    - Build something using differential equations and thus creating solvers for that. If i wanna implement fluid dynamics or other stuff later. 