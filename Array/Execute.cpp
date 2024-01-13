#include<bits/stdc++.h>
using namespace std;
void MinSumDiagonal()
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
        Max=0;
        for(int j=0; j<n; j++)
        {
            Max+=arr[i+j][j];
        }
        MAXROW=min(MAXROW, Max);
    }
    cout<<MAXROW<<"\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            result=max(result, Max);
    }
    cout<< result;
}
void BeautifulMatrix()
{// https://codeforces.com/contest/1772/problem/B
    bool flag = false;
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];
    }
    if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1];
        cout << "YES\n";
    else
    {
        for (int i = 0; i < 4; i++)
        {
            int tmp1 = arr[1][0];
            int tmp2 = arr[1][1];
            int tmp3 = arr[0][0];
            int tmp4 = arr[0][1];
            arr[0][0] = tmp1;
            arr[0][1] = tmp3;
            arr[1][0] = tmp2;
            arr[1][1] = tmp4;
            if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
            {
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if (!flag)
        cout << "NO\n"
    }
}
void Manhattan Distance()
{
    //Manhattan Distance misured by center of matrix
    long long a[5][5], c, b;
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1) 
            {
                b = i + 1;
                c = j + 1;
            }
        }
    }
    b = abs(3 - b);
    c = abs(3 - c);
    cout << c + b ;
}
void Manhattan distance()
{
    int a, ans;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> a;
            if(a == 1)
                ans = abs(2 - i) + abs(2 - j);
        }
        cout << ans ;
    }
}
int main()
{
    MinSumDiagonal();
}
