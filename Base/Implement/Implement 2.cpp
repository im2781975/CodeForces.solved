#include<iostream>
#include<stdio.h>
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
using namespace std;
int score[10001],ax=0,in=110,sum=0;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		cin>>score[i];
		ax=max(ax,score[i]);
		in=min(in,score[i]);
		sum+=score[i];
	}
	double ans=sum/(1.0*n);
	cout<<ax<<endl<<in<<endl;
	printf("%.2lf",ans);
	return 0;
}
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
int t,k,n,z=0;
     cin>>n>>k>>t;
     while(z++<n)
     {
    	 if(t>=k)
    	 {
    		 if(z==n) {cout<<k;
    		 t=t-k;}
    		 else{cout<<k<<" ";
    		 t=t-k;
    		 }
    	 }
    	 else{
    		 if(t>0)
    		 {
    			 if(z==n) {cout<<t;
    			     		 t=t-t;}
    			     		 else{cout<<t<<" ";
    			     		 t=t-t;
    			     		 }
    		 }
    		 else{
    			 if(z==n) {cout<<"0";
    			     		}
    			     		 else{cout<<"0"<<" ";

    			     		 }
    		 }
    	 }
     }
------
int x,y,z,g,f=0;
     char c;
     cin>>x;
     while(f++<x)
     {
    	 cin>>y>>c>>z;
    	 if(y%z==0) { if(f==x) cout<<y/z;
		 else cout<<y/z<<endl;}
    	 else{
    	 if(z==1)
    	 {
    		 if(f==x) cout<<y;
    		 else cout<<y<<endl;
    	 }
    	 else{
    		 if(y==1)
    		 {
        		 if(f==x) cout<<y<<c<<z;
        		 else cout<<y<<c<<z<<endl;
    		 }
    		 else{
    			 if(y<z)  g=gcd(z,y);
    			 else g=gcd(y,z);
        		 if(f==x) cout<<y/g<<c<<z/g;
        		 else cout<<y/g<<c<<z/g<<endl;
    		 }
    	 }
     }}
-----
unsigned long long m,n,x;
     cin>>n>>m;
     x=m%n;
     if(x==0) cout<<"Yes";
     else cout<<"No";
-----
int x,z=0,y;
  cin>>x;
  while(z++<x)
  {
      cin>>y;
      if(check(y)==1)
      {
          if(z==x) cout<<"Intelligent";
          else cout<<"Intelligent"<<endl;
      }
      else{
          if(z==x) cout<<"Stupid";
           else cout<<"Stupid"<<endl;
      }
  }
-----

	
