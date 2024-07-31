 bool check(ll x, ll n, ll k) {
 
     ll a = k;
     ll sum = x;
     while (x / a > 0) {
         sum += x / a;
         a *= k;
     }
     if (sum >= n) return true;
     return false;
}
  int t;
    cin>>t;
    while(t--)
    {
        ll row,col;
        cin>>row>>col;
        ll ans;
        if(row>col)
        {
            if(row%2==0)
            {
                ans=(row*row)-col+1;
            }
            else
            {
                ans=((row-1)*(row-1))+col;
            }
        }
        else
        {
            if(col%2==0)
            {
                ans=((col-1)*(col-1))+row;
            }
            else
            {
                ans=(col*col)-row+1;
            }
        }
        cout<<ans<<endl;
 
    }
-------
    ll n;
    cin>>n;
 
    for(ll i=1;i<=n;i++)
    {
      ll k=(i*i);
      ll a=k*(k-1)/2;
 
      if(k>2)
        a=a-4*(i-1)*(i-2);
      cout<<a<<endl;
    }
-----
    int n;
    cin>>n;
   ll count=0;
    ll x=1,a=1;
    const unsigned int M = 1000000007;
    cout<<(1<<n)%M<<endl;
   for(int i=0;i<n;i++)
   {
       x=2*x%M;
   }
   cout<<x<<endl;
-----/
   const unsigned int M = 1000000007;
   ll t;
   cin>>t;
   while(t--)
   {
       ll a,b;
       cin>>a>>b;
 
        while(1)
       {
           if(a==0||b==0)
             break;
           else if((a+b)%3!=0){
 
            break;
           }
           if((a%3==0)&&(b%3==0))
           {
               a=0;
               b=0;
               break;
           }
           else
          {
           if(a>b)
           {
               a=a-2;
               b=b-1;
           }
           else{
            a=a-1;
            b=b-2;
           }
           }
       }
       if(a==0&&b==0)
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
 
   }
-------
   ll t;
   cin>>t;
   while(t--)
   {
       ll a,b;
       cin>>a>>b;
       if((2*a-b)%3==0&&(2*a-b)>=0&&(2*b-a)%3==0&&(2*b-a)>=0)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
//Bear and Big Brother
#include <iostream>

using namespace::std;
int main()
{
    int a,b,count=0;
    
    cin >> a >> b;
    
year:
    if (a>=b)
    {
        count++;
        goto end;
    }
    else
    {
       a=3*a;
       b=2*b;
        
    if (a>b)
    {
        goto year;
    }
    else
    {
        count++;
        goto year;
    }
    }
end:

    cout << count;

}
//Vasya the Hipster
#include <iostream>

using namespace::std;
int main()
{
    int a,b,c;
    
    cin >> a >> b;
    
    if (a<=b)
    {
        c=a;
        cout << c << " ";
    }
    else
    {
        c=b;
        cout << c << " ";
    }
    
    cout << (a+b-2*c)/2;
}
//Elephent
#include <iostream>

using namespace::std;
int main()
{
    int n,a,count=0;
    
    cin >> n;
    
    a=n/5;
    
    if (n%5!=0)
    {
        a++;
    }
    
    cout << a;
}
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
