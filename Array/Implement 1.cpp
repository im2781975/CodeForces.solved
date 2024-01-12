void chessAndBishop()
  {
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
    cout << maxrr << "\n";
    //  for(int i = 0; i < n ; i++){
    //   for(int j =0 ; j < m ; j++){
    //     result = max(result, maxr[i][j]);
    //   }
    //   }
    //   cout << result << "\n";
  }
void solve3()
  {
    // https://codeforces.com/contest/1772/problem/B
    bool flag = false;
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        cin >> arr[i][j];
      }
    }
    if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
    {
      cout << "YES"
          << "\n";
    }
    else
    {
      for (int i = 0; i < 4; i++)
      {
        int temp1 = arr[1][0];
        int temp2 = arr[1][1];
        int temp3 = arr[0][0];
        int temp4 = arr[0][1];
        arr[0][0] = temp1;
        arr[0][1] = temp3;
        arr[1][0] = temp2;
        arr[1][1] = temp4;
        if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
        {
          cout << "YES"
              << "\n";
          flag = true;
          break;
        }
      }
      if (!flag)
        cout << "NO"
            << "\n";
    }
  }
//Beautiful matrix
#include <bits/stdc++.h>
//#define pii pair<int,int>
using namespace std;
int main(){
long long a[5][5],c,b;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
    cin>>a[i][j];
    if(a[i][j]==1){
        b=i+1;
        c=j+1;
    }
  }
}
//cout/abs;
b=abs(3-b);
c=abs(3-c);
cout<<c+b<<endl;
    return 0;
}
include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <map>
//#include <bits>
using namespace std;
const int MAXN = 1e5;
int ans;
int main() {
	ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
	for(int i = 1 ; i <= 5 ; i++)
	{
		for(int j = 1 ; j <= 5 ; j++)
		{
			int a;
			cin >> a;
			if(a == 1)
			{
				ans = abs(3 - i) + abs(3 - j);
			}
		}
	}
	cout << ans;
}
