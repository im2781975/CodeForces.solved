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


