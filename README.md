



# 🔷 Dynamic Evolution of Fermionic Parity in the Kitaev Honeycomb Model

This repository explores how local gauge variations in the Kitaev honeycomb model (HKM) influence the global fermionic parity.  
The main objective is to search for a **global topological rule** that connects local bond variables \(u_{ij}\) to the global invariant \(P = \mathrm{sgn}[\mathrm{Pf}(A)]\).

## 🧩 Concept

In the HKM, each bond carries a $\mathbb{Z}_2$ variable \(u_{ij} = \pm 1\) that defines the local gauge field.  
The global fermionic parity depends on the entire configuration of these bond variables through the antisymmetric matrix \(A\):

\[
A_{ij} = -2 J_{\alpha} u_{ij}, \qquad \alpha \in \{x, y, z\}.
\]

Understanding how a *local change* \(u_{ij} \to -u_{ij}\) alters the *global parity* is crucial for linking **local gauge dynamics** to **global topological invariants**—a key concept in topological quantum computation.

---

## ⚙️ Computational Setup
The system is based on a 100-plaquette tiling of the Kitaev honeycomb model, as illustrated below:
<img width="2880" height="1800" alt="Screenshot 2025-07-16 at 1 19 49 PM" src="https://github.com/user-attachments/assets/4afcd133-5ca4-4560-a514-30ac2180fa6a" />
---

- **Lattice**: 100 hexagonal plaquettes (W₁–W₁₀₀), 240 sites, 339 bonds  
- **Bond orientation**: follows Kitaev’s even→odd site convention  
- **Matrix construction (C++)**:
  ```cpp
  A[i][j] = -2 * J_alpha * u_ij;
