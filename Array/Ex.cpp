#include<bits/stdc++.h>
using namespace std;

int g[10000][10000];

int main()
{
    int ans = 0;
    int x, y;

    // Setting values for g array based on conditions
    x = 2020, y = 2020;
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            if (abs(i - x) + abs(y - j) <= 2020)
                g[i][j] = 1;
        }
    }

    x = 4040, y = 2031;
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            if (abs(i - x) + abs(y - j) <= 2020)
                g[i][j] = 1;
        }
    }

    x = 2031, y = 2034;
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            if (abs(i - x) + abs(y - j) <= 2020)
                g[i][j] = 1;
        }
    }

    x = 4020, y = 4020;
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            if (abs(i - x) + abs(y - j) <= 2020)
                g[i][j] = 1;
        }
    }

    // Counting the number of elements with value 1 in the g array
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            if (g[i][j])
                ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
#include<iostream>
using namespace std;
const int N = 1010;
 
int t,n;
int w[N],v[N];
int f[N][N];
int main()
{
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=t;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	} 
	cout<<f[n][t];
	return 0;
} 
