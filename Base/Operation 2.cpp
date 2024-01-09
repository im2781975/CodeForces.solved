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
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}

