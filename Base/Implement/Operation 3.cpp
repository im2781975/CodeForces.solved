#include <iostream>
#include<vector>
using namespace std;
void First()
{
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
        cout << "\nOrdered\n";
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
        cout << y[0];
        while (x-- > 1) {
            cout << " " << y[f++];
        }
        cout << "\n" << c <<"\n" ;
    }
    delete[] y;
}
void Second()
{
    int x = 0, z = 0, m = 0, c = 0;
    cin >> x;
    z = x;
    vector<char> y(x);

    while (z-- > 0 && ++m) {
        int f = 0, s = x;
        while (s-- > 0) {
            cin >> y[f++];
            if (y[f - 1] == '#') {
                cout << m << " " << f ;
                c++;
            }
        }
    }
    if (c == 0) {
        cout << "\nNo hiding places" ;
    } else
        cout << c ;
}
void Third()
{
    int k, n;
    cin >> n >> k;

    int b, g, r;
    b = (8 * n) / k;
    g = (5 * n) / k;
    r = (2 * n) / k;

    if (8 * n % k != 0)
        b += 1;
    if (5 * n % k != 0)
        g += 1;
    if (2 * n % k != 0)
        r += 1;

    int res = r + g + b;
    cout << res;
}
int main() {
    First();
    Second();
    Third();
    return 0;
}
