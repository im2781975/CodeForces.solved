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
int main()
{
    int x=-2147483647;
    unsigned int y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    unsigned int z;
    z=4294967296;
    cout<<z<<endl;
    cout<<z-(-x)<<endl;

    int x,y;
    int x;
    cin>>x;
    for(int k=31;k>=0;k--)
    {
        if(x&(1<<k))
            cout<<"1";
        else
            cout<<"0";
    }
    int x=(1<<1)|(1<<3)|(1<<4)|(1<<8);
    int y=(1<<3)|(1<<6)|(1<<8)|(1<<9);
    int z=x|y;
 
    for(int i=0;i<32;i++)
    {
        if(z&(1<<i))
            cout<<i<<" ";
 
    }
     for(int b=0;b<(1<<31);b++)
    {
        cout<< b <<" ";
    }
}
