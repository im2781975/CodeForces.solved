#include <iostream>
using namespace std;
int main() {
    int x, z, c = 0, f = 0;
    cin >> x;

    int *y = new int[x];
    z = x;
    while (z-- > 0) {
        cin >> y[f++];
    }
    z = x;
    f = 0;
    // Check if the array is ordered
    while (z-- > 1) {
        if (y[f] < y[f + 1]) {
            ++f;
            continue;
        } else {
            c = -1;
            break;
        }
    }

    if (c == 0) {
        cout << "Ordered\n0\n";
    } else {
        c = 0;
        // Bubble Sort
        for (int i = 0; i < x - 1; ++i) {
            for (int j = 0; j < (x - 1) - i; ++j) {
                if (y[j] > y[j + 1]) {
                    swap(y[j + 1], y[j]);
                    ++c;
                }
            }
        }
        f = 1;

        // Output sorted array and number of swaps
        cout << y[0];
        while (x-- > 1) {
            cout << " " << y[f++];
        }
        cout << "\n" << c << "\n";
    }
    delete[] y;
    return 0;
}
