
# 🔷 Dynamic Evolution of Fermionic Parity in the Kitaev Honeycomb Model

This repository explores how local gauge variations in the **Kitaev honeycomb model (HKM)** influence the **global fermionic parity**.  
The main objective is to search for a **global topological rule** that connects local bond variables \(u_{ij}\) to the global invariant \(P = \mathrm{sgn}[\mathrm{Pf}(A)]\).

---

## 🧩 Concept

In the Kitaev model, each bond carries a $\mathbb{Z}_2$ variable \(u_{ij} = \pm 1\) that defines the local gauge configuration.  
The global fermionic parity depends on the full pattern of these bond variables through the antisymmetric matrix \(A\):

\[
A_{ij} = -2 J_{\alpha} u_{ij}, \qquad \alpha \in \{x, y, z\}.
\]

Understanding how a **local change** \(u_{ij} \to -u_{ij}\) modifies the **global fermionic parity** is crucial for linking **local gauge dynamics** to **global topological invariants**—a central question in topological quantum computation.

---

## ⚙️ Computational Setup
<img width="2880" height="1800" alt="Screenshot 2025-07-16 at 1 19 49 PM" src="https://github.com/user-attachments/assets/4afcd133-5ca4-4560-a514-30ac2180fa6a" />
- **Lattice**: 100 hexagonal plaquettes (W₁–W₁₀₀)  
- **Sites**: 240  
- **Bonds**: 339  
- **Bond types**: \(x, y, z\), following Kitaev’s even→odd site convention  

### Matrix construction (C++)
```cpp
### Pfaffian computation (Python)

The antisymmetric matrix \(A\) is exported to Python and analyzed using **pfapack**:

\[
P = \mathrm{sgn}[\mathrm{Pf}(A)].
\]

---

## 🧪 Experimental Procedure

### 1. Anchor bond
Fix one bond \(u_{12} = -1\) as a permanent reference.

### 2. Sequential flipping
Iterate through all other bonds \(u_{ij}\), setting one to \(-1\) at a time  
(all remaining bonds stay \(+1\)).  
This ensures every configuration has exactly **two negative bonds**:

\[
\{u_{12}, u_{ij}\}.
\]

### 3. Parity measurement
For each configuration, compute the Pfaffian and record whether the **fermionic parity** flips.

### 4. Pattern detection
- Identify which bonds cause parity changes.  
- Analyze spatial correlations between flipping bonds.  
- Examine dependence on bond type (x, y, z) and boundary position.

---

## 🔭 Research Goal

The ultimate goal of this project is to uncover a **universal topological law** that governs how local bond variations \(u_{ij}\) affect the global fermionic parity \(P\).

Finding such a rule would:
- Reveal how **local gauge dynamics encode global topological order**,  
- Provide a **fast alternative** to full Pfaffian evaluation in large-scale simulations,  
- Offer insights into the **stability of Majorana-based quantum information** under local perturbations,  
- And potentially generalize to other $\mathbb{Z}_2$ lattice gauge systems.

---

## 🧮 Results Summary

Initial results suggest that:
- Parity flips are **not determined solely** by the number of negative bonds.  
- Instead, they depend on **geometric placement** and **bond orientation**.  
- **Boundary $x$-bonds** tend to systematically flip the parity,  
  while most **$y$ and $z$ bonds** do not,  
  except in special cases forming **non-trivial loops** in the gauge configuration.  

Although a closed analytical rule has not yet been established,  
these patterns indicate the existence of a deeper **topological relationship** between local bond dynamics and global parity sectors.

---

## 📦 Repository Contents

| Folder/File | Description |
|--------------|-------------|
| `A1_matrix.cpp` | C++ program to generate the antisymmetric matrix \(A\) |
| `pfaffian_parity.py` | Python script to compute the Pfaffian and fermionic parity |
| `experiment_results/` | CSV/Excel data with parity outcomes for each flipped bond |
| `visualization/` | Plotting scripts to visualize lattice and parity-flip maps |
| `experiment_results_tables.tex` | LaTeX tables of complete results (used in the paper) |
| `Dynamic_evolution_of_fermionic_parity.pdf` | Research paper draft |

---

## 📚 Reference

**Research paper:**  
*“Dynamic Evolution of Fermionic Parity in the Kitaev Honeycomb Model”*  
Demetris Dimitriadis (2025)

**Full source code and analysis:**  
🔗 [https://github.com/dimis2/Dynamic-Evolution-of-Fermion-Parity-](https://github.com/dimis2/Dynamic-Evolution-of-Fermion-Parity-)



