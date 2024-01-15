#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
int reverse(int x)
{
	int ans=0;
	while(x)
	{
		ans=ans*10+x%10;
		x/=10;
	}
	return ans;
}

bool check(int x)
{
	if(x<=n) return false;
	int d=x%100;
	x/=100;
	int m=x%100;
	return m>0&&m<13&&d<=month[m];
}

int main()
{

	cin>>n;
	for(int i=n/10000;i<=9999;i++)
	{
		int x=i*10000+reverse(i);
		if(check(x)) 
		{
			cout<<x<<endl;
			break;
		}
	}
	for(int i=n/1000000;i<=9999;i++)
	{
		int x=i*1000000+i*10000+reverse(i)*100+reverse(i);
		if(check(x))
		{
			cout<<x<<endl;
			break; 
		}
	}
	return 0;
}
*
#include<bits/stdc++.h>
using namespace std;

int n;
int m[4]={0};
int a,b,g;
// 123 213 231 132
int p[4]={0,1,2,3};
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>g;
		swap(p[a],p[b]);
		m[p[g]]++;
	}
	int max_n=0;
	int max_index=0;
	for(int i=1;i<4;i++)
	{
		if(m[i]>max_n)
		{
			max_n=m[i];
			max_index=i;
		}
	}
	cout<<max_index<<endl;
	return 0;
}


