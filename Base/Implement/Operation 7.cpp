//231A
    int x=0,c=0,i=0,d=0,y=0,z=0;
    cin>>x;
    while(z++<x)
    {
    	i=0,c=0;
    	while(i++<3)
    	{
    		cin>>y;
    		if(y==1) c++;
    	}
    	if(c>1) d++;
    }
    cout<<d;
------
//69A
   /*int x,z=0,i=0,a=0,b=0,c=0,suma=0,sumb=0,sumc=0;
   cin>>x;
   while(z++<x)
	   {
	    cin>>a>>b>>c;
	    suma+=a;
	    sumb+=b;
	    sumc+=c;
	   }
   if(suma==0&&sumb==0&&sumc==0) cout<<"YES";
   else cout<<"NO";
-----
long long x,y,z,x2,y2,z2,c;
   cin>>x>>y>>z;
   x2=x/z,y2=y/z,c=x2*y2;
   if(x%z) c+=y2;
   if(y%z) c+=x2;
   if(x%z&&y%z) c++;
   cout<<c;
------
int main()
{
    int h,n,f,c;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>f;
        if(f>h)
            c+=2;
        else
            c+=1;
    }
    cout<<c;
}
int main()
{
    int l,b,count;
   cin>>l>>b;
    while(1)
   {
       if(l>b)
        {
           //count++;
           break;
        }
        else
        {
            l=l*3;
            b=b*2;
            count++;
        }
    }
    cout<<count;
}
int main()
{
    int x=0;
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ;j++)
        {
            cin>>x;
            if(x==1)
                {
                    cout<<(abs(j-2)+abs(i-2));
                    return 0;
                }
        }
    }
}
int main()
{
    
}
