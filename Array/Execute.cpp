#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //find the minimum sum of diagonals in a 2D array of size n by m?
    ll n, m;
    cin >> n >> m;
    ll chess[n][m];
    ll maxr = 0;
    ll maxrr = 1000;
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> chess[i][j];
        // maxl[i-j] = chess[i][j];
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= m; j++)
      {
        // maxl[i-j] = chess[i][j];
        maxr += chess[i + j][j];
      }
      maxrr = min(maxrr, maxr);
      maxr = 0;
    }
    //cout << maxrr << "\n";
     for(int i = 0; i < n ; i++){
       for(int j =0 ; j < m ; j++){
           result = max(result, maxr[i][j]);
       }
       }
       cout << result << "\n";
  }
