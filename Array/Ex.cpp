#include<iostream>
#include<stdio.h>
#include<stdio.h>
using namespace std;

int n;

int main()
{	
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int a[10001];
		int mp,mn=1000000;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]
			if(a[i]<mn)
			{
				mn=a[i];
				mp=i;
			}
		}
		if(mp!=0){
			a[mp]=a[0];
			a[0]=mp; 
		}
		cout<<a[0];
		for(int i=1;i<n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
} 
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==0&&m==0) break;
		int a[1000][1000];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int ans=a[0][0],x=0,y=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(abs(a[i][j])>abs(ans))
				{
					ans=a[i][j];
					x=i+1;
					y=j+1;
				} 
			}
		}
		cout<<x<<" "<<y<<" "<<ans<<endl;
	}
	return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n,m,a[100001];
	while(cin>>n>>m,(n||m))
	{
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=m;
		sort(a,a+n+1);
		cout<<a[0];
		for(int i=1;i<=n;i++)
		{
			cout<<" "<<a[i]; 
		}
		cout<<endl;
	}
	return 0;
} 
#include<iostream>
using namespace std;

int n;
int a[33][33];

void fun()
{
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	for(int i=3;i<=30;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
}

int main()
{
	fun();
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i][1];
			for(int j=2;j<=i;j++)
			{
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
#include<iostream>

using namespace std;

int a,b;
int n[1000001];

int main()
{
	n[0]=1;
	for(int i=1;i<1000002;i++)
	{
		int m=i,f=1;
		while(m)
		{
			if(m%10==4) 
			{
				f=0;
				break;
			}
			else if(m%10==2&&m%100/10==6) 
			{
				f=0;
				break;
			}
			m/=10;
		}
		if(f) n[i]=n[i-1]+1;
		else n[i]=n[i-1];
	}	
	while(cin>>a>>b,(a||b))
	{
		cout<<n[b]-n[a-1]<<endl;
	}	
	return 0;
} 
#include<iostream>
using namespace std;
int a[55];
int n,k,m=0;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	k=a[k];
	for(int i=1;i<=n;i++)
		if(a[i]>=k&&a[i]) m++;
	cout<<m<<endl;
	return 0;
} 
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=a[k-1];
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>=temp && a[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
---
 int cnt = 0;
int i, j;
for (i = 0; i < n; i++){

     for (j = i+1; j < n; j++){

        if(v[j]>= v[i]){
             cnt++;
             if(j == n-1){
                cnt--;
             }
         }
         else {
             i = j;
             if(cnt > 0){
                cnt--;
             }
             break;
         }
 cout<<n-cnt<<endl;
-----
 while(k>0){
if(a[i]+a[i-1] < a[j]){
     i+=2;
    k--;
 }
else if(a[i]+a[i-1] > a[j]){
     j--;
    k--;
}
 else if(a[i]+a[i-1] == a[j] && k>=2){
     i+=2;
    j--;
     k-=2;
}
else {
    j--;
     k--;
}
}
 i--;
 int sum = 0;
for (int k = i; k <= j; k++)
{
   sum += a[k];
 }
cout<<sum<<endl;
----
void extendgcd(ll a, ll b, ll*v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return ;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;//pass an arry of size1 3
}
------
int n ,k;
     cin>>n>>k;
     int cnt = 0, arr[n+1];
    for(ll i = 1 ; i < n+1 ; i++)
    {
        cin>>arr[i];
    }

            for(ll i = 1; i < n+1 ; i++)
    {
        if(arr[i]>=arr[k] && arr[i]!=0){
        cnt++;    
    }
  }
  cout<<cnt;

}
int si = 0 , co = 0 , temp = 0 ;
 cin >> si ;
 int host [ si ] , guest [ si ] ;

  for(int  i = 0 ; i < si ; i++ )
      cin >> host [ i ] >> guest [ i ] ;


    for(int  i = 0 ; i < si ; i++ ){
        temp = guest [ i ] ;
        for(int j = 0 ; j < si ; j++)
        {

                if( temp == host [j] )
                    co += 1 ;
        }
    }


 cout <<co ;
