//Wrong Subtraction
#include <iostream>

using namespace::std;
int main()
{
    long long int n;
    int k,i;
    
    cin >> n >> k;
    
    for (i=0; i<k; i++)
    {
        if (n%10==0)
        {
            n=n/10;
        }
        else if (n%10!=0)
        {
            n--;
        }
    }
    cout << n;
}
#include <iostream>

using namespace::std;
int main()
{
    long long int n;
    int count=0,r;
    
    cin >> n;
    
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        if (r==4 || r==7)
        {
            count++;
        }
    }
    
    if (count==4 || count==7 )
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
//. Phoenix and Balance
#include <iostream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>

using namespace::std;
int main()
{
    int i,t;
    
    cin >> t;
    
    while (t--)
    {
        int n;
        
        cin >> n;
        
        long long int x = 0;
        
        for (i=0; i<=n; i++)
        {
            if (n==2)
            {
                x=2;
            }
            else if (n==i)
            {
                x=2*(i-1)-2;
            }
        }
        cout << x << endl;
    }

}
bool IsStep(int x)
	{
		for (int i = 0; i <= x; i++)
		{
			if (pow(2, i) == x)
				return true;
		}
		return false;
	}
	bool IsDiff(int n)
	{
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				if ((n / (int)pow(10, i)) % 10 == (n / (int)pow(10, j)) % 10&&j!=i)
					return false;
		return true;
	}
	bool IsPol(long long n)
	{
		int a[1000];
		int c = 0;
		while (n > 0)
		{
			a[c] = n % 10;
			c++;
			n /= 10;
		}
		if (c % 2 == 0)
		{
			int i = 0;
			int j = c - 1;
			while (i < j)
			{
				if (a[i] != a[j])
					return false;
				i++;
				j--;
			}
		}
		else
		{
			int i = c / 2;
			int j = c / 2;
			while (i>=0&&j<c)
			{
				if (a[i] != a[j])
					return false;
				i--;
				j++;
			}
		}
		return true;
	}
ll power(ll x,ll y,ll q)
{
	x%=q;
	if(y==0)return 1;
	if(y%2==0)return power(x%q*x%q,y/2,q)%q;
	return x%q*(power(x*x%q,y/2,q)%q)%q;
}
void exgcd(ll a,ll b,ll &x,ll &y)
//ax+by==1(mod b) xa%b=1 
{
	if(!b)x=1,y=0;
	else exgcd(b,a%b,y,x),y-=a/b*x;
}
int create(int i)
{
	int x;
	cin>>x;
	if(x==0)return 0;
	a[i]=x;
	create(2*i);
	create(2*i+1);
	return x;
}
void f(int x)
{
	if(!a[x])return ;
	cout<<a[x]<<" ";
	f(x*2);
	f(x*2+1);
}
int main()
{
	create(1);
	f(1);
	string x=""+char(127);
	cout<<x<<endl;
}
int main()
{
	int n,x,y,z,s=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		if(x+y+z>=2)s++;
	}
	cout<<s<<endl;
}
