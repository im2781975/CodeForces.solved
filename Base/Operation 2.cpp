#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

void operate(int x[MAX_SIZE][MAX_SIZE], int y)
{
    int s = 0, k = 0, m = 0;
    for (int i = y - 1; i >= 0; i--, s = 0, m++)
    {
        while (s < pow(3, y))
        {
            for (k = 0; k < pow(3, m) && s < pow(3, y); k++)
                x[s++][i] = 1;
            for (k = 0; k < pow(3, m) && s < pow(3, y); k++)
                x[s++][i] = 2;
            for (k = 0; k < pow(3, m) && s < pow(3, y); k++)
                x[s++][i] = 3;
        }
    }
}

int main()
{
    int x, y;
    cin >> x >> y;

    int arr[MAX_SIZE][MAX_SIZE];
    operate(arr, y);

    int n = 0;
    while (cin >> n)
    {
        int d = pow(3, n);
        int **matrix = new int *[d];
        for (int w = 0; w < d; ++w)
        {
            matrix[w] = new int[n];
            operate(matrix**, n);
            for (int r = 0; r < pow(3, n); r++)
            {
                for (int c = 0; c < n; c++)
                    cout << matrix[r][c];
                cout << "\n";
            }
        }
        for (int q = 0; q < d; ++q)
            delete[] matrix[q];
        delete[] matrix;
        cout << endl;
    }

    return 0;
}

