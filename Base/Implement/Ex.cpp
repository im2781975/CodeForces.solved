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
