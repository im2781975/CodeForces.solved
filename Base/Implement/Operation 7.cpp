int x;
   cin>>x;
   int z[x];
   int d=0,f=0,m=0,n=0,first=0,last=0,i=0,sum=0;
   while(d++<x) cin>>z[d-1];
   cin>>f;
   d=0;
   while(d++<f)
   {
	   sum=0;
	   cin>>m>>n;
	   if(m>n) swap(&m,&n);
	   first=m-1,last=n-1;
	   int max=first,min=first;
	   for(i=first;i<=last;i++)
	   {
		   sum=sum+z[i];
		   if(z[i]>z[max]) max=i;
		   if(z[i]<z[min]) min=i;
	   }
	   if(d==f) cout<<z[max]<<" "<<z[min]<<" "<<sum;
	   else cout<<z[max]<<" "<<z[min]<<" "<<sum<<endl;
   }
------
int x,i=0,sum=0;
      cin>>x;
      while(x>0)
      {
    	  sum+=((x%10)*pow(2,i++));
    	  x/=10;
      }
      cout<<sum;
------
int x;
     cin>>x;
     char y[x];
     cin>>y;
     int z=0,f=x-1,c=0;
     while(z++<x/2)
     {
    	 if(y[z-1]==y[f]);
    	 else{
    		 c++;
    		 if(y[z-1]<y[f]) y[f]=y[z-1];
    		 else y[z-1]=y[f];
    	 }
    	 f--;
     }
     cout<<c<<endl<<y;
------
int a,b,n;
     cin>>a>>b>>n;
     while(true)
     {
    	 if(a>n) n-=gcd(a,n);
    	 else n-=gcd(n,a);
    	 if(n==0){
    		 cout<<"0";
    		 break;
    	 }
    	 if(n<0){
    		 cout<<"1";
    		    		 break;
    	 }
    	 if(b>n) n-=gcd(b,n);
    	    	 else n-=gcd(n,b);
    	 if(n==0){
    	     		 cout<<"1";
    	     		 break;
    	     	 }
    	     	 if(n<0){
    	     		 cout<<"0";
    	     		    		 break;
    	     	 }
     }
-----
int x;
		cout<<"enter no. of programs\n";
		cin>>x;
		float *arr=new float [x];
		float *bur=new float [x];
		int z=0;
		while(z++<x)
		{
			cout<<"enter the arrival time of p"<<z<<endl;
			cin>>arr[z-1];
			cout<<"and its burst time\n";
			cin>>bur[z-1];
		}
		cout<<"Enter 1 for FCFS or 2 for SJF-non primitive\n";
		int ff=0;
		cin>>ff;
		if(ff==1){
		float j=0,t=0,w=0;
		z=0;
		float suma=0,sumw=0;
		while(z++<x)
		{
			j+=bur[z-1];
			t=j-arr[z-1];
			w=t-bur[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
			cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
	    }
	    if(ff==2){
	    int c=0,s=0,min=0;
	    float *fin=new float [x];
	    z=0;
	    while(z++<x)
	    {
	    	s=0,min=0;
	    	while(s++<x)
	    	if(arr[s-1]<=c&&arr[s-1]>=0&&bur[s-1]<bur[min])   	min=s-1;
	    	arr[min]*=-1;
	    	c+=bur[min];
	    	fin[min]=c;
	    }
	    z=0;
	    while(z++<x) cout<<fin[z-1]<<endl;
	    z=0;
	    float suma=0,sumw=0;
	    while(z++<x)
		{
			float t=fin[z-1]-(arr[z-1]*-1);
			float w=t-bur[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
		cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
	    }
----
// 4A
    int x;
     cin>>x;
     for(int i=2;i<x;i+=2)
    	 if((x-i)%2==0)
    	 {
    		 cout<<"YES";
    		 return 0;
    	 }
     cout<<"NO";
-----
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
