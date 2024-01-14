#include <iostream>

int main() {
    int x;
    std::cin >> x;
    char y[1000][3];
    char* z = new char[x];
    int f = 0, gr = 0, pi = 0, green = 0, pink = 0;

    for (int s = 0; s < x; s++) {
        for (int ss = 0; ss < 3; ss++)
            std::cin >> y[s][ss];
    }

    for (int r = 0; r < x; r++) {
        int g = 0, rr = 0;
        if (pi == 5) {
            z[f++] = 'g';
            r++;
            green++;
            pi = 0;
        }
        if (gr == 5) {
            z[f++] = 'p';
            r++;
            pink++;
            gr = 0;
        }
        for (int c = 0; c < 3; c++) {
            if (y[r][c] == 'G') {
                g++;
                break;
            }
            if (y[r][c] == 'B') {
                rr++;
            }
        }
        if (g == 1) {
            z[f++] = 'g';
            gr++;
            green++;
        }
        if (rr == 3) {
            z[f++] = 'p';
            pi++;
            pink++;
        }
    }

    gr = 0;
    std::cout << pink * 3 << " " << green * 3 << std::endl;

    while (gr++ < x) {
        if (z[gr - 1] == 'g')
            std::cout << "Green" << std::endl;
        if (z[gr - 1] == 'p')
            std::cout << "Pink" << std::endl;
    }

    // Deallocate dynamically allocated memory
    delete[] z;

    return 0;
}

