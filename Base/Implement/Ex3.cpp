#include <iostream>
using namespace std;
int fun(int n)
{
	int ans=0;
	while(n)
	{
		if(n%10==2) ans++;
		n/=10;
	}
	return ans;
}
int main()
{
	int ans=0;
	for(int i=1;i<=2020;i++)
	{
		ans+=fun(i);
	}
	cout<<ans<<endl;
	return 0;
}          //   ans:624
//////
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
int main()
{
	int ans=0;
	for(int i=1;i<=2020;i++)
	{
		for(int j=1;j<=2020;j++)
		{
			if(gcd(i,j)==1) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}    //     ans:2481215
//////
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n,jg=0,yx=0;
	int x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x>=85) yx++,jg++;
		else if(x>=60&&x<85) jg++;
	}
	double j,y;
	j=jg/(n*1.0)*100;
	y=yx/(n*1.0)*100;
	//cout<<j<<endl<<y<<endl;
	j-int(j)>=0.5?jg=int(j)+1:jg=int(j);
	y-int(y)>=0.5?yx=int(y)+1:yx=int(y);
	cout<<jg<<"%"<<endl<<yx<<"%"<<endl;
	return 0;
}
////
#include <iostream>
using namespace std;


int main()
{
	int n=10000;
	int s=600/60;
	int t=0;
	while(n)
	{
		if(n-600<0)
		{
			t+=n/s;
			break;
		}
		n-=300;
		t+=120;
	}
	cout<<t<<endl;
	return 0;
}
#include <iostream>
using namespace std;

int year(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))
	return 366;
	return 365;
}

int main()
{
	int n=0;
	for(int i=1922;i<=2020;i++)
		n+=year(i);
	n-=22;
	cout<<n*24*60<<endl;
	return 0;
}
/////
#include <iostream>

using namespace std;

int main()
{
	int ans=0;
	int sum=0x3f3f3f3f;
	for(int i=1;i<=100;i++)
	{
		if(100%i==0)
		{
			if(100/i+i<sum)
			{
				sum=100/i+i;
				ans=i;
			}
		}
		else
		{
			if(100/i+i+1<sum)
			{
				sum=100/i+i+1;
				ans=i;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
/////
#include <iostream>
using namespace std;
int main()
{
	int ans=0;
	for(int i=0;i<2;i++)
	{
		ans+=4;
		for(int j=0;j<5;j++)
		{
			for(int k=0;k<6;k++)
			ans+=5;
			ans+=7;
		}
		ans+=8;
	}
	ans+=9;
	cout<<ans<<endl;
	return 0;
}
/////
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(sqrt(x*x+y*y)==int(sqrt(x*x+y*y))) cout<<1<<endl;
		else cout<<2<<endl;
	}
	return 0;
}
/////
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n&1)
	{
		cout<<n/2<<endl<<n/2+1<<endl;
	}
	else
	{
		cout<<n/2<<endl;
	}
	return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a,b,n,p,x,sum;
	cin>>n;
	while(n--)
	{
		cin>>p;
		sum=0;
		for(int i=0;i<p;i++)
		{
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
		if(n) cout<<endl;
	}
	return 0;
}
#include <iostream>
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
#include <bits/stdc++.h>
using namespace std;

int g[10000][10000];

int main()
{
	int ans=0;
	int x,y;
	x=2020,y=2020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4040,y=2031;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=2031,y=2034;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4020,y=4020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	//int ans=0;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(g[i][j]) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

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
#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
using namespace std;
int a[101];
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i])<abs(a[j]))
				{
					swap(a[i],a[j]);
				}
			}
		}
		for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
		cout<<a[n-1];
		cout<<endl;
	}
	return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;

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
#include <iostream>
#include <cmath>
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
#include <iostream>
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
#include <iostream>
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
#include <iostream>

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
#include <iostream>

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
#include <iostream>
#include <algorithm>
#include <stdio.h>
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
#include <iostream>
#include <stdio.h>
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
#include <iostream>

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
#include <iostream>

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
#include <iostream>

using namespace std;

int main()
{
	int n,ans=0;
	cin>>n;
	while(n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c>=2) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
include <iostream>
#include <cmath>
using namespace std;
int a;
int main() {
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
		{
			cin>>a;
			if(a)
			{
				cout << abs(3 - i) + abs(3 - j);
				return 0;
			}
		}
	return 0;
}


