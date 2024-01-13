#include<bits/stdc++.h>
using namespace std;
int main()
{
    //find the minimum sum of diagonals in a 2D array
    cout<< "Enter row & column number: ";
    int n;
    cin >> n;
    int arr[n][n], result =0;
    int Max=0;
    int MAXROW=INT_MAX;
    cout<< "\nEnter elements: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            Max+=arr[i+j][j];
        }
        MAXROW=min(MAXROW, Max);
        Max=0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            result=max(result, MAXROW);
        }
    }
    cout<< result;
}
