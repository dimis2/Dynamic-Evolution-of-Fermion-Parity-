 ⚠️ **Caution:** To fully understand this repository, it is strongly recommended to read the (Paper.pdf) first.


🔷 Dynamic Evolution of Fermionic Parity in the Kitaev Honeycomb Model

This repository explores how local gauge variations in the Kitaev honeycomb model (HKM) influence the global fermionic parity.
The main objective is to search for a global topological rule that connects local bond variables $u_{ij}$ to the global invariant
$P = \mathrm{sgn}[\mathrm{Pf}(A)]$. We investigate the dynamic evolution of fermionic parity in the Kitaev honeycomb model (HKM) through a combination of analytical derivation and large-scale computational experiments. Using a lattice of one hundred hexagonal plaquettes, we systematically study how local flux excitations $u_{ij}=-1$ affect the global fermionic parity $P=\mathrm{sgn}(\mathrm{Pf}(A))$ of the system. By fixing one reference bond ($u_{12}=-1$) and varying all other bonds sequentially, the objective of this study is to search for a global topological rule that describes how a local gauge variation $u_{ij}$ can influence a global invariant such as the fermionic parity. Understanding this connection is essential for revealing how local gauge dynamics encode global topological properties and for predicting parity changes without the need for full Pfaffian evaluation—an advance that could significantly accelerate simulations and clarify the stability of Majorana-based quantum information. The numerical analysis reveals consistent geometrical patterns suggesting that parity changes depend not only on the number of flipped bonds but also on their spatial arrangement and bond orientation within the lattice. Although a precise mathematical law has not yet been formulated, the observed behavior points toward a deeper topological connection between local gauge dynamics and global parity sectors, which may motivate further analytical exploration by other researchers.

🧩 Concept

In the Kitaev model, each bond carries a $\mathbb{Z}2$ variable $u{ij} = \pm 1$ that defines the local gauge configuration.
The global fermionic parity depends on the complete pattern of these bond variables through the antisymmetric matrix $A$:<br>
$A_{ij} =  -2 J_{\alpha} u_{ij}, \qquad \alpha \in \{x, y, z\}$.


🔭 Research Goal

The goal of this study is to uncover a universal topological rule that governs how local bond variations $u_{ij}$ affect the global fermionic parity $P$.

Finding such a rule would:

Reveal how local gauge dynamics encode global topological order,

Provide a fast alternative to full Pfaffian evaluation in large-scale simulations,

Offer insights into the stability of Majorana-based quantum information under local perturbations,

And potentially generalize to other $\mathbb{Z}_2$ lattice gauge systems.

⚙️ Computational Setup
<img width="2880" height="1800" alt="Screenshot 2025-07-16 at 1 19 49 PM" src="https://github.com/user-attachments/assets/4afcd133-5ca4-4560-a514-30ac2180fa6a" />
Lattice: 100 hexagonal plaquettes ($W_1$–$W_{100}$)
Sites: 240
Bonds: 339
Bond types: $(x, y, z)$, following Kitaev’s even→odd site convention
Matrix construction (C++)
The antisymmetric matrix is generated using:

$A[i][j] = -2 J_{\alpha} u_{ij}$

Pfaffian computation (Python)

The antisymmetric matrix $A$ is exported to Python and analyzed using pfapack.
The fermionic parity is obtained from the sign of the Pfaffian:
$P = \mathrm{sgn}[\mathrm{Pf}(A)]$
Experimental Procedure

1. Anchor bond
Fix one bond $u_{12} = -1$ as a permanent reference.

2. Sequential flipping
Iterate through all other bonds $u_{ij}$, setting one to $-1$ at a time
while all remaining bonds stay $+1$.
Each configuration therefore has exactly two negative bonds:

${u_{12},u_{ij}}$

4. Parity measurement
For each configuration, compute the Pfaffian and record whether the fermionic parity flips.

5. Pattern detection

Identify which bonds cause parity changes.

Analyze spatial correlations between flipping bonds.

Examine dependence on bond type ($x$, $y$, $z$) and boundary position.


🧮 Results Summary

Initial results indicate that:

Parity flips are not determined solely by the number of negative bonds.

Instead, they depend on the geometric placement and bond orientation.

Boundary $x$-bonds tend to systematically flip the parity,
while most $y$ and $z$ bonds do not,
except in special cases forming non-trivial loops in the gauge configuration.

Although a closed analytical rule has not yet been established,
these patterns suggest the existence of a deeper topological relationship between local bond dynamics and global parity sectors.

📦 Repository Contents

A1_matrix.cpp – C++ program that constructs the antisymmetric matrix $A$.<br>

2_plates.cpp - c++ program that constructs the antisymmetric matrix $A$ of 2 plates only we did this just for practice ignore it.<br>

pfaffian_parity.py – Python script used to compute the Pfaffian and fermionic parity.<br>

experiment results of A1_matrix.cpp.pdf – Dataset containing parity outcomes for each flipped bond configuration.<br>

Paper.pdf – Research paper draft presenting the methodology and findings.<br>

📚 Reference

Research paper:
“Dynamic Evolution of Fermionic Parity in the Kitaev Honeycomb Model”
Demetris Dimitriadis (2025)

<pre><code class="language-bibtex">
@misc{dimitriadis2025parity,
  author       = {Demetris Dimitriadis},
  title        = {Dynamic Evolution of Fermionic Parity in the Kitaev Honeycomb Model},
  year         = {2025},
  url          = {https://github.com/dimis2/Dynamic-Evolution-of-Fermion-Parity-},
  note         = {Preprint and data repository},
}
</code></pre>

⚖️ License

This project is released under the MIT License.
You are free to use, modify, and cite this code with proper attribution.


