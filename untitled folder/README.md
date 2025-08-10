# Dynamic Evolution of Fermion Parity in the Kitaev Honeycomb Model

## 🧮 Computational Setup

The system is based on a 100-plaquette tiling of the Kitaev honeycomb model, as illustrated below:
<img width="2880" height="1800" alt="Screenshot 2025-07-16 at 1 19 49 PM" src="https://github.com/user-attachments/assets/4afcd133-5ca4-4560-a514-30ac2180fa6a" />



- **Lattice**: 100 hexagonal plaquettes (W₁ to W₁₀₀), 240 sites, 339 bonds
- **Bonds**: Each bond is labeled by indices (i, j), a bond type α ∈ {x, y, z}, and a sign u₍ᵢⱼ₎ ∈ {±1}
- **Orientation**: Site order and bond directions respect Kitaev's conventions with even→odd orientation
- **Matrix Construction**:  
  In C++, we construct the antisymmetric matrix A with:

  	A[i][j] = -2 * J_α * u_{ij}

  This matrix encodes the gauge field configuration of the flux sector.
- **Pfaffian Calculation**:  
  The matrix A is exported to `.txt` and loaded in Python, where we compute:

  	Pf(A) and sign(Pf(A)) → fermion parity

---

## 🔬 Experimental Simulation: Dynamic Parity Evolution

We simulate the **time evolution of two distant vortex excitations (Wₚ = -1)** that are brought closer through local flips of the gauge fields \( u_{ij} \).

### 🧪 Experimental Steps:

1. **Initialization**:
   - Introduce two distant plaquettes with flipped signs (Wₚ = -1)
   - All other plaquettes remain vortex-free (Wₚ = +1)

2. **Controlled Movement**:
   - Perform local changes in u_{ij}, step-by-step, to bring the two vortexes closer
   - After each flip:
     - Reconstruct matrix A
     - Export to `.txt`
     - Recompute Pf(A) in Python

3. **Parity Tracking**:
   - At each step, record whether fermion parity changes
   - Measure how parity flip correlates with:
     - distance between vortices
     - path taken (topological dependence)
     - number of flips or plaquette fusion

---

## 🔭 Research Goals:

- **Visualize Topological Phase Transitions**  
  Dynamic tracking of parity flips as an indicator of vortex interactions

- **Simulate Braiding and Fusion Paths**  
  Define braiding paths via u_{ij} flips, and monitor their effect on fermion parity

- **Explore Non-Abelian Generalizations**  
  This framework lays groundwork to extend to non-Abelian anyons and topological quantum computing logic gates

---

> This repo includes:  
> - C++ code to generate iA matrix  
> - Python script to compute Pfaffian  
> - Tools for dynamic simulation of u_{ij} flips  
> - Roadmap for future braiding and parity-tracking modules
