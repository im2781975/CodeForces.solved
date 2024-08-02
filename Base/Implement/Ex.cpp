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
