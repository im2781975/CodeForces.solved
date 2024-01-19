#include <iostream>
using namespace std;

void solve1() {
    char y[3][3];
    int i, j, x = 0, o = 0, no = 0;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            cin >> y[i][j];
            if (y[i][j] == 'X')
                x++;
            if (y[i][j] == 'O')
                o++;
            if (y[i][j] == '.')
                no++;
        }

    if ((x == o || x - 1 == o)) {
        for (i = 0; i < 3; i++) {
            if (y[i][0] == y[i][1] && y[i][0] == y[i][2]) {
                if (y[i][0] == 'X') {
                    if (x - 1 == o) {
                        cout << "the first player won";
                        return 0;
                    }
                    goto ff;
                }
                if (y[i][0] == 'O') {
                    if (x == o) {
                        cout << "the second player won";
                        return 0;
                    }
                    goto ff;
                }
            }
            if (y[0][i] == y[1][i] && y[0][i] == y[2][i]) {
                if (y[0][i] == 'X') {
                    if (x - 1 == o) {
                        cout << "the first player won";
                        return 0;
                    }
                    goto ff;
                }
                if (y[0][i] == 'O') {
                    if (x == o) {
                        cout << "the second player won";
                        return 0;
                    }
                    goto ff;
                }
            }
        }
        if ((y[0][0] == y[1][1] && y[0][0] == y[2][2]) || (y[0][2] == y[1][1] && y[0][2] == y[2][0])) {
            if (y[1][1] == 'X') {
                if (x - 1 == o) {
                    cout << "the first player won";
                    return 0;
                }
                goto ff;
            }
            if (y[1][1] == 'O') {
                if (x == o) {
                    cout << "the second player won";
                    return 0;
                }
                goto ff;
            }
        }
        if (no == 0) {
            cout << "draw";
            return 0;
        }
        if (x == o) {
            cout << "first";
            return 0;
        }
        if (x - 1 == o) {
            cout << "second";
            return 0;
        }
    }

ff:
    cout << "illegal";
    return 0;
}

