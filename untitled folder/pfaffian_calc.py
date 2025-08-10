import numpy as np
from pfapack import pfaffian

# Load matrix A1
A = np.loadtxt('A1.txt')

# Optional: check antisymmetry
if not np.allclose(A, -A.T):
    print("⚠️ Warning: Matrix is not antisymmetric!")

# Compute Pfaffian
pf = pfaffian.pfaffian(A)
# det A
det = np.linalg.det(A)
# Fermion parity
fermion_parity = np.sign(pf)  # Will be -1.0, 0.0, or 1.0

# Output
print(f"Pfaffian: {pf}")
print(f"Fermion Parity: {int(fermion_parity)}")
print(f"Determinant: {det}")
