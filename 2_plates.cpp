#include <iostream>
#include <complex>
#include <vector>
#include <iomanip>
#include <fstream>

const double Jx = 1.0;
const double Jy = 1.0;
const double Jz = 1.0;
const int N = 10;  // 10 unique sites used

struct Bond {
    int i, j;     // site indices (0–9)
    char type;    // 'x', 'y', or 'z'
    int u;        // ±1
};

int main() {
    using namespace std;


    // Mapping:
    // 0 → 1
    // 1 → 2
    // 2 → 3
    // 3 → 25
    // 4 → 24
    // 5 → 23
    // 6 → 4
    // 7 → 5
    // 8 → 27
    // 9 → 26

    vector<Bond> bonds = {
        // W₁ (1–2–3–25–24–23)
        {0, 1, 'x', 1},   // 1–2
        {1, 2, 'y', 1},   // 2–3
        {2, 3, 'z', 1},   // 3–25
        {3, 4, 'x', 1},   // 25–24
        {4, 5, 'y', 1},   // 24–23
        {5, 0, 'z', 1},   // 23–1

        // W₂ (3–4–5–27–26–25)
        {2, 6, 'x', 1},   // 3–4
        {6, 7, 'y', 1},   // 4–5
        {7, 8, 'z', 1},   // 5–27
        {8, 9, 'x', 1},   // 27–26
        {9, 3, 'y', 1}    // 26–25
        // (25–3) already included above, do NOT repeat
    };

std::vector<std::vector<double>> A(N, std::vector<double>(N, 0.0));

   std::ofstream outfile("A.txt");
    for (const auto& bond : bonds) {
        double J = (bond.type == 'x') ? Jx :
                   (bond.type == 'y') ? Jy :
                   (bond.type == 'z') ? Jz : 0.0;

        double val =2.0 * J * bond.u ;
        A[bond.i][bond.j] = val;
        A[bond.j][bond.i] = -val;
    }
   cout << "A matrix (10x10)"<<endl;
     for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << setw(5)<<A[i][j];
            outfile <<setw(5)<< A[i][j];
        }
        std::cout << std::endl;
        outfile <<endl;
    }  
outfile.close();
    return 0;
}
