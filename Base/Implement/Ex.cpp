#include<iostream>
using namespace std;

bool is_prime(int x)
{
	for(int i=2;i*i<x;i++)
	{
		if(x%i==0) return false;
	}
	return true;
}
int main()
{
	int x,y;
	while(cin>>x>>y,x+y)
	{
		bool f=true;
		for(int i=x;i<=y;i++)
		{
			if(!is_prime(i*i+i+41))
			{
				f=false;
				cout<<"Sorry"<<endl;
				break;
			} 
		}
		if(f) cout<<"OK"<<endl;
	}
	return 0;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int x=n;
		if(n==1) cout<<1<<endl;
		else if(n==2) cout<<4<<endl;
		else{
		while(n--)
		{
			if(n==2)
			{
				x*=2;
				break;
			}
			else
			{
				x=(x+1)*2+1;
			}
		}
		cout<<x<<endl;
	}
	}
	return 0;
int main()
{
	int w;
	cin>>w;
	for(int i=2;i<w;i+=2)
	{
		if((w-i)%2==0) 
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int f=1;
		for(int i=0;i<66;i++)
		{
			if((n*i+18)%65==0)
			{
				cout<<i<<endl;
				f=0;
				break;
			}
		}
		if(f) cout<<"no"<<endl;
	}
	return 0;
} 
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	int n1=max(x4,x2)-min(x1,x3);
	int n2=max(y2,y4)-min(y1,y3);
	int n=max(n1,n2);
	cout<<n*n<<endl;
	return 0;
}
*
#################   a^b
#include<iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(int a,int b,int p)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ans;
}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;	
	return 0;
}

################   64λ�����˷�
#include<iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(ll a,ll b,ll p)
{
	ll ans=0;
	while(b)
	{
	    if(b&1) ans=(ans+a)%p;
	    b>>=1;
	    a=a*2%p;
	}
	return ans;
	
}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;	
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<int> res; 
int main()
{
	while(cin>>n>>m)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=i*2;
			if(i%m==0)
			{
				res.push_back(sum/m);
				sum=0;
			}
		}
		if(n%m!=0) res.push_back(sum/(n%m));
		cout<<res[0];
		for(int i=1;i<res.size();i++)
		{
			cout<<" "<<res[i];
		}
		cout<<endl;
		res.clear();
	}
	return 0;
}
#include<iostream>

using namespace std;

int n;
int a,b;
int is_ans(int x)
{
	int ans=1;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			ans+=i;
			ans+=x/i;
		}
	} 
	return ans;
}
int main()
{
	//cout<<is_ans(200);
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(is_ans(a)==b&&is_ans(b)==a) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0; 
}
#include<iostream>

using namespace std;

int a,b,c,d,e,f;
int n;
int main()
{	
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c>>d>>e>>f;
		c+=f;
		if(c>=60) 
		{
			b+=c/60;
			c=c%60;
		} 
		//cout<<b<<" "<<c<<endl;
		b+=e;
		if(b>=60)
		{
			a+=b/60; 
			b%=60;
		}
		cout<<a+d<<" "<<b<<" "<<c<<endl; 
	}
	return 0;
}
*
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int n,k;
double a[101];
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>k;
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}	
		sort(a,a+k);
		printf("%.2lf\n",a[k-1]);
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
using namespace std;
typedef long long ll;
ll f(int n)
{
	if(n<=1) return n; 
	ll a=0,b=1;
	for(int i=1;i<n;i++)
	{
		ll c=a+b;
		a=b;
		b=c;
	}
	return b;
} 

int main()
{
	int n;
	while(scanf("%d",&n),n!=-1)
	{
		cout<<f(n)<<endl;
	}
	return 0;
}

*

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long a,b;
	while(cin>>hex>>a>>b)
	{
		if(a+b<0)
		{
			cout<<setiosflags(ios::uppercase)<<hex<<"-"<<-(a+b)<<endl;
		}
		else cout<<setiosflags(ios::uppercase)<<hex<<a+b<<endl;
	}
	return 0;
}
*
#include<iostream>

using namespace std;

int a,b;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a%b==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;	
	}
	return 0; 
} 
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	char s[1000];
	double a,b,ans;
	while(~scanf("%s",s))
	{
		scanf("%lf%lf",&a,&b);
		ans+=a*b;
	}
	printf("%.1lf\n",ans);
	return 0;
} 
*
#include<iostream>

using namespace std;
int t;
int a,b;

int solve(int a,int b)
{
	a=a%100;
	b=b%100;
	a+=b;
	return a%100; 
}

int main(){
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		
		cout<<solve(a,b)<<endl;
	}
	return 0;
}
ll pow(ll a,ll x,ll m){
    if(x==0){
        return 1;
    }
    ll temp=pow(a,x/2,m)%m;
    temp=(temp*temp)%m;
    if(x%2==0){
        return temp%m;
    }else{
        return (temp*a)%m;
    }
}
/ ll pri(ll n){
     ll count=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
             count++;
         }
    }
     return count;
 }
ll geo(ll a,ll x,ll m){
     if(x==1){
        return 1;

     }
     if(x==2){
         return (1+a)%m;
     }
     ll temp=geo(a,x/2,m)%m;
     ll p=pow(a,x/2,m)%m;
     ll p1=pow(a,x-1,m)%m;
      cout<<temp<<endl;    
     if(x%2==0){
         return (temp*(1+p))%m;
     }else{
         return ((temp*(1+p))%m+p1%m)%m;
     }
}
------
bool plin(int index)
{
    ll arr[N];
    int n;
    if(index == n)
    {
        return 1;
    }
    return (arr[index] == arr[n - index -1]) && plin(index + 1);
 
}
 
bool isPrime()
{
    int n;
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
void sieve()
{
    for(int i=2; i<maxn; i++) isprime[i]=1;
    for(int i=2; i*i<maxn; i++) if(isprime[i])
        {
            for(int j=i*i; j<maxn; j+=i) isprime[j]=0;
        }
}
