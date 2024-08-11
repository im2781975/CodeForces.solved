 /*int x;
       cin>>x;
       char *y=new char[x];
       int *s=new int[x];
       int *r=new int [x];
       int z=0,i=0,h=26;
       char a[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
       while(z++<x) cin>>y[z-1];
       for(z=0;z<x;z++)
    	   for(i=0;i<h;i++)
    		   if(y[z]==a[i])
    			   s[z]=i+1;
       i=x;
       for(z=0;z<x;z++)
       {
    	   int max=0;
    	   for(h=0;h<x;h++)
    		   if(s[h]>=s[max])
    			   max=h;
    	   r[max]=i--;
    	   s[max]=0;
       }
       z=1;
       cout<<r[0];
       while(z++<x) cout<<" "<<r[z-1];
       cout<<endl;*/
//-----------------------------------------------------------
    /*char x[1000][1000];
       int r,c,minr,minc,min,p=0,i,j;
       cin>>r>>c;
       for(i=0;i<r;i++)
           for(j=0;j<c;j++)
               cin>>x[i][j];
       for(i=0;i<r;i++)
           for(j=0;j<c;j++)
           {
               if(x[i][j]=='E')
               {
                   if(p==0)
                   {
                       min=(i-1)+(j-1);
                       minr=i+1,minc=j+1;
                       p++;
                   }
                   else{
                       if(min>((i-1)+(j-1)))
                       {
                           min=(i-1)+(j-1);
                           minr=i+1,minc=j+1;
                       }
                   }
               }
           }
       if(p==0) cout<<"-1"<<endl;
       else cout<<minr<<" "<<minc<<endl;*/
//----------------------------------------------------------------
//---------------------------------------------------
    /*  int x,y,z;
      cin>>x;
      while(x-->0){
          cin>>y>>z;
          int *a=new int [z];
          int f=0,s=0,c=0;
          while(s++<z) cin>>a[s-1];
          for(int j=0;j<z;j++)
                    {
                        int min=j;
                        for(int i=j+1;i<z;i++)
                            if(a[i]<a[min]) min=i;
                        swap(a[min],a[j]);
                    }
         // cout<<a[0]<<" "<<a[z-1]<<endl;
          s=0;
          while(s++<z)
          {
              if(f+a[s-1]<=y)
              {
                  f+=a[s-1];
                  c++;
              }
              else break;
          }
          cout<<c<<" "<<f<<endl;
      }*/
//---------------------------------------------------------------
     /* char c;
      int x,y;
      while(cin>>c>>x>>y){
          if(x<y) swap(&x,&y);
          switch(c){
          case('R'):{
              for(int i=0;i<y;i++)
                  {for(int j=0;j<x;j++)
                      cout<<"*";
                   cout<<endl;
                  }
              break;
          }
          case('S'):{
                      for(int i=0;i<y;i++)
                          {for(int j=0;j<x;j++)
                              cout<<"*";
                           cout<<endl;
                          }
                      break;
                  }
          case('T'):{
                      for(int i=0;i<x;i++)
                          {for(int j=0;j<=i;j++)
                              cout<<"*";
                           cout<<endl;
                          }
                      break;
                  }
          }
      }*/
//----------------------------------------------------------------------
      /*int x[12];
      int y=0;
      while(y++<12) cin>>x[y-1];
      cin>>y;
      int min=22,mini=0,minj=0,i=0,j=0,po=0;
      for(i=0;i<11;i++)
      {
          for(j=i+1;j<12;j++)
          {
              if(x[i]+x[j]>y)
              {
                  po++;
                  if(((i-0)+(j-0))<min)
                  {
                      min=(i-0)+(j-0);
                      mini=i;
                      minj=j;
                  }
              }
          }
      }
      if(po==0) cout<<"NULL";
      else cout<<mini+1<<" "<<minj+1;*/
      /*char x[10];
      int f=0,y=0;
      cin>>x;
      while(y++<10)
          if(x[y-1]=='F')
              f++;
      if(f==1||f==2||f==5||f==8||f==9)
          cout<<"NO"<<endl;
      else
          cout<<"YES"<<endl;*/
//------------------------------------------------------------
//----------------------------------------------------------
/*long long x[3],c=0;
      int y=0;
      while(y++<3) cin>>x[y-1];
      y=0;
      int min=0;
      while(y++<3){
    	  if(x[min]>x[y]) min=y;
      }
      int ff=0;
      float ffs=x[min],sds=10;
      while(ffs>10)
      {
    	  ffs/=10;
    	  ff++;
      }
      ffs=pow(sds,ff-1);
      y=0;
      while(y++<3) x[y-1]-=ffs;
      while(true){
          if(x[0]==x[1]&&x[0]==x[2])
          {
              c=c+x[0];
              break;
          }
           if(x[0]>x[1]&&x[0]>x[2])
      {
          swap(x[0],x[2]);
          if(x[0]>x[1])
              swap(x[0],x[1]);
      }
      if(x[0]>x[1]&&x[0]<=x[2])
      {
          swap(x[0],x[1]);
      }
      if(x[0]>x[2]&&x[0]<=x[1])
            {
              swap(x[0],x[2]);
            swap(x[1],x[2]);
            }
      if(x[0]<=x[1]&&x[0]<=x[2]&&x[1]>x[2])
           {
              swap(x[2],x[1]);
           }
      if(x[0]==0&&x[1]==0) break;
          if(x[0]+x[1]+x[2]>3)
          {
              x[2]-=2;
              x[1]-=1;
              c++;
          }
          else{
              if(x[0]+x[1]+x[2]==3)
              {
                  c++;
                 break;
              }
              else break;
          }
      }
      cout<<c+ffs<<endl;*/
//-----------------------------------------------------------
      /*int x;
      cin>>x;
      char y[1000][3];
      char *z=new char[x];
      int f=0,gr=0,pi=0,green=0,pink=0;
      for(int s=0;s<x;s++)
      {
          for(int ss=0;ss<3;ss++)
              cin>>y[s][ss];
      }
      for(int r=0;r<x;r++)
      {
          int g=0,rr=0;
          if(pi==5)
          {
              z[f++]='g';
              r++;
              green++;
              pi=0;
          }
          if(gr==5)
                  {
                      z[f++]='p';
                      r++;
                      pink++;
                      gr=0;
                  }
          for(int c=0;c<3;c++)
          {
              if(y[r][c]=='G')
              {
                  g++;
                  break;
              }
              if(y[r][c]=='B')
                          {
                              rr++;
                          }
          }
          if(g==1)
          {
              z[f++]='g';
              gr++;
              green++;
          }
          if(rr==3){
              z[f++]='p';
              pi++;
              pink++;
          }
      }
      gr=0;
      cout<<pink*3<<" "<<green*3<<endl;
      while(gr++<x)
      {
          if(z[gr-1]=='g') cout<<"Green"<<endl;
          if(z[gr-1]=='p') cout<<"Pink"<<endl;
      }
*/

//------------------------------------------------------------------
    /* int n=0,x=0,c=0,s=0;
     char y[3];
     cin>>n;
     while(c++<n)
     {
    	 cin>>y;
    	 s=0;
    	 while(s++<2)
    	 {
    		 if(y[s-1]=='+'){
    			 x++;
    			 break;
    		 }
    		 if(y[s-1]=='-'||y[s-1]=='�'){
    		     			 x--;
    		     			 break;
    		     		 }
    	 }
     }
     cout<<x<<endl;*/
//-------------------------------------------------------------------
    
			
//--------------------------------------------------------------
/* long long n,y,max=1,c=0;
    cin>>n>>y;
    long long x=n;
    while(x<=y)
    {
    	n=x;
    	c=1;
    	 while(n>1)
    	    {

    	    	if(n%2!=0) n=3*n+1;
    	    	else n=n/2;
    	    	c++;
    	    }
    	 if(c>max) max=c;
    	 x++;
    }
    cout<<max;*/
//----------------------------------------------------------------
   /* int x,z=1,h=0,l=0,y,f;
    cin>>x;
    cin>>y;
    while(z++<x)
    {
    	cin>>f;
    	if(f>y) h++;
    	if(f<y) l++;
    	y=f;
    }
    cout<<h<<" "<<l;*/
//-------------------------------------------------------------------
     /*float y=0,z[3],sum=0;
     int x=0;
     while(x++<4)
     {
    	 cin>>y;
    	 sum=sum+y;
     }
     int min=0;
     x=0;
     while(x++<3)
     {
    	 cin>>z[x-1];
    	 if(z[min]>z[x-1]) min=x-1;
     }
     x=0;
     float f=0;
     while(x++<3)
     {
    	 if(x-1==min) continue;
    	 f+=z[x-1];
     }
     sum+=f/2;
     if(sum>=90) {cout<<"A"; return 0;}
     if(sum>=80&&y<90) {cout<<"B"; return 0;}
     if(sum>=70&&y<80) {cout<<"C"; return 0;}
     if(sum>=60&&y<70) {cout<<"D"; return 0;}
     if(sum<60) {cout<<"F"; return 0;}*/
//-------------------------------------------------------------------------
    /*int x;
while( cin>>x){

     int l[x],r[x];
     int z=0,c=0;
     while(z++<x) cin>>l[z-1];
     z=0;
     while(z++<x) cin>>r[z-1];
     for(z=0;z<x;z++)
     {
    	 int m=0;
    	 for(int f=0;f<x;f++)
    	 {
    		 if(l[z]==r[f])
    		 {
    			 r[f]=0;
    			 m++;
    			 break;
    		 }
    	 }
    	 if(m==0) c++;
     }
     cout<<c;}*/
//---------------------------------------------------------------------------------------
     /*int n,b;
     cin>>n>>b;
     int res=n/b;
     int x[3]={abs(res-1)*b,res*b,(res+1)*b};
     int y[3]={abs(n-(abs(res-1)*b)),abs(n-(res*b)),((res+1)*b)-n};
     int z=0,min=0;
     while(z++<2)
     {
    	 if(y[z]<y[min]) min=z;
    	 if(y[z]==y[min])
    	 {
    		 if(x[z]>x[min]) min=z;
    	 }
     }
     cout<<x[min];*/
//---------------------------------------------------------------------------------------------
     /*int n,v,x,m;
     cin>>n>>v;
     int yy[n],d=0;
     while(d++<n) yy[d-1]=1;
     for(int i=0;i<n;i++)
     {
    	 cin>>x;
    	 for(int j=0;j<x;j++)
    	 {
    		 cin>>m;
    		 if(v>m) yy[i]=0;
    	 }
     }

     int z=0,c=0,r=-1;
     while(z++<n)
     {
    	 if(yy[z-1]==0) c++;
    	 if(c==1&&r==-1) r=z-1;
     }
     cout<<c<<endl;
     if(c>0) cout<<r+1;
     z=0;
     while(z++<n)
     {
    	 if(z-1==r) continue;
    	 if(yy[z-1]==0) cout<<" "<<z;
     }*/
//------------------------------------------------------------------------------------------------------------
    /* int t,k,n,z=0;
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
     }*/
//--------------------------------------------------------------
   /*  int x,y,z,g,f=0;
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
     }}*/
//-----------------------------------
     /* long long n,p=0,z=0,f=0,k=0;
     cin>>n;
     char *c=new char[n];
     cin>>c;
     while(z++<n)
    	 if(c[z-1]!='*') p++;
     z=0,f=1,k=20-p;
     while(z++<n-p) f=f*k--;
     cout<<f;*/
//----------------
     /*unsigned long long m,n,x;
     cin>>n>>m;
     x=m%n;
     if(x==0) cout<<"Yes";
     else cout<<"No";*/
//------------------------
    /* int x,y;
     cin>>x>>y;
     cout<<x+y;*/
//------------
    /* unsigned long long x,y;
     cin>>x;
     y=x*x;
     cout<<y;*/
//------------
/* int x,z=0,y;
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
  }*/
  //--------------------------------------
 /* long long z,f=0;
sd: while( cin>>z)
{
  for(long long  y=2;y<35;y++)
  {
   f=0;
   for(long long  x=2;x<=y&&f<z;x++)
   {
       f=pow(x,y)+pow(y,x);
       if(f==z){
           cout<<"YES"<<endl<<x<<" "<<y<<endl;
          goto sd;
       }
   }
  }
  cout<<"NO"<<endl;}*/
  //----------------------------------------
  /* int x;
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
   }*/
//--------------------------------------------
      /* int x,y;
       cin>>x>>y;
       if(x>y) cout<<lcm(y,x);
       else cout<<lcm(x,y);*/
//-----------------------------------
     /* int x,i=0,sum=0;
      cin>>x;
      while(x>0)
      {
    	  sum+=((x%10)*pow(2,i++));
    	  x/=10;
      }
      cout<<sum;*/
//--------------------------------
   /* int x;
    cin>>x;
    if(luck(x)==1) cout<<"YES";
    else cout<<"NO";*/
//----------------------------
    /* int x=0;
     cin>>x;
     cout<<binary(x)<<" "<<hex(x);*/
//-----------------------------------
     /*int x;
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
     cout<<c<<endl<<y;*/
//-------------------------------------
     /*int n,m,x,y;
     cin>>n>>m;
     char z[n+1][m+1],f;
     for(x=0;x<n;x++)
    	 for(y=0;y<m;y++)
    	 {
    		 cin>>f;
    		 if(f=='.') z[x][y]='0';
    		 else z[x][y]=f;
    	 }
     for(x=0;x<n;x++)
        	 for(y=0;y<m;y++)
        	 {if(z[x][y]=='*')
        	 {
        		 if(z[x+1][y]!='*'&&x+1>-1&&y>-1) z[x+1][y]++;
        		 if(z[x+1][y+1]!='*'&&x+1>-1&&y+1>-1) z[x+1][y+1]++;
        		 if(z[x+1][y-1]!='*'&&x+1>-1&&y-1>-1) z[x+1][y-1]++;
        		 if(z[x-1][y]!='*'&&x-1>-1&&y>-1) z[x-1][y]++;
        		 if(z[x-1][y-1]!='*'&&x-1>-1&&y-1>-1) z[x-1][y-1]++;
        		 if(z[x-1][y+1]!='*'&&x-1>-1&&y+1>-1) z[x-1][y+1]++;
        		 if(z[x][y-1]!='*'&&x>-1&&y-1>-1) z[x][y-1]++;
        		 if(z[x][y+1]!='*'&&x>-1&&y+1>-1) z[x][y+1]++;
        	 }
        	 }
     for(x=0;x<n;x++)
     { for(y=0;y<m;y++)
         	 {
         		 cout<<z[x][y];
         	 }
     if(x!=n-1) cout<<endl;
     }*/
//-------------------------------------------
     /*int a,b,n;
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
     }*/
//---------------------------------------------------------
     /*unsigned long long x;
     cin>>x;
     x=pow(x,2)+x+41;
     cout<<x;*/
//--------------------------------------------------------
	/*int x;
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
	    }*/
	    //--------------------------------------------------------------------
       /*int x;
		cout<<"enter no. of programs\n";
		cin>>x;
		float *arr=new float [x];
		float *bur=new float [x];
		float *bur2=new float [x];
		float *prr=new float [x];
		float *end=new float [x];
		int z=0,prrr=0;
		while(z++<x)
		{
			cout<<"enter the arrival time of p"<<z<<endl;
			cin>>arr[z-1];
			cout<<"and its burst time\n";
			cin>>bur[z-1];
			bur2[z-1]=bur[z-1];
						prrr+=bur[z-1];
			cout<<"and its priority\n";
			cin>>prr[z-1];
		}
arr[x]=1000000;
	int c=0,s=0,min=0,miny=0;
	    float *fin=new float [x];
	    z=0;
	    int max=0;
	    while(s++<x)
	    {
	    	end[s-1]=0;
	    }
	    s=0;
	    while(c<prrr)
	    {
	    	s=0,min=0;
	    	while(s++<x)
	    	if(arr[s-1]<=c&&end[s-1]==0&&prr[s-1]<prr[min]&&bur[s-1]>0)   	min=s-1;
	    	s=0;
	    //	if(c>=arr[max]) miny=arr[x];
	    //	else miny=min+1;
	    //	while(s++<x)
	    //	if(arr[miny]>=arr[s-1]&&arr[s-1]>=0&&s-1!=min) miny=s-1;

	    	bur[min]--;
	    		c++;

	    	if(bur[min]==0) {
	    	end[min]=1;
	    	fin[min]=c;
	    	prr[min]=100000;
			}
	    }
	    z=0;
	    while(z++<x) cout<<fin[z-1]<<endl;
	    z=0;
	    float suma=0,sumw=0;
	    while(z++<x)
		{
			float t=fin[z-1]-arr[z-1];
			float w=t-bur2[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
		cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
				//-----------------------------------------------------------------------------------
		/*int x;
		cout<<"enter no of process";
		cin>>x;
		int all[x][3],max[x][3],ava[1][3];
		int i,j;
		for(i=0;i<x;i++)
		{
			cout<<"enter the allocation of P"<<i+1<<" sperated each digit with a space\n";
			for(j=0;j<3;j++)
			cin>>all[i][j];
		}
		for(i=0;i<x;i++)
		{
			cout<<"enter the max. of P"<<i+1<<" sperated each digit with a space\n";
			for(j=0;j<3;j++)
			cin>>max[i][j];
		}
		cout<<"enter the available sperated each digit with a space\n";
		cin>>ava[0][0]>>ava[0][1]>>ava[0][2];
		for(i=0;i<x;i++){
		for(j=0;j<3;j++)
		max[i][j]-=all[i][j];}
		int z=0,c=0,min=0;
		while(z++<x)
		{
			for(i=0;i<x;i++)
			{
				c=0;
				for(j=0;j<3;j++)
				{
					if(max[i][j]<=ava[0][j]&&max[i][0]!=-1)
					c++;
					if(c==3)
					{
						min=i;
						goto dd;
					}
				}
			}
		dd:	if(c<3)
			{
				cout<<"The system is not in safe-state\n";
				return 0;
			}
			for(i=0;i<3;i++)
			ava[0][i]+=all[min][i];
			max[min][0]=-1;
			cout<<"P"<<min+1<<" &new work="<<ava[0][0]<<" "<<ava[0][1]<<" "<<ava[0][2];
			if(z!=x) cout<<" --->";
		}
		cout<<"\nThe system is in safe-state";*/
//-----------------------------------------------------------
       /*string s;
       int x;
       cin>>s;
       cin>>x;
       int z=0;
       string k="Final";
       while(z++<x)
       {
    	   if(z==1){
    		   cout<<s<<endl;
    		  s+='-';
    		   continue;
    	   }
    	   s+=k;
    	   if(z==x){
    		   s+="Wallahy";
    	      	   }
    	  if(z==x) cout<<s;
    	  else cout<<s<<endl;*/
//-------------------------------------------
       /* string x;
        string v="vaporeon",j="jolteon",f="flareon",e="espeon",u="umbreon",l="leafeon",g="glaceon",s="sylveon";
       cin>>x;
       int z=0,count[8]={0,0,0,0,0,0,0,0};
       while(z++<8)
       {
    	   if(x[0]!='.')
    	   {
    		                if(x[0]==v[0]) count[0]++;
    		                if(x[0]==j[0]) count[1]++;
    		                if(x[0]==f[0]) count[2]++;
    		                if(x[0]==e[0]) count[3]++;
    		                if(x[0]==u[0]) count[4]++;
    		                if(x[0]==l[0]) count[5]++;
    		                if(x[0]==g[0]) count[6]++;
    		                if(x[0]==s[0]) count[7]++;
    		                break;
    	   }
    	   if(x[z-1]!='.')
    	   {
    		   if(x[z-1]==v[z-1]) count[0]++;
    		   if(x[z-1]==j[z-1]) count[1]++;
    		   if(x[z-1]==f[z-1]) count[2]++;
    		   if(x[z-1]==e[z-1]) count[3]++;
    		   if(x[z-1]==u[z-1]) count[4]++;
    		   if(x[z-1]==l[z-1]) count[5]++;
    		   if(x[z-1]==g[z-1]) count[6]++;
    		   if(x[z-1]==s[z-1]) count[7]++;

    	   }
       }
       z=0;
       int max=0;
       while(z++<8)
    	   if(count[z-1]>count[max]) max=z-1;
       switch(max){
       case(0): {cout<<"vaporeon"; break;}
       case(1): {cout<<"jolteon"; break;}
       case(2): {cout<<"flareon"; break;}
       case(3): {cout<<"espeon"; break;}
       case(4): {cout<<"umbreon"; break;}
       case(5): {cout<<"leafeon"; break;}
       case(6): {cout<<"glaceon"; break;}
       case(7): {cout<<"sylveon"; break;}
       }*/
//----------------------------------------------------
     /* int x,z=0;
      cin>>x;
      string y[x];
      while(z++<x) cin>>y[z-1];
      int f,m;
      cin>>f;
      string name[f],d;
      int scr[f];
      z=0;
      while(z++<f) scr[z-1]=0;
      z=0;
      while(z++<f)
      {
    	  cin>>name[z-1];
    	  cin>>m;
    	  int dd=0;
    	  while(dd++<m)
    	  {
    		  cin>>d;
    		  int r=0;
    		  while(r++<x)
    			  if(d==y[r-1])
    				  scr[z-1]++;
    	  }
      }
      int max=0;
      z=1;
      while(z++<f)
      {
    	  if(scr[z-1]>scr[max]) max=z-1;
    	  if(scr[z-1]==scr[max])
    		  if(name[z-1]<name[max])
    			  max=z-1;
      }
      cout<<name[max];*/
//-----------------------------------------------
    /* int m,n,d=0;
     cin>>m>>n;
     string x,y,z,s,res[m*n];
     while(d++<m*n)
     {
    	 cin>>x>>y>>z;
    	 if(y=="0000000000"&&z=="0000000000") {
    		 if(d==1) cout<<x;
    		 else cout<<endl<<x;
    	 }
    	 else {if(z==s) cout<<x;
    	 if(z=="0000000000") cout<<endl<<x;
    	 }
    	 s=x;
     }*/
//--------------------------------------------------
     /*string s;
     getline(cin,s);
     unsigned int i;
     for(i=0;i<s.size();i++)
        	 s[i]=tolower(s[i]);
     for(i=0;i<s.size();i++)
     {
    	 if(s[i]<97||s[i]>122)
    	 {
    		 s.erase(i,1);
    		 i--;
    	 }
     }
     unsigned int z=0,c=0,f=s.size()-1;
     z=0;
     while(z++<s.size()/2)
     {
    	 if(s[z-1]!=s[f--])
    	 {
    		 c++;
    		 break;
    	 }
     }
     if(c==0) cout<<"I'll make the saddle";
     else cout<<"Alas, Jon, You failed my test";*/
//--------------------------------------------------------
     /*int x;
     string s;
     cin>>x>>s;

     if(s.size()<=x) cout<<s;
     else{
    	 cout<<s[0];
    	 if(s[0]==s[s.size()-1]&&s.size()-1>0)
    	 {
    		 cout<<s.size()-1;
    		 return 0;
    	 }
    	 else{
    		 if(s.size()-2>0) cout<<s.size()-2<<s[s.size()-1];
    		 else cout<<s[s.size()-1];
    	 }
     }*/
//------------------------------------------------------------
    /*string s;
    cin>>s;
    unsigned long long sum=0,sumn=0,z=0;
    while(z++<s.size())
    	sum+=(s[z-1]-48);
    while(true){
    	if(sum<10) break;
    	else{
    		sumn=0;
    		while(sum>0)
    		{
    			sumn+=sum%10;
    			sum/=10;
    		}
    		sum=sumn;
    	}
    }
    cout<<sum;*/
//---------------------------------------------------------
     /*string x,y;
     cin>>x>>y;
     int z=0,c=0;
     while(z++<x.size())
    	 if(x[z-1]!=y[z-1])
    		 c++;
     cout<<c;*/
//-----------------------------------------------------
    /* string s;
     int c=0,d=0,z=0;
     cin>>s;
    while(true)
    {
    	if(s[z]==s[++z]) c++;
    	else break;
    }
    while(z<s.size())
    {
    	d=0;
    	while(z<s.size())
    	{
    		if(s[z]==s[++z]) d++;
    		else break;
    	}
    	if(c!=d) {
    		cout<<"NO";
    		return 0;
    	}
    }
    cout<<"YES";*/
//------------------------------------------
     /*int x,z=0,maxl=0,maxch=0,maxchi=0;
     cin>>x;
     string s[x];
     while(z++<x)
    	 cin>>s[z-1];
     z=0;
     while(z++<x)
     {
    	 if(s[z-1].size()>=s[maxl].size()) maxl=z-1;
    	 int y=0;
    	 long long sum=0;
    	 while(y++<s[z-1].size())
    		 sum+=(s[z-1][y-1]-64);
    	 if(sum>=maxch)
    	 {
    		 maxch=sum;
    		 maxchi=z-1;
    	 }
     }
     cout<<s[maxchi]<<endl<<s[maxl];*/
//-------------------------------------------------
      /*string s,d;
      cin>>s;
      for(int i=0;i<s.size();i++)
    	  s[i]=tolower(s[i]);
      int z=0,f=0;

      while(z++<s.size())
      {
    	  if(s[z-1]!='a'&&s[z-1]!='u'&&s[z-1]!='o'&&s[z-1]!='i'&&s[z-1]!='e'&&s[z-1]!='y')
    	  {
    		  d[f]='.';
    		  d[f+1]=s[z-1];
    		  f+=2;
    	  }
      }
      z=0;
      while(z++<f) cout<<d[z-1];*/
//-----------------------------------------------------
      /*int a,b,c,x=0,y=0,d,z=0;
      double f=0;
      cin>>a>>b;
      c=a+b;
      while(a>0)
      {
    	  if(a%10!=0) x+=((a%10)*pow(10,f++));
    	  a/=10;
      }
      f=0;
      while(b>0)
            {
          	  if(b%10!=0) y+=((b%10)*pow(10,f++));
          	  b/=10;
            }
      f=0;
           while(c>0)
                 {
               	  if(c%10!=0) z+=((c%10)*pow(10,f++));
               	  c/=10;
                 }
      d=x+y;
      if(z==d) cout<<"YES";
      else cout<<"NO";*/
//----------------------------------------------------------
     /* int y[102],z[102],i,j,f=0,d=0;
      while(cin>>y[d++]);
      d--;
      if(d==1) {cout<<-1; return 0;}
      for(i=0;i<d;i++)
    	  for(j=i+1;j<d;j++)
    		  z[f++]=gcd(y[i],y[j]);
      i=0,j=0;
      while(i++<f)
    	  if(z[i-1]>j) j=z[i-1];
      cout<<j;*/
//----------------------------------------------------------------
     /*string s,y;
     int i=0;
     char c=' ';
     cin>>s;
     int d=0;
     while(i<s.size())
     {
    	 if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    	 { i+=3; d++;}
    	 else {
    		 if(y.size()!=0&&d!=0){
    		 y+=c;
    		 y+=s[i];}
    		 else y+=s[i];
    		 i++;
    		 d=0;
    	 }
     }
     cout<<y;*/
//--------------------------------------------------------------------
     /*int n;
     cin>>n;
     string s;
     cin>>s;
     char cc;
     int i=0,f=s.size()-1;
     int b=0,e=s.size()-1;
     for(int j=0;j<n;j++)
                         {
                             int min=j;
                             for(int i=j+1;i<n;i++)
                                 if(s[i]<s[min]) min=i;
                             cc=s[min];
                             s[min]=s[j];
                             s[j]=cc;
                         }
     for(int j=n;j<s.size();j++)
                              {
                                  int min=j;
                                  for(int i=j+1;i<s.size();i++)
                                      if(s[i]<s[min]) min=i;
                                  cc=s[min];
                                  s[min]=s[j];
                                  s[j]=cc;
                              }
     i=0;
      if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f--])
    		 {
    			goto x;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
      else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f--])
    	     		 {
    	     			goto x;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
   //  if(s[b]==s[e]){
   // 		 goto x;
   //  }
     x: i=0,b=0,e=n,f=n;
     if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f++])
    		 {
    			 cout<<"NO";
    			     	 return 0;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
     else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f++])
    	     		 {
    	     			 cout<<"NO";
    	     	     	 return 0;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
    // if(s[b]==s[e]){
    	//	 cout<<"NO";
    	//	 return 0;}

//---------------------------------------------------------------------
     /*string s,s2;
     cin>>s;
     int i=0,f=s.size()-1,c=0,count=0;
     char d;
     while(true)
     {
    	 c=0,f=s.size()-1,i=0;
    	 while(i<s.size()/2)
    		 if(s[i++]!=s[f--])
    		 {
    			 c++;
    			 break;
    		 }
    	 if(c==0) break;
    	 s2=s;
    	 i=0,f=s.size()-1;
    	 while(i<s.size()/2)
    	 {
    		 d=s[i];
    		 s[i]=s[f];
    		 s[f]=d;
    	 }
    	 i=0;
    	 while(i<s.size()){
    		 d=(s[i]-48)+(s2[i++]-48);
    		 s[i]=d;

    	 }

    	 count++;
     }
     cout<<count<<" "<<s;*/
//--------------------------------------------------------------------------
// 4A
    /* int x;
     cin>>x;
     for(int i=2;i<x;i+=2)
    	 if((x-i)%2==0)
    	 {
    		 cout<<"YES";
    		 return 0;
    	 }
     cout<<"NO";*/
//-------------------------------------------------------------------------
    //231A
    /*int x=0,c=0,i=0,d=0,y=0,z=0;
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
    cout<<d;*/
//---------------------------------------------------------------------------
   /*char y[3][3];
   int i,j,x=0,o=0,no=0;
   for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	   {
		   cin>>y[i][j];
		   if(y[i][j]=='X') x++;
		   if(y[i][j]=='O') o++;
		   if(y[i][j]=='.') no++;
	   }
   if((x==o||x-1==o))
   {
	   for(i=0;i<3;i++)
	   {

		   if(y[i][0]==y[i][1]&&y[i][0]==y[i][2])
			   {if(y[i][0]=='X')
			   {
				   if(x-1==o){
				   cout<<"the first player won";
				   return 0;}
				   goto ff;
			   }
			   if(y[i][0]=='O')
			  			   {
				               if(x==o){
			  				   cout<<"the second player won";
			  				   return 0;}
				               goto ff;
			  			   }}
		   if(y[0][i]==y[1][i]&&y[0][i]==y[2][i]){
			   if(y[0][i]=='X')
			   			   {
				   if(x-1==o){
				  				   cout<<"the first player won";
				  				   return 0;}
				  				   goto ff;
			   			   }
			   			   if(y[0][i]=='O')
			   			  			   {
			   				 if(x==o){
			   							  				   cout<<"the second player won";
			   							  				   return 0;}
			   								               goto ff;
			   			  			   }}
			   }
       if((y[0][0]==y[1][1]&&y[0][0]==y[2][2])||(y[0][2]==y[1][1]&&y[0][2]==y[2][0]))
       {if(y[1][1]=='X')
       			   { if(x-1==o){
	  				   cout<<"the first player won";
	  				   return 0;}
	  				   goto ff;
       			   }
       			   if(y[1][1]=='O')
       			  			   {
       				 if(x==o){
       							  				   cout<<"the second player won";
       							  				   return 0;}
       								               goto ff;
       			  			   }}
	   if(no==0)
	   {
		   cout<<"draw";
		   return 0;
	   }
	   if(x==o)
	   {
		   cout<<"first";
		   return 0;
	   }
	   if(x-1==o)
	   	   {
	   		   cout<<"second";
	   		   return 0;
	   	   }
   }
   ff:cout<<"illegal";*/
//--------------------------------------------------------------------------
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
   else cout<<"NO";*/
//-----------------------------------------------------------------------
   /*long long x,y,z,x2,y2,z2,c;
   cin>>x>>y>>z;
   x2=x/z,y2=y/z,c=x2*y2;
   if(x%z) c+=y2;
   if(y%z) c+=x2;
   if(x%z&&y%z) c++;
   cout<<c;*/
//------------------------------------------------------------------------
  /* int x;
   cin>>x;
   int y[x][x];
   for(int i=0;i<x;i++)
   {
	   int f=i,d=1;
	   for(int k=0;k<=i;k++)
	   {
		   y[f][x-d]=i+1;
		   if(i+1!=x) y[x-d][f]=i+1;
		   d++,f--;
	   }
   }
   for(int i=0;i<x;i++)
   { for(int k=0;k<x;k++)
   {  cout<<y[i][k];
      if(k!=x-1) cout<<" ";
   }
   if(i!=x-1) cout<<endl;}*/
//------------------------------------------------------------
   /*string x,y="heavy",z="metal";
   cin>>x;
   long long h=-5,m,c=0;
   for(int i=0;;i++)
   {
	   h=x.find(y,h+5);
	   if(h>-1)
	   {
		   m=x.length();
		   for(int j=0;;j++)
		   {
			   m=x.rfind(z,m-1);
			   if(m>-1&&m>h+4) c++;
			   else break;
		   }
	   }
	   else break;
   }
   cout<<c;*/
   //------------------------------------------------------------------
    /*string s;
	cin>>s;
	int z=0,c=0;
	while(z++<s.size())
	{
		if(s[z-1]=='h'&&c==0)
		{
			c++;
			continue;
		}
		if(s[z-1]=='e'&&c==1)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==2)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==3)
		{
			c++;
			continue;
		}
		if(s[z-1]=='o'&&c==4)
		{
			c++;
			break;
		}
	}
	if(c==5) cout<<"YES";
	else cout<<"NO";*/
//---------------------------------------------------------------
    /*string s,d,r;
    int z=0;
    cin>>s>>d;
    while(z++<s.size())
    {
    	if(s[z-1]==d[z-1]) r+='0';
    	else r+='1';
    }
    cout<<r;*/
//------------------------------------------------------------
   /*int x,z=0;
   cin>>x;
   int y[x];
   while(cin>>y[z++]);
   int l=0,k=x;
   for(int i=0;i<x;i++)
   {
	   if(y[i]){
		   int m=0;
		   for(int j=i+1;j<x;j++)
		   {
			   if(y[i]==y[j])
			   {
				   m++;
				   y[j]=0;
			   }
		   }
		   if(m>0) k-=m;
		   if(m>l) l=m;
	   }
   }
   cout<<l+1<<" "<<k;*/
//---------------------------------------------------------------
    /*int x,z=0,even=0,odd=0,eve=0,od=0;
    cin>>x;
    int y[x];
    while(z<x) cin>>y[z++];
    z=0;
    while(z++<x)
    {
    	if(y[z-1]%2==0) {even++; eve=z-1;}
    	else {odd++; od=z-1;}
    }
    if(even==1) cout<<eve+1;
    else cout<<od+1;*/
//---------------------------------------------------------
    /*string s;
    int z=0,c=0;
    cin>>s;
    while(z<s.size())
    {
    	if(s[z]==s[z+1]) c++;
    	else c=0;
    	if(c>=6){
    		cout<<"YES";
    		return 0;
    	}
    	z++;
    }
    cout<<"NO";*/
    //----------------------------------------------------------
   /* int z=1;
    string s;
   cin>>s;
   if(s[0]>=97&&s[0]<=122)
   {
	   while(z++<s.size())
		   if(s[z-1]>=97&&s[z-1]<=122)
		   {
			   cout<<s;
			   return 0;
		   }
	   s=caps(s);
   }
   else{
	   while(z++<s.size())
		   if(s[z-1]>=97&&s[z-1]<=122)
		   {
			   cout<<s;
			   return 0;
		   }
	   s=caps(s);
   }
   cout<<s;*/
//---------------------------------------------------------------
   /*int n,k,z=0,c=0;
   cin>>n>>k;
   int y[n];
   while(cin>>y[z++]);
   z=0;
   while(z++<n)
   {
	   if(y[z-1]>=y[k-1])
		   {if(y[z-1]>0)
			   c++;}
	   else break;
   }
   cout<<c;*/
//-------------------------------------------------------------
   /*int x,k,y,f,z=0,i=0,c=0;
   cin>>x>>k;
   int s[x];
   while(z++<x)
   {
	   cin>>y;
	   int d=0,m=0;
	   while(d++<y)
	   {
		   cin>>f;
		   if(k>f&&m==0)
		   {
			   c++;
			   m++;
			   s[i++]=z;
		   }
	   }
   }
   z=1;
   if(c==0) cout<<c;
   else{
	   cout<<c<<endl<<s[0];
	   while(z++<i) cout<<" "<<s[z-1];
   }*/
//------------------------------------------------------------
   /*int a,b,c,d,m,v;
   cin>>a>>b>>c>>d;
   m=(3*a)/10;
   if(a-((a*c)/250)>m) m=a-((a*c)/250);
   v=(3*b)/10;
   if(b-((b*d)/250)>v) v=b-((b*d)/250);
   if(m>v) cout<<"Misha";
   if(v>m) cout<<"Vasya";
   if(v==m) cout<<"Tie";*/
//------------------------------------------------------------
   /*int z=0,c=0,y[26];
   string s;
   cin>>s;
   while(z++<s.size()) y[s[z-1]-97]=1;
   z=0;
   while(z++<26) if(y[z-1]==1) c++;
   if(c%2) cout<<"IGNORE HIM!";
   else cout<<"CHAT WITH HER!";*/
//--------------------------------------------------------------
   /*long x;
   int z=0,c=0,y[4]={0,0,0,0},i=0;
   while(z++<4)
   {
	   cin>>x;
	   if(y[0]!=x&&y[1]!=x&&y[2]!=x&&y[3]!=x) {y[i++]=x; c++;}
   }
   cout<<4-c;*/
//------------------------------------------------------------
   /*long long x;
   cin>>x;
   if(x%2) cout<<-1*((x+1)/2);
   else cout<<x/2;*/
//-------------------------------------------------------
   /*string s;
   cin>>s;
   int z=0;
   while(z++<s.size()) if(s[z-1]=='H'||s[z-1]=='Q'||s[z-1]=='9') {cout<<"YES"; return 0;}
   cout<<"NO";*/
//----------------------------------------------------------
   /*int x,a,b,in=0,max=0,z=0;
   cin>>x;
   while(z++<x)
   {
	   cin>>a>>b;
	   in=(in-a)+b;
	   if(in>max) max=in;
   }
   cout<<max;*/
//-------------------------------------------------------------
   /*int x=0,y,n=0;
   cin>>y;
   while(++n)
   {
	   x+=(n*(n+1))/2;
	   if(x>y)
	   {
		   cout<<n-1;
		   return 0;
	   }
   }*/
//------------------------------------------------------------
  /*int m,n,c=0;
  cin>>n>>m;
  for(;n*m>0;n--,m--,c++);
  if(c%2) cout<<"Akshat";
  else cout<<"Malvika";*/
//---------------------------------------------------
  /*int x,z=0,y,c=0,d[5]={0,0,0,0,0};
  cin>>x;
  while(z++<x)
  {
	  cin>>y;
	  d[y]++;
  }
  c=c+d[4]+d[3]+(d[2]/2);
  d[1]-=d[3];
  if(d[2]%2) {c++; d[1]-=2;}
  if(d[1]>0) c+=(d[1]/4);
  if(d[1]%4&&d[1]>0) c++;
  cout<<c;*/
//-------------------------------------------------------
  /*int n,i=0;
  cin>>n;
  int x[n];
  while(i++<n) cin>>x[i-1];
  for(i=1;i<=n;i++)
	  for(int j=0;j<n;j++)
		  if(x[j]==i)
		  {
			  if(i==1) cout<<j+1;
			  else cout<<" "<<j+1;
		  }*/
//---------------------------------------------------------
  /*int n,z=1,y=1,m=2;
  cin>>n;
  int x[n]={1,1};
  n--;
  for(int i=2;i<=n;i+=2)
  {
	  x[i]=z+y;
	  x[i+1]=y;
	  z=y;
	  y=x[m++];
  }
  cout<<x[n];*/
//-----------------------------------------------------------------
  /*int x;
  cin>>x;
  int y[x];
  int z=0;
  while(z++<x) cin>>y[z-1];
  for(int i=0;i<x;i++)
  {
	  int max=i;
	  for(int k=i+1;k<x;k++)
		  if(y[k]>y[max])
			  max=k;
	  swap(y[i],y[max]);
  }
  int sum=0,sumarr=0,c=0;
  for(int i=0;i<x;i++)
  {
	  sumarr=0;
	  sum+=y[i];
	  c++;
	  for(int k=i+1;k<x;k++)
		  sumarr+=y[k];
	  if(sum>sumarr) break;
  }
  cout<<c;*/
  //----------------------------------------------------------------
   string s;
   cin>>s;
   int x=(s.size()+1)/2;
   int y[x],z=0,f=0,min=0;
   while(z<s.size())
	   {y[f++]=s[z];
	   z+=2;
	   }
   for(int i=0;i<x;i++)
   {
	   min=i;
	   for(int k=i+1;k<x;k++)
		   if(y[k]<y[min])
			   min=k;
	   swap(y[min],y[i]);
   }
   z=0,f=0;
   while(z<s.size())
	   {
	   s[z]=y[f++];
	   z+=2;
	   }
   cout<<s;
        return 0;
}
 
#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;

const int N=0;
// The array Problem codechef
// int main(){  
// 	int t;
// 	long long n;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 		cin>>n;
// 		int arr[n]={};
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		int ar[n]={};
// 		int s=0;
// 		for(int i=0;i<n;i++){
// 			for (int j=0;j<n;j++){
// 				if(i!=j){
// 					s+=arr[j];
// 				}
				
// 			}
// 			ar[i]=s;
// 				s=0;
// 		}
// 		for(int i=0;i<n;i++){
// 			cout<<ar[i]<<" ";
// 		}
// 		cout<<endl;
		
// 	}
// }


//https://codeforces.com/contest/1453/problem/A


// int main(){
// 	int t,c;
// 	long long n,m;
// 	cin>>t;
// 	while(t--){
// 		c=0;
// 		cin>>n>>m;
// 		long long bottom[n],left[m];
// 		for(int i=0;i<n;i++){
// 			cin>>bottom[i];
// 		}
// 		for(int i=0;i<m;i++){
// 			cin>>left[i];
// 		}
		
// 		for(int i=0;i<n;i++){
// 			for (int j=0;j<m;j++){
// 				if(bottom[i]==left[j])
// 					c++;
// 			}
// 		}
		
		
		
// 	cout<<c<<endl;
	
//     }
// 	return 0;
// }

//https://codeforces.com/contest/1450/problem/B	
// int main(){
// 	long long t,n,k,x[n],y[n],d;
// 	int c=0,cc;
// 	cin>>t;
// 	while(t--){
// 		cin>>n>>k;
// 		for(int i=0;i<n;i++){
// 			cin>>x[i]>>y[i];
// 		}
// 		for(int i=0;i<n;i++){
// 			for (int j=i+1;j<n;j++){
// 				d=abs(x[i]-x[j])+abs(y[i]-y[j]); 
// 				if(d<=k){
// 					c++;
// 				}
// 				else{
// 					c=0;
// 					break;
// 				}
				
// 			}
// 			if(c!=0)
// 			{
// 				cc=1;
// 				break;
// 			}
// 			else{
// 				cc=-1;
// 			}
// 		}
// 	 cout<<cc<<endl;
		
// 	}
// 	return 0;
	
// }

//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
// unfinished
// bool sortbysecond(const pair<string,int> &a,
//               const pair<string,int> &b)
// {
//     if (a.second != b.second){
//     	return (a.second > b.second);
//     }
//     if((a.first.compare(0, b.first.size(), b.first) == 0
//         || b.first.compare(0, a.first.size(), a.first) == 0))
//     {
    	 
 
//         return a.first.size() > b.first.size();
//     }
 
    
//     else{
//         return a.first < b.first;
//     }

    	
    
    
// }
// int main(){
// 	long long n;
	
// 	cin>>n;
// 	// vector<string> name;
// 	// vector<int> marks;
// 	vector<pair<string, int>> v;
// 	for(int i=0;i<n;i++){
// 		cin>>v[i].first>>v[i].second;
		
// 	}
	
// 	sort(v.begin(),v.end(),sortbysecond);
// 	for(int i=0;i<n;i++){
// 		cout<<v[i].first<<v[i].second;
		
// 	}
// 	return 0;
	
// 	}

//https://codeforces.com/problemset/problem/1325/B
// int main(){
// 	long long t,n,k,d,c,el=0;
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
	
// 	   long long arr[n],narr[n*n];
// 	   for(int i=0;i<n;i++){
// 		  cin>>arr[i];
		  
// 	      }
// 	   //   for(int i=0;i<n;i++){
// 		  // cout<<arr[i]<<" ";
		  
		  
// 	   //    }
// 	   //    cout<<endl;
// 	    // for(int i=0;i<n*n;i++){
// 	    // 	if(i<n){
// 	    // 		narr[i]=arr[i];
// 	    // 	}
// 	    // 	else{
// 	    // 		narr[i]=narr[i-n];
// 	    // 	}
// 	    // }
// 	    // for(int i=0;i<n*n;i++){
// 	    // 	cout<<narr[i]<<" ";
// 	    // }
// 	    sort(arr,arr+n);
// 	    c=n;
// 	   //  for(int i=0;i<n;i++){
// 		  // cout<<arr[i];
		  
// 	   //    }
// 	    for(int i=0;i<n-1;i++){
	    	
// 	    	if(arr[i]==arr[i+1]){
// 	    		c--;
// 	    	}     
	    
// 	    }
	    
// 	   cout<<c<<endl; 
// 	}
// }

//https://codeforces.com/contest/977/problem/C
//unfinished

// int main(){
// 	long long t,n,k,d,c;
	
	
	
//      cin>>n>>k;
     
     
//      int arr[n];
//      for(int i=0;i<n;i++){
//      	cin>>arr[i];
//      }
//      sort(arr,arr+n);
     
//       if(n==1 && k!=0){
//      	cout<<arr[0]+1<<endl;
//      }
//     else if(k<n && n!=1){
    	
//     	if(k==0){
//         	int l=arr[k]-1;
//         	if(l>0){
//         		cout<<l<<endl;
//         	}
//         	else{
//         		cout<<-1<<endl;
//         	}
//         }
    	
//        else if(arr[k-1]==arr[k]){
//     	cout<<-1<<endl;
//            }
        
//     	else{
//     		cout<<arr[k-1]<<endl;
//     	}
    	
//     }
//     else if(n==1 && k==0){
//     	int l=arr[k]-1;
//     	if(l>0){
//         		cout<<l<<endl;
//         	}
//         	else{
//         		cout<<-1<<endl;
//         	}
//     }
// 	else if(n==k){
// 	    cout<<arr[k-1]<<endl;
//       }  
//   return 0; 
// }
      
// int main(){
// 	string s1="Hello";
// 	s1[0]='Y';
// 	cout<<s1;
// }


//https://codeforces.com/contest/352/problem/B
 //unfinisheaaad

// int main(){
// 	long long t,n,k,d,c,i=0;
// 	pair<int,int> p;
// 	cin>>n;
// 	long long arr[n];
// 	for (int i =0;i<n;i++){
// 		cin>>arr[i];
// 	}
	 
//     while(i<n-1){
// 		for (int j =i+1;j<n;j++){
// 		if(arr[i]==arr[j]){
// 			d=j-i;
// 			i=j;
// 		}
// 	}
// 	}

// }

//https://www.hackerrank.com/challenges/reduced-string/problem?isFullScreen=true

// unfinished

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

// string superReducedString(string s) {
//     int l,i; string r;
//     l=s.size();
//     for( i=0;i<l-1;i++){
//         if(s[i]==s[i+1]){
//             if(i+2<l){
//                 s.erase(s.begin()+i,s.begin()+i+2);
//                 l=s.size();
//                 i=0;
            
//             }
//             if(i+2==l){
//                 // s.erase(i);
//                 // s.erase(i+1);
//                 // l=s.size();
//                 // i=0;
//                 s="Empty String";
//             }
            
            
            
//         }
//     }
//     if (s.empty()){
//         s="Empty String";
//     }
    
//     return s;

// }

// int main()
// {
//     // ofstream fout(getenv("OUTPUT_PATH"));

//      string s;
//     // getline(cin, s);
    
//     cin>>s;

//     string result = superReducedString(s);

//     // fout << result << "\n";
    
//     cout<<result<<" ";

//     // fout.close();

//     return 0;
// }


//https://codeforces.com/contest/1659/problem/A

//Wrong answer on test case 3

// int main(){
// 	long long t,n,r,b,bb,c,q;
	
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n>>r>>b;
// 		char s[n];
// 		for(int i=0;i<n;i++){
// 			s[i]='R';
// 			// cout<<s[i];
// 		}
// 		// cout<<endl;
// 		bb=b;
// 		for (int j=0;j<n;j++){
// 			q=r/(bb+1);
// 			q=floor(q);
// 			s[j+q]='B';
// 			r-=q;
// 			bb-=1;
// 			j+=q;
			
// 		}
// 		for(int i=0;i<n;i++){
// 			cout<<s[i];
// 		}
// 		cout<<endl;
		
//     }
//     return 0;
// }

//pointers and 2D arrays

// int main(){
// 	int B[2][3];
// 	for (int i=0;i<2;i++){
// 		for(int j=0;j<3;j++){
// 			B[i][j]=i+j;
// 		}
// 	}
// 	for (int i=0;i<2;i++){
// 		for(int j=0;j<3;j++){
// 			cout<<B[i][j];
// 		}
// 		cout<<endl;
	
// 	}
// 	int (*p)[3]=B;
// 	cout<<B<<endl;
// 	cout<<B[0]<<endl;
// 	cout<<&B[0][0]<<endl;
// 	cout<<**B<<endl;
// }





// int main(){
// 	long long t,n,r,b,bb,c,q;
// 	string rate;
	
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		long long arr[n];
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		if(n<3){
// 			cout<<-1<<endl;
// 			continue;
// 		}
// 		sort(arr,arr+n);
		
// 		for(int i=0;i<n-1;i++){
// 			c=1;
// 			for(int j=i+1;j<n;j++){
// 				if(arr[i]==arr[j]){
// 					c++;
				
// 				}
				
// 				if(c==3){
// 					break;
// 				}
				
// 				if(arr[j]>arr[i]){
// 					break;
// 				}
				
// 			}
// 			if(c>=3){
// 				cout<<arr[i]<<endl;
// 				break;
// 			}
// 		}
// 		if(c<3){
// 			cout<<-1<<endl;
// 		}
// 	}
// }

// int main(){
// 	long long t,l,n,r,b,bb,c,q;
// 	string s,ss;
// 	n=0;
// 	c=0;
	
// 	cin>>t;
// 	while(t--){
// 		c=0;
// 		cin>>s;
// 		l=s.size();
// 		if(l==1){
// 			cout<<"NO"<<endl;
// 			continue;
// 		}
		
// 		for(int i=0;i<l;i++){
			
		
// 			if(i==0){
// 				if(s[i]==s[i+1]){
// 					c=1;
// 				}
// 				else{
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
// 			else if(i==l-1){
// 				if(s[i]==s[i-1]){
// 					c=1;
// 				}
// 				else{
// 					c=0;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
// 			else if(s[i-1]==s[i]||s[i+1]==s[i]){
// 				c=1;
// 			}
// 			else{
// 				c=0;
// 				cout<<"NO"<<endl;
// 				break;
// 			}
			
// 		}
// 		if(c==1){
// 			cout<<"YES"<<endl;
// 		}
// 	}
// }




// int main(){
// 	long long t,n,r,b,bb,c,q;
// 	string s;
// 	c=1;
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		long long arr[n];
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		c=1;
// 		if(arr[0]%2==0){
// 			for(int i=0;i<n;i+=2){
// 				if(arr[i]%2!=0){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
// 			if(c==-1){
// 			continue;
// 		}	
			
// 		}
// 		else if(arr[0]%2==1){
// 			for(int i=0;i<n;i+=2){
// 				if(arr[i]%2!=1){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
			
// 		if(c==-1){
// 			continue;
// 		}	
// 		}
// 		if(arr[1]%2==0){
// 			for(int i=1;i<n;i+=2){
// 				if(arr[i]%2!=0){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
			
// 			if(c==-1){
// 			continue;
// 		}	
// 		}
// 		else if(arr[1]%2==1){
// 			for(int i=1;i<n;i+=2){
// 				if(arr[i]%2!=1){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
			
// 			if(c==-1){
// 			continue;
// 		}	
// 		}
// 		if(c==1){
// 			cout<<"YES"<<endl;
// 		}


// 	}
// }


// int main(){
// 	long long t,n,r,b,bb,c,q,l;
// 	string s;
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		cin>>s;
// 		bool flag=true;
// 		for(int i=0;i<n;i++){
// 			while(i<n && s[i]=='W') i++;
// 			if(i==n) break;
// 			int blue =0, red=0;
// 			while(i<n && s[i]!='W'){
// 				if(s[i]=='B') blue++;
// 				else red++; 
// 				i++;
// 			}
			 
// 			if(red==0 || blue==0){
// 				flag=false;
// 				break;
// 			}
			
// 		}
// 		if(flag){cout<<"YES"<<endl;}
// 		else cout<<"NO"<<endl; 
// 	}
// }
	
	// c=1;
	
	// cin>>t;
	// while(t--){
	// 	cin>>n;
	// 	cin>>s;
	// 	if(n==1){
	// 		if(s=="W"){
	// 			cout<<"YES"<<endl;
	// 			continue;
	// 		}
	// 		else{
	// 			cout<<"NO"<<endl;
	// 			continue;
	// 		}
	// 	}
	// 	if(n==2){
	// 		if(s=="WW" || s=="RB" || s=="BR"){
	// 			cout<<"YES"<<endl;
	// 			continue;
	// 		}
	// 		else{
	// 			cout<<"NO"<<endl;
	// 			continue;
	// 		}
			
	// 	}
		
		
	// 	l=s.size();
	// 	char c='W';
	// 	bool flag=true;
	// 	for(int i=0;i<l;i++){
	// 		while(i<n && s[i]=='W') i++;
	// 		if(i==n) break;
	// 		int blue =0, red=0;
	// 		while(i<n && s[i]!='W'){
	// 			if(s[i]=='B') blue++;
	// 			else red++; 
	// 			i++;
	// 		}
			 
	// 		if(red==0 || blue==0){
	// 			flag=false;
	// 			break;
	// 		}
			
	// 	}
	// 	if(flag){cout<<"YES"<<endl;}
	// 	else cout<<"NO"<<endl;
	// 	}
		
		
			
		
			// if(i==0){
		// 		if(s[i]=='R' || s[i]=='B'){
		// 			if(s[i+1]=='R' || s[i+1]== 'B'){
		// 			 c=1;
		// 		      }
		// 		   else{
		// 			 cout<<"NO"<<endl;
		// 			 break;
		// 		     }
		// 		}
				
		// 	}
		// 	else if(i==l-1){
		// 		if(s[i]=='R' || s[i]=='B'){
		// 			if(s[i-1]=='R' || s[i-1]== 'B'){
		// 			 c=1;
		// 		      }
		// 		   else{
		// 		   	 c=0;
		// 			 cout<<"NO"<<endl;
		// 			 break;
		// 		     }
		// 		}
		// 	}
		// 	else if(s[i]=='R'){
		// 		if(s[i+1]=='R' || s[i+1]=='B'|| s[i-1]=='R'|| s[i-1]=='B'){
		// 			if(s[i-1]=='W'){
		// 				if(s[i+1]=='B'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 				}
		// 			}
		// 			if(s[i+1]=='W'){
		// 				if(s[i-1]=='B'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 					cout<<"NO"<<endl;
		// 		            break;
		// 				}
		// 			}
					
					
		// 		}
		// 		else{
		// 		    c=0;
		// 		    cout<<"NO"<<endl;
		// 		    break;
		// 	    }
				
		// 	}
		// 	else if(s[i]=='B'){
		// 		if(s[i+1]=='R' || s[i+1]=='B'|| s[i-1]=='R'|| s[i-1]=='B'){
		// 			if(i!=0 && s[i-1]=='W'){
		// 				if(s[i+1]=='R'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 				}
		// 			}
		// 			if(i!=(n-1) && s[i+1]=='W'){
		// 				if(s[i-1]=='R'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 					cout<<"NO"<<endl;
		// 		            break;
		// 				}
		// 			}
					
					
		// 		}
		// 		else{
		// 		    c=0;
		// 		    cout<<"NO"<<endl;
		// 		    break;
		// 	    }
				
		// 	}
			
			
	
		// }
		// if(c==1){
		// 	cout<<"YES"<<endl;
		
// TLE on test case 3
// int main(){
// 	long long t, n,c,l;
// 	string s;
// 	cin>>t;
// 	while(t--){
// 		c=0;
// 		cin>>n;
// 		l=n*(n-1)/2;
// 		string arr[n];
// 		vector<pair<string, string>> v;
// 		for (int i=0;i<n;i++){
// 			cin>>arr[i];
// 			v[i].first=arr[i];
// 		}
		
		
// 		for(int i=0;i<l;i++){
// 			if(j==n)
// 				j=
// 			v[i].first=arr[j];
// 			v[i].second=arr[j+1];
			
			
			
// 		}
// 		cout<<c<<endl;
// 	}
// }

// if((arr[i][0]==arr[j][0] && arr[i][1]!=arr[j][1]) ||  (arr[i][0]!=arr[j][0] && arr[i][1]==arr[j][1])){
// 					c++;
// 				}

int main(){
	long long t, n,c,l,r,ans;
	string s;
	long long arr[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
				r=i;
				c=j;
			}
		}
	
	}
	ans=abs(2-r)+abs(2-c);
	cout<<ans<<endl;
}
	
	
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctype.h>

using namespace std;
int multiply(int res[],int res_size);
/*void remove_element ( int index ){
    for (int i = 0;i<v.size();i++){
        if (i == index){
            swap(v[i],v[i+1]);
            index++;
        }
    }
    v.pop_back();
}*/
void power2 (int n){
    int res[500],res_size = 1,s = 0;
    res[0] = 1;
    for (int i = 1;i<=n;i++){
        res_size =  multiply(res,res_size);
    }
    for (int i = res_size-1;i>=0;i--){
        cout<<res[i];
        s += res[i];
    }
    cout<<endl<<s;
}
int multiply(int res[],int res_size){
    int carry = 0;
    for (int i = 0;i<res_size;i++){
        int prod = res[i]*2 + carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        res[res_size] = carry%10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}
int sum (int fn_1[],int fn_2[],int res_size){
}
int d1[10]={0,3,3,5,4,4,3,5,5,4};
int d2[10]={3,6,6,8,8,7,7,9,8,8};
int d3[10]={0,3,6,6,6,5,5,7,6,6};
int d4[10]={0,10,10,12,11,11,10,12,12,11};
int letter_count(int n){
    if (n%100==10&&n>100)
        return (d4[n/100]+3+3);
    if (n<=9)
        return d1[n%10];
    if (n>9&&n<=19)
        return d2[n%10];
    if (n>19&&n<=99)
        return (d1[n%10]+d3[n/10]);
    if (n%100==0)
        return d4[n/100];
    if (n%100>10&&n%100<20)
        return (d4[n/100]+3+d2[n%10]);
    if (n>100 && n%100>0&&n%100<10)
        return (d4[n/100]+3+ d1[n%10]);
    if (n%100>19&& n%100<=99)
        return (d4[n/100]+3+d3[(n%100)/10] + d1[n%10]);

}
int main() {

    int m[5][5],I=0,J = 0;
    for (int i =0;i<5;i++){
        for (int j = 0;j<5;j++){
            cin>>m[i][j];
            if (m[i][j] == 1){
                //cout<<i<<"**"<<j<<endl;
                 I = i-2;
                 J = j-2;
                 I = abs(I);
                 J = abs(J);

            }

        }
    }
    cout<<I+J;
}

    /*string s;
    cin>>s;
    char S = toupper(s[0]);
    cout<<S;
    for (int i = 1;i<s.size();i++)
        cout<<s[i];

}
    /*string s;
    cin>>s;
    int h = s.size()+1/2;
    //cout<<h;
    int a[h];
    a[0] = s[0] - '0';
    a[1] = s[2] - '0';
    for (int i =4;i<s.size();i+=2)
        a[(i/2)] = s[i] - '0';
    for (int i =((s.size()+1)/2)-1;i>=0;i--){
        for (int j = 0;j<=i;j++){
            if (a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }

    }
    cout<<a[0];
    for (int i =1;i<((s.size()+1)/2);i++)
        cout<<"+"<<a[i];

}
    /*string s;
    cin>>s;
    int a[s.size()],t = 1;
    for (int i =0 ;i<s.size();i++)
        a[i] = s[i] - '0';
    for (int i =1;i<s.size();i++){
        if (a[i] == a[i-1]){
            t++;
        }else {t = 1;}
        //cout<<t<<endl;
        if (t>6){
            cout<<"YES";
            t = 500;
            break;
        }
    }
    if (t!=500)
        cout<<"NO";

}
    /*string s ,t;
    cin>>s;
    cin>>t;
    char S[s.size()],T[t.size()];
    int ans = 0;
    for (int i=0;i<s.size();i++){
        S[i]=(tolower(s[i]));
        T[i] = tolower(t[i]);
    }
    for (int i =0 ;i<s.size();i++){
        if ((int)S[i]>(int)T[i]){
            ans = 1;
            break;
        }
        if ((int)S[i]<(int)T[i]){
            ans = -1;
            break;
        }

    }
    cout<<ans;


}
    /*string s;
    cin>>s;
    char a[100];
	//cout<<tolower(s[2]);
    for (int i=0;i<s.size();i++)
        a[i]=(tolower(s[i]));
    for (int i =0;i<s.size();i++)
        if (a[i] == 'o' || a[i]=='u' || a[i] == 'i' || a[i] == 'e' || a[i] == 'a' || a[i] == 'y')
            a[i] = '0';
    for (int i = 0;i<s.size();i++){
        if(a[i] != '0')
            cout<<"."<<a[i];
    }

}
    /*int n,k,a[50],t = 0;
    cin>>n>>k;
    for (int i =0 ;i<n;i++)
        cin>>a[i];
    for (int i = 0;i<n;i++){
        if (a[i]>=1 && a[i]>=a[k-1])
            t++;
    }
    cout<<t;
}
    /*int n;
    string word;
    cin>>n;
    for (int i = 0;i<n;i++){
        cin>>word;
        if (word.size()>10){
            cout<<word[0]<<word.size()-2<<word[word.size()-1]<<endl;
        }else{cout<<word<<endl;}
    }

}
    /*unsigned long long int m,n,a,N,M;
    cin>>m>>n>>a;
    M = m/a;
    N = n/a;
    if (m%a!=0)
        M++;
    if (n%a!=0)
        N++;
    unsigned long long int ans = M*N;
    cout<<ans;


}
    /*int n;
    cin>>n;
    if (n%2==0 && n!=2)
        cout<<"YES";
    if (n%2==1 || n==2)
        cout<<"NO";
}
    /*bool mark[1000000];
    int primes[100000],t=1;
    mark [0] = 0,mark[1] = 0;
    for (int i = 2;i<1000000;i++){
        mark[i] = 1;
    }
    for (int i =0;i<1000000;i++){
        if (mark[i] == 1){
            primes[t] = i;
            t++;
            for (int j = i;j<=1000000;j+=i)
                mark[j] = 0;

        }
    }
    int s = 0;
    for (int i = 1;i<=24;i++){
        cout<<primes[i]<<endl;
        s+=primes[i];
    }
    cout<<s;

}
/*int a[15][15];
    for (int i =0;i<15;i++){
        for (int j= 0;j<15;j++){
                cin>>a[i][j];
        }
    }
   /* for (int i =0;i<15;i++){
        for (int j = 0;j<15;j++){
                if (a[i][j]!=0)
                    cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
/*    unsigned long long int s = a[0][0],maxi = 1,z=0;
    for (int i = 0;i<=1;i++){
            //cout<<i<<" ";
        for (int j = i;j<=2;j++){

             //cout<<j<<" ";
             if (j>i+1)
                j = 3;
            for (int k = j;k<=3;k++){

                 //cout<<k<<" ";
                 if (k>j+1)
                    k = 4;
                for (int l = k;l<=4;l++){

                     //cout<<l<<" ";
                    if (l>k+1)
                        l = 5;
                    for (int m =  l;m<=5;m++){

                       // cout<<m<<" ";
                        if (m>l+1)
                            m = 6;
                        for (int n=m;n<=6;n++){

                            //cout<<n<<" ";
                            if (n>m+1)
                                n=7;
                            for (int o = n;o<=7;o++){

                               // cout<<o<<" ";
                               if (o>n+1)
                                o = 8;
                                for (int p = o;p<=8;p++){

                                    //cout<<p<<" ";
                                    if (p>o+1)
                                        p = 9;
                                    for (int q = p;q<=9;q++){

                                        //cout<<q<<" ";
                                        if (q>p+1)
                                            q = 10;
                                        for (int r = q;r<=10;r++){

                                            //cout<<r<<" ";
                                            if (r>q+1)
                                                r=11;
                                            for (int s = r;s<=11;s++){

                                                //cout<<s<<" ";
                                                if (s>r+1)
                                                    s = 12;
                                                for (int t = s;t<=12;t++){
                                                    if (t>s+1)
                                                        t=13;
                                                    //cout<<t<<" ";
                                                    for (int u = t;u<=13;u++){
                                                        //cout<<u<<" ";
                                                        if (u>t+1)
                                                            u=14;

                                                        for (int v = u;v<=14;v++){
                                                            //cout<<v<<" ";
                                                            if (v>u+1)
                                                                v=15;

                                                            s =a[0][0]+a[1][i]+a[2][j]+a[3][k]+a[4][l]+a[5][m]+a[6][n]+a[7][o]+a[8][p]+a[9][q]+a[10][r]+a[11][s]+a[12][t]+a[13][u]+a[14][v];
                                                            if (s>maxi)
                                                                maxi = s;
                                                            z++;
                                                            if (z>40000){
                                                                cout<<maxi<<endl;
                                                                break;
                                                            }
                                                            //cout<<t<<endl;
                                                            cout<<z<<"-"<<s<<endl;
                                                            s = 0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<maxi;

}
    /*long int s=11;
    cout<<letter_count(911);
    for (int i = 1;i<=999;i++)
        s+= letter_count(i);
    cout<<endl<<s;

}
    /*power2(1000);


}
    /*string s[100];
    unsigned int a[100][50];
    for (int i = 0;i<100;i++){
        cin>>s[i];
    }
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            a[i][j] = s[i][j] - '0';
        }
    }

    cout<<endl<<endl;
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int t = 1;
    int ans[50];
    int prod = 0,carry = 0;;
    for (int i = 49;i>=0;i--){
            prod = 0;
        for (int j = 0;j<100;j++){
            prod += a[j][i];
        }
        prod += carry;
        ans[i] = prod%10;
        carry = prod/10;

        cout<<t<<"-"<<prod<<"-"<<carry<<endl;
        t++;
    }
    cout<<carry;
    for(int i = 0;i<50;i++){
        cout<<ans[i];
    }


}
  /*const unsigned int Size = 20;
  unsigned int matrix[Size][Size];

  // read from console
  for (unsigned int y = 0; y < Size; y++)
    for (unsigned int x = 0; x < Size; x++)
      cin >> matrix[x][y];

  unsigned int best = 0;
  // walk through all cells of the matrix
  for (unsigned int y = 0; y < Size; y++)
    for (unsigned int x = 0; x < Size; x++)
    {
      // three more horizontal cells (right)
      if (x + 3 < Size)
      {
        unsigned int current = matrix[x][y] * matrix[x+1][y] * matrix[x+2][y] * matrix[x+3][y];
        if (best < current)
          best = current;
      }
      // three more vertical cells available (down)
      if (y + 3 < Size)
      {
        unsigned int current = matrix[x][y] * matrix[x][y+1] * matrix[x][y+2] * matrix[x][y+3];
        if (best < current)
          best = current;
      }
      // three more diagonal cells (right-down)
      if (x + 3 < Size && y + 3 < Size)
      {
        unsigned int current = matrix[x][y] * matrix[x+1][y+1] * matrix[x+2][y+2] * matrix[x+3][y+3];
        if (best < current)
          best = current;
      }
      // three more diagonal cells (left-down)
      if (x + 3 < Size && y >= 3)
      {
        unsigned int current = matrix[x][y] * matrix[x+1][y-1] * matrix[x+2][y-2] * matrix[x+3][y-3];
        if (best < current)
          best = current;
      }
    }

  cout << best << endl;

}

  /*int H, W;
  cin >> W >> H;
  int a[20][20];
  std::vector< std::vector<int> > map;
  map.resize(H); // H rows
  for(int i = 0; i < H; ++i)
    map[i].resize(W); // in every row, create W columns
  // thus this is equivalent to a HxD array

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> map[i][j];
    }

  }

  cout << endl;
  //Print
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << map[i][j] << " ";
      a[i][j] == map[i][j];
    }
    cout<<endl;
  }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
        cout << a[i][j] << " ";
        //a[i][j] == map[i][j];
    }
    cout<<endl;
  }
  long long int num1 = 1,num2 = 1,num3 = 1,maxim = 1;
  for (int i = 0;i<H;i++){
    for (int j = 0; j< W;j++){
        num1 = map[i][j] * map[i+1][j+1] * map[i+2][j+2] * map[i+3][j+3];
        num2 = map[i][j] * map[i][j+1] * map[i][j+2] * map[i][j+3];
        num3 = map[i][j] * map[i+1][j] * map[i+2][j] * map[i+3][j];
        if (num1>maxim)
            maxim = num1;
        if (num2>maxim)
            maxim = num2;
        if (num3>maxim)
            maxim = num3;
    }
  }
  cout << endl;
  cout<<maxim;

}
    /*int b[19][19];
    std::vector < std::vector<int> > a;
    a.resize(19);
    for (int i = 0;i<=19;++i)
        a[i].resize(19);
    for(int j = 0;j<=19;j++){
        for(int i = 0;i<=19;i++){
            cin>>a[j][i];
        }
    }
    /*a[0][19]= 8;
    a[1][19]= 0;
    a[2][19]= 65;
    a[3][19]= 91;
    a[4][19]= 80;
    a[5][19]= 50;
    a[6][19]= 70;
    a[7][19]= 21;
    a[8][19]= 72;
    a[9][19]= 95;
    a[10][19]= 92;
    a[11][19]= 57;
    a[12][19]= 58;
    a[13][19]= 40;
    a[14][19]= 66;
    a[15][19]= 69;
    a[16][19]= 36;
    a[17][19]= 16;
    a[18][19]= 54;
    a[19][18] = 67;
    a[19][19] = 48;*/
    //for (int i = 0;i<=18;i++)
      //  cin>>a[i][19];
    /*cout<<endl;
    for(int i = 0;i<=19;i++){
        for(int j = 0;j<=19;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<a[19][18]<<endl;*/
    /*long long int num = 1,num1 = 1,num2 = 1,num3 = 1,num4 = 1,maxi = 1;
    for(int i = 0;i<=19;i++){
        for(int j = 0;j<=19;j++){
                num = a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
                num1 = a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
                num2 = a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
                if (num>maxi)
                    maxi = num;
                if (num1>maxi)
                    maxi = num1;
                if (num2>maxi)
                    maxi = num2;

        }
    }
    cout<<maxi;*/


/*string s;
cin>>s;
//cout<<s;
int a[1000];
for (int i = 0;i<=999;i++){
   a[i] = s[i] - '0';
}
long long int maxi = 1,num = 1;
for (int i = 0;i<=987;i++){
    num = 1;
    for(int j = i;j<=i+12;j++)
        num *= a[j];
    if (num>maxi)
        maxi = num;
}
cout<<maxi;
//cout<<a[0];


}*/

/*************&&&******/
cout << "Possible" << endl;
  if (r == 1 || c == 1)
  {
   for (int i = 0; i < r; i++)
   {
    cout << vec[i] << endl;
   }
  }
  else
  {
   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
     cout << '^';
    }
    cout << endl;
   }
  }
 }
 else
 {
  cout << "Impossible" << endl;
 }
}
 
void getIndex(vector<int> v, int K)
{
 auto it = find(v.begin(), v.end(), K);
 
 if (it != v.end())
 {
  int index = it - v.begin();
  cout << index << endl;
 }
 else
 {
  cout << "-1" << endl;
 }
}
 
bool isvowel(char ch)
{
 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
  return true;
 return false;
}
#define vll vector<ll>
bool isupper(char ch)
{
 return ch >= 'A' && ch <= 'Z';
}
void palta(int a, int b)
{
 int temp = a;
 a = b;
 b = temp;
}
ll countwayssplit3equalsum(vector<ll> a, ll n)
{
 ll cnt[n] = {0}, s = 0;
 
 for (ll i = 0; i < n; i++)
 {
  s += a[i];
 }
 
 if (s % 3 != 0)
  return 0;
 
 s /= 3;
 
 ll ss = 0;
 
 // If the sum of elements from i-th to n-th
 // equals to sum of part putting 1 in cnt
 // array otherwise 0.
 for (ll i = n - 1; i >= 0; i--)
 {
  ss += a[i];
  if (ss == s)
   cnt[i] = 1;
 }
 
 // Calculating the cumulative sum
 // of the array cnt from the last index.
 for (ll i = n - 2; i >= 0; i--)
  cnt[i] += cnt[i + 1];
 
 ll ans = 0;
 ss = 0;
 
 // Calculating answer using original
 // and cnt array.
 for (ll i = 0; i + 2 < n; i++)
 {
  ss += a[i];
  if (ss == s)
   ans += cnt[i + 2];
 }
 return ans;
}
 
bool isPalindrome(string s) {
    return equal(begin(s), end(s), rbegin(s));
}
 
 
void binarybeast880(){
	string s;
	cin>>s;
	vector<char>str;
	for(int i = 0 ; i < s.length() ; i++)
	{
		if(s[i] != '+') str.push_back(s[i]);
	}
	sort(str.begin(), str.end());
//	for(auto it : str) cout<<it<<" ";
    for(int i = 0 ; i < str.size() ; i++)
    {
    	cout<<str[i];
    	if(i != str.size()-1)cout<<'+';
	}
}
 
 
main()
{
 ll t = 1;
// cin >> t;
 for (int i = 1; i <= t; i++)
 {
          //cout << "Case #" << i << ": ";
  binarybeast880();
 }
}
/*
ID: amirnas1
PROG: cowtour
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <iomanip>
#include <math.h>
#include <bitset>
#include <sstream>
using namespace std;

/*
vector<string> prim;
string s;
vector<int> dp;

int main()
{

	ifstream cin;
	cin.open("prefix.in");
	ofstream cout;
	cout.open("prefix.out");
	
	string p;
	s = "";
	cin>>p;
	while (p!= ".")
	{
		prim.push_back(p);
		cin>>p;
	}
	cin.ignore();
	string l;
	while (getline(cin,l)) s += l;
	dp = vector<int> (s.size()+1, -1);
	for (int i = s.size(); i>= 0; i--)
	{
		if (i == s.size()) dp[i] = i;
		else
		{
		int m = i;
			for (int j = 0; j < prim.size(); j++)
			{
				if (i+prim[j].size() <= s.size()) if (s.substr(i,prim[j].size()) == prim[j]) m = max(m, dp[i+prim[j].size()]);
			}
			dp[i] = m;
		}
	}
	cout<<dp[0]<<endl;
}



long long dp[201][101][2];

long long mod(long long a, long long m)
{
	if (a>=0) return a%m;
	else
	{
		return (a+m)%m;
	}
}
long long solve(int n, int k, int f)
{
	if (n==0 && k==0) return 1;
	if (n == 0) return 1;
	if (k <= 0) return 0;
	if (n == 1) return 1;
	if (dp[n][k][f] != -1) return dp[n][k][f];
	int a = n-1;
	long long s = 0;
	long long r;
	for (int i = 1; i < a; i++)
	{
		r = solve(i,k-1, 0) * solve(a-i, k-1, 0);
		if (f) r -= (solve(i,k-2, 0) * solve(a-i, k-2,0));
		s += r;
		s = mod(s,9901);
	}
	return dp[n][k][f] = s;
}

int main()
{
	
	ifstream cin;
	cin.open("nocows.in");
	ofstream cout;
	cout.open("nocows.out");
	
	int n, k;
	cin>>n>>k;
	for (int i=0; i<201; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			
			dp[i][j][0] = dp[i][j][1] = -1;
		}
	}
	cout<<solve(n,k,1)<<endl;
	//system("pause");
}


int main()
{
	int n, m;
	cin>>n>>m;
	vector<int> f(m);
	for (int i = 0; i < m; i++)
	{
		cin>>f[i];
	}
	sort(f.begin(), f.end());
	int r = 10000;
	for (int i = 0; i+n-1 < m; i++ )
	{
		if (f[i+n-1] - f[i] < r) r = f[i+n-1] - f[i];
	}
	cout<<r<<endl;
}


int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b,a%b);
}

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ab = gcd(a,b);
	int cd = gcd(c,d);
	a /=ab;
	b /= ab;
	c /= cd;
	d /= cd;
	if ((double)a/(double)c < (double)b/(double)d)
	{
		int ra = d*a;
		int rb = b*c;
		int gab = gcd(ra,rb);
		int resa = rb/gab - ra/gab;
		int resb = rb/gab;
		int gres = gcd(resa,resb);

		cout<<resa/gres<<"/"<<resb/gres<<endl;
	}
	else
	{
		int ra = d*a;
		int rb = b*c;
		int gab = gcd(ra,rb);
		int resa = ra/gab - rb/gab;
		int resb = ra/gab;
		int gres = gcd(resa,resb);
		cout<<resa/gres<<"/"<<resb/gres<<endl;
	}
}


long long pow2(long long n, long long mod)
{
	if (n == 0) return 1;
	if (n%2 ==0)
	{
		long long r = pow2(n/2,mod);
		return (r*r)%mod;
	}
	else
	{
		return (2*pow2(n-1,mod))%mod;
	}
}

long long mod(long long a, long long b)
{
	if (a  > 0)
	{
		return a%b;
	}
	else return (a+b)%b;
}

int main()
{
	long long n,m,k;
	cin>>n>>m>>k;
	if (n - (n-m)*k > 0)
	{
		long long r = pow2(((n - (n-m)*k)/k)+1,1000000009) - 2;
		r = (r*k)%1000000009;
		long long r2 = (n-m)*(k-1) + ((n - (n-m)*k)%k);
		cout<<mod((r+r2),1000000009)<<endl;
	}
	else
	{
		cout<<m<<endl;
	}
}


vector<int> st;
vector<int> req;
vector<long long> rem;
vector<long long> num;
vector<long long> res;

void pr(long long a, bool p)
{
	if (a ==1) return;
	if (a%2 == 0)
	{
		if (a != 2 || p) res.push_back(2);
		pr(a/2, true);
		return;
	}
	for (long long i = 3; i*i <= a; i+=2)
	{
		if (a%i==0)
		{
			res.push_back(i);
			pr(a/i,true);
			return;
		}
	}
	if (p)
		res.push_back(a);
}

int dfs(int i, bool add)
{
	if (i >= num.size()) return 0;
	res.clear();
	if (rem[i] == num[i])
		pr(rem[i],false);
	else
		pr(rem[i],true);
	int result = res.size()+1;
	int m;
	if (i == num.size()-1)
		m = 0;
	else if (add)
		m = dfs(i+1,true);
	else
		m = dfs(i+1,true) + 1;
	for (int j = i+1; j < num.size(); j++)
	{
		if (rem[j]%num[i] ==0)
		{
			rem[j] /=num[i];
			m = min(dfs(i+1,add),m);
			rem[j] *= num[i];
		}
	}
	return result+m;
}

int main()
{
	int n;
	cin>>n;
	st = vector<int> (n,0);
	req = vector<int> (n,1);
	rem = vector<long long> (n,1);
	num = vector<long long> (n);
	for (int i =0 ; i < n; i++)
	{
		cin>>num[i];
		rem[i] = num[i];
	}
	sort(num.begin(), num.end());
	sort(rem.begin(), rem.end());
	int result = 0;
	
	result = dfs(0,false);
	cout<<result<<endl;
}


vector<int> d1;
vector<pair<int,int> > d3;
vector<int> d2;
vector<vector<int> > g;
vector<bool> mark;
vector<bool> tk;
int dis1(int i,int p)
{
	tk[i] = true;
	int r = -1000000;
	
	int m1 = 0,m2 = -1000000;
	for (int j=0; j < g[i].size(); j++)
	{
		if (!tk[g[i][j]])
		if (r < dis1(g[i][j],i))
		{
			r = d1[(g[i][j])];
			m1 = g[i][j];
		}
	}
	int v = -1000000;
	for (int j=0; j < g[i].size(); j++)
	{
		if (v < d1[(g[i][j])] && (g[i][j]) != m1 && g[i][j] != p)
		{
			v = d1[(g[i][j])];
			m2 = g[i][j];
		}
	}
	d3[i].first = m1;
	d3[i].second = m2;
	if (r < 0)
	{
		if (mark[i]) return d1[i] = 0;
		else return d1[i] = r;
	}
	return d1[i] = r+1;
}

void dis2(int i,int p)
{
	tk[i] = true;
	if (p == -1)
	{
		if (mark[0])
		{
			d2[0] = 0;
		}
		else
			d2[0] = -10000000;
	}
	else
	{
		int r = d2[p]+1;
		if (d3[p].first == i)
		{
			if (d3[p].second >= 0)
				r = max(d1[d3[p].second]+2,r);
		}
		else
		{
			r = max(d1[d3[p].first]+2,r);
		}
		d2[i] = r;
		if (r < 0)
		{
			if (mark[i])
				d2[i] = 0;
			else
				d2[i] = r;
		}
	}
	for (int j=0; j < g[i].size(); j++)
	{
		if(!tk[g[i][j]])
			dis2(g[i][j],i);
	}
}



int bfs(int i, int d)
{
	int res = 0;
	queue<pair<int,int> > q;
	q.push(make_pair(i,0));
	vector<bool> tk(g.size(),false);
	while (!q.empty())
	{
		pair<int,int> c = q.front();
		q.pop();
		if (tk[c.first])
			continue;
		res++;
		tk[c.first] = true;
		if (c.second < d)
		{
			for (int j=0; j < g[c.first].size(); j++)
			{
				//cout<<t[c.first].second[j]<<"    ";
				q.push(make_pair(g[c.first][j],c.second+1));
			}
		}
	}
	return res;
}


void bTree(int c)
{
	if (tk[c]) return;
	tk[c] = true;
	for (int j = 0; j < g[c].size(); j++)
	{
		if (g[c][j] != t[c].first)
		{
			t[g[c][j]].first = c;
			t[c].second.push_back(g[c][j]);
			bTree(g[c][j]);
		}
	}
}


int main()
{
	int n,m,d;
	cin>>n>>m>>d;
	
	d1 = vector<int> (n,-1000000);
	d2 = vector<int> (n,-1000000);
	d3 = vector<pair<int,int> > (n, make_pair(-1000000,-1000000));
	mark = vector<bool> (n,false);
	tk = vector<bool> (n,false);
	g = vector<vector<int> > (n);
	int a;
	for (int i=0; i < m; i++)
	{
		cin>>a;
		mark[a-1] = true;
	}
	int b;
	for (int i = 0; i < n-1; i++)
	{
		cin>>a>>b;
		g[a-1].push_back(b-1);
		g[b-1].push_back(a-1);
	}
	if (m > 1)
	{
tk = vector<bool> (n,false);
	dis1(0,-1);
tk = vector<bool> (n,false);
	dis2(0,-1);
	}
	int res = 0;
	if (m == 1)
	{
	for (int i=0; i < n; i++)
	{
		if (mark[i])
		{
			res = bfs(i,d);
			break;
		}
	}
	}
	else
	{
	for (int i=0; i < n; i++)
	{
	//	cout<<d1[i]<<" "<<d2[i]<<"          ";
		if (d1[i] <= d && d2[i] <= d) res++;
	}
	}
	cout<<res<<endl;

	//	system("pause");
}


string op;
int n;
ifstream fin;
ofstream fout;
void solve(int i)
{

	if (i == n-1)
	{
//		cout<<op<<endl;
		int r = 0;
		vector<char> s1;
		vector<int> s2;
		int c = 1;
		for (int j =0 ; j < n-1; j++)
		{
			if (op[j] == ' ')
			{
				c *= 10;
				c += j+2;
			}
			else
			{
				s2.push_back(c);
				s1.push_back(op[j]);
				c= j+2;
			}
		}
		s2.push_back(c);
		int a,b;
		r = s2[0];
		for (int j = 0; j < s1.size(); j++)
		{
			if (s1[j] == '+')
			{
				r += s2[j+1];
			}
			else
				r -= s2[j+1];
		}
		if (r == 0)
		{
			fout<<1;
			for (int j = 0; j < n-1; j++)
			{
				fout<<op[j]<<j+2;
			}
			fout<<endl;
		}
	}
	else
	{
		op[i] = ' ';
		solve(i+1);
		op[i] = '+';
		solve(i+1);
		op[i] = '-';
		solve(i+1);
	}
}

int main()
{
	fin.open("zerosum.in");
	fout.open("zerosum.out");
	fin>>n;
	for (int i = 0; i < n-1; i++)
	{
		op += '.';
	}
	solve(0);

}


vector<int> c;
vector<vector<long long> > dp;
long long solve(int n,int i)
{
	if (n < 0) return 0;
	if (n == 0) return 1;
	if (i >= c.size()) return 0;
	if (dp[n][i] != -1) return dp[n][i];
	if (i == c.size()-1)
	{
		if (n%c[i] == 0) return dp[n][i] = 1;
		else return dp[n][i] = 0;
	}
	long long r = 0;
	for (int j = 0; j <= n/c[i]; j++)
	{
		r += solve(n - j*c[i], i+1);
	}
	return dp[n][i] = r;
}

int main()
{
	
	ifstream cin;
	cin.open("money.in");
	ofstream cout;
	cout.open("money.out");
	
	int v,n;
	cin>>v>>n;
	dp = vector<vector<long long> >(n+1,vector<long long>(v,-1));
	c = vector<int>(v);
	for (int i=0; i < v; i++)
	{
		cin>>c[i];
	}
	sort(c.begin(), c.end());
	reverse(c.begin(), c.end());
	long long r = solve(n,0);
	cout<<r<<endl;
	system("pause");
}


int main() {
    long long int N, V, v[26] = { 0 }, dp[10001] = { 0 }, i;
    freopen("money.in", "r", stdin), freopen("money.out", "w", stdout);
    scanf("%lld %lld", &V, &N);
    for (i = 0, dp[0] = 1; i < V; i++)
        scanf("%lld", v + i);
 
    for (int m = 0; m < V; m++)
        for (int n = 0; n <= N; n++)
            dp[n] += (n - v[m] >= 0 ? dp[n - v[m]] : 0);
 
    printf("%lld\n", dp[N]);
    return 0;
}


int g[100][100];

vector<int> res;

void solve(int i)
{
	bool ok = true;
	int s =0;
	vector<bool> tk(100,false);
	tk[i] = true;
	res.clear();
	while (ok)
	{
		ok = false;
		for (int j = 0; j < 100; j++)
		{
			if (tk[j]) continue;
			s = 0;
			s += g[i][j];
			for (int k = 0; k < res.size(); k++)
			{
				s += g[res[k]][j];
			}
			if (s > 50)
			{
				res.push_back(j);
				tk[j] = true;
				ok = true;
			}
		}
	}
}

int main()
{
		ifstream cin;
	cin.open("concom.in");
	ofstream cout;
	cout.open("concom.out");
	int n;
	cin>>n;
	int a,b,c;
	while (n--)
	{
		cin>>a>>b>>c;
		g[a-1][b-1] = c;
	}
	for (int i=0; i < 100; i++)
	{
		solve(i);
		sort(res.begin(),res.end());
		for (int j = 0; j < res.size(); j++)
		{
			cout<<i+1<<" "<<res[j]+1<<endl;
		}
	}
}


char pl[10][10];
int c1x,c1y,d1;
int c2x,c2y,d2;
bool valid(int a, int b)
{
	if (a < 0 || b < 0 || a >=10 || b >= 10) return false;
	if (pl[a][b] != '*') return true;
	return false;
}
void move()
{
	if (d1 == 1)
	{
		if (valid(c1x-1,c1y))
		{
			c1x--;
		}
		else
		{
			d1 = 2;
		}
	}
	else if (d1 == 2)
	{
		if (valid(c1x,c1y+1))
		{
			c1y++;
		}
		else
		{
			d1 = 3;
		}
	}
	else if (d1 == 3)
	{
		if (valid(c1x+1,c1y))
		{
			c1x++;
		}
		else
		{
			d1 = 4;
		}
	}
	else if (d1 == 4)
	{
		if (valid(c1x,c1y-1))
		{
			c1y--;
		}
		else
		{
			d1 = 1;
		}
	}

	if (d2 == 1)
	{
		if (valid(c2x-1,c2y))
		{
			c2x--;
		}
		else
		{
			d2 = 2;
		}
	}
	else if (d2 == 2)
	{
		if (valid(c2x,c2y+1))
		{
			c2y++;
		}
		else
		{
			d2 = 3;
		}
	}
	else if (d2 == 3)
	{
		if (valid(c2x+1,c2y))
		{
			c2x++;
		}
		else
		{
			d2 = 4;
		}
	}
	else if (d2 == 4)
	{
		if (valid(c2x,c2y-1))
		{
			c2y--;
		}
		else
		{
			d2 = 1;
		}
	}
}

int sol()
{
	d1 = d2 = 1;
	int r = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (pl[i][j] == 'F')
			{
				c2x = i;
				c2y = j;
			}
			if (pl[i][j] == 'C')
			{
				c1x = i;
				c1y = j;
			}
		}
	}
	while (!(c1x == c2x && c1y == c2y))
	{
		move();
		r++;
		if (r == 10000) return 0;
	}
	return r;
}

int main()
{
			ifstream cin;
	cin.open("ttwo.in");
	ofstream cout;
	cout.open("ttwo.out");
	for (int i=0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin>>pl[i][j];
		}
	}
	cout<<sol()<<endl;
}


vector<vector<int> > dis[2];
vector<string> mp;
pair<int,int> a[2];

bool valid(int i, int j)
{
	if (i < 0 || j < 0 || i>= mp.size() || j >= mp[0].size()) return false;
	if (mp[i][j] == '|' || mp[i][j] == '-') return false;
	return true;
}

int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};

void bfs(int i)
{
	pair<pair<int,int> , int> st;
	st.second = 1;
	st.first = a[i];

	queue<pair<pair<int,int> , int> > q;
	q.push(st);
	while (!q.empty())
	{
		st = q.front();
		q.pop();
		if (!valid(st.first.first,st.first.second)) continue;
		if (st.second >= dis[i][st.first.first][st.first.second]) continue;
		dis[i][st.first.first][st.first.second] = st.second;
		for (int j = 0; j < 4; j++)
		{
			if (valid(st.first.first+dr[j],st.first.second+dc[j]))
			{
				q.push(make_pair(make_pair(st.first.first+2*dr[j],st.first.second+2*dc[j]),st.second+1));
			}
		}
	}
}

int main()
{
	ifstream cin;
	cin.open("maze1.in");
	ofstream cout;
	cout.open("maze1.out");
	int r,c;
	cin>>r>>c;
	mp = vector<string>(2*c+1);
	dis[0] = vector<vector<int> >(2*c+1,vector<int>(2*r+1,10000000));
	dis[1] = vector<vector<int> >(2*c+1,vector<int>(2*r+1,10000000));
	cin.ignore();
	for (int i = 0; i < 2*c+1; i++)
	{
		getline(cin,mp[i]);
	}
	int d = 0;
	for (int j = 1; j < 2*r+1; j+=2) if (mp[0][j] == ' ')
	{
		a[d].first = 1;
		a[d].second = j;
		d++;
	}

	for (int j = 1; j < 2*r+1; j+=2) if (mp[2*c][j] == ' ')
	{
		a[d].first = 2*c-1;
		a[d].second = j;
		d++;
	}

	for (int j = 1; j < 2*c+1; j+=2) if (mp[j][0] == ' ')
	{
		a[d].first = j;
		a[d].second = 1;
		d++;
	}

	for (int j = 1; j < 2*c+1; j+=2) if (mp[j][2*r] == ' ')
	{
		a[d].first = j;
		a[d].second = 2*r-1;
		d++;
	}
	bfs(0);
	bfs(1);
	int res = 0;
	for (int i = 1; i < 2*c+1; i+=2)
	{
		for (int j = 1; j < 2*r+1; j+=2)
		{
			res = max(res,min(dis[0][i][j],dis[1][i][j]));
		}
	}
	cout<<res<<endl;

}


int main()
{
		ifstream cin;
	cin.open("cowtour.in");
	ofstream cout;
	cout.open("cowtour.out");
	int n;
	cin>>n;
	char a;
	vector<vector<double> >sp(n, vector<double>(n,10000000000));
	vector<pair<double,double> > p(n);
	for (int i = 0; i < n; i++)
	{
		cin>>p[i].first>>p[i].second;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>a;
			if (a == '1')
			{
				sp[i][j] = sqrt((p[i].second-p[j].second)*(p[i].second-p[j].second) + (p[i].first-p[j].first)*(p[i].first-p[j].first));
			}
		}
	}

	for (int k = 0; k < n; k++) for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (i != j) sp[i][j] = min(sp[i][j],sp[i][k]+sp[k][j]);
	double res = 0;
	double r2 = 10000000000;
	for (int i =0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (sp[i][j] < 10000000000) res = max(res,sp[i][j]);
			else
			{
				double di=0,dj=0;
				for (int k = 0; k < n; k++)
				{
					di = (sp[i][k] < 10000000000) ? max(di,sp[i][k]) : di;
					dj = (sp[j][k] < 10000000000) ? max(dj,sp[j][k]) : dj;
				}
				r2 = min(r2,di+dj+sqrt((p[i].second-p[j].second)*(p[i].second-p[j].second) + (p[i].first-p[j].first)*(p[i].first-p[j].first)));
			}
		}
	}
	cout<<fixed<<setprecision(6)<<max(r2,res)<<endl;
}
*/

int main()
{
	int a[3] = {0};
	string s;
	cin>>s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1') a[0]++;
		else if (s[i] == '2') a[1]++;
		else if (s[i] == '3') a[2]++;
	}
	for (int i = 0; i < a[0]; i++)
	{
		cout<<1;
		if (i < a[0]-1) cout<<"+";
	}
	for (int i = 0; i < a[1]; i++)
	{
		if (i == 0 && a[0] > 0) cout<<"+";
		cout<<2;
		if (i < a[1]-1) cout<<"+";
	}
	for (int i = 0; i < a[2]; i++)
	{
		if (i == 0 && a[1]+a[0] > 0) cout<<"+";
		cout<<3;
		if (i < a[2]-1) cout<<"+";
	}
	cout<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
string s[100009];
int X[]={-1,0,0,1},Y[]={0,-1,1,0};
bool done[1009][1009];
void dfs(int x,int y)
{
    done[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int nx=x+X[i];
        int ny=y+Y[i];
        if(nx>=0&&ny>=0&&nx<n&&ny<m&&s[nx][ny]!='*'&&!done[nx][ny])dfs(nx,ny);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='.'&&!done[i][j])
            {
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
set<pair<int,int> >s;
int n,b,a;
int main()
{
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
      int l,r;
      cin>>l>>r;
      for(int j=l;j<=r;j++)
      {
          int X=(j+(j/b))%a;
          int Y=j%b;
          s.insert({X,Y});
      }
    }
    cout<<s.size();
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int q,n,m,w;
vector<pair<int,pair<int,int> > >v[1009];
bool done[1000];
pair<int,int>pr[1009];
void dfs(int node,int wi)
{
    if(done[node])return;
    done[node]=1;
    w++;
    for(int i=0; i<v[node].size(); i++)
    {
        int u=v[node][i].first;
       // cout<<node<<" "<<u<<" "<<we[node][u]<<endl;
        if(v[pr[node].first][i].second.first>=wi)
        {
            dfs(u,wi);
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        pr[i]= {a,b};
        v[a].push_back({b,{c,i}});
        v[b].push_back({a,{c,i}});
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int t,x;
        cin>>t;
        if(t==1)
        {
            int b,r;
            cin>>b>>r;
            b--;
            for(int j=0;j<v[pr[b].first].size();j++)
            {

                if(v[pr[b].first][j].second.second==b)
                {
                    v[pr[b].first][j].second.first=r;
                }
            }
        }
        else
        {
            int y;
            cin>>x>>y;
            x--;
            dfs(x,y);
            cout<<w<<endl;
            w=0;
            memset(done,0,sizeof(done));
        }
    }
}
*/
/*#include<bits/stdc++.h>
using namespace std;
int n,zz,m;
string s;
vector<int>z;
int main()
{
    cin>>n>>m;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            z.push_back(i);
        }
    }
    int w=0,ww=0;
    for(int i=0;i<m;i++)
    {
        string qu;
        cin>>qu;
        if(qu=="query")
        {
            int l,r;
            cin>>l>>r;
            if(w==0)
            {
                for(int j=0;j<z.size();j++)
                {
                    if((l>z[j]&&r>z[j])||(l<z[j]&&r<z[j]))
                    {
                        zz++;
                    }
                    if(zz==z.size())
                    {
                        ww++;
                        zz=0;
                        cout<<ww<<endl;
                    }
                    else cout<<0<<endl;
                }
            }
            else
            {
                ww=0;
                w=0;
            }
        }
        else
        {
            w++;
            int x;
            cin>>x;
            z[x] = 1;
            s[x-1] = 1 - (s[x-1]-'0');
            z.clear();
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    z.push_back(i);
                }
            }
        }
    }
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int n,m;
string s[1009];
string t[1009];
int main(){
    cin>>n>>m;
    cin>>s[0];
    for(int i=0;i<m;i++){
        cin>>t[i];
        if(i != 0)
            s[i] = s[i-1];
        if(t[i] == "query"){
            int l,r;
            cin>>l>>r;
            l--;r--;
            int ans=0;
            for(int j=i;j>=0;j--){
                if(t[j] == "toggle")continue;
                int num = 0;
                for(int k=l;k<r;k++){
                    num += s[j][k]-'0';
                }
                if(num == r-l)ans++;
            }
            cout<<ans<<endl;
        }
        else{
            int x;
            cin>>x;
            x--;
            s[i][x] = '1'- s[i][x] + '0';
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<1000009;i++)
    {
        for(int i=0;i<3;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a==b&&a==c)
            {
                cout<<'*'<<endl;
                break;
            }
            else if(a==b)
            {
                cout<<'C'<<endl;
                break;
            }
            else if (a==c)
            {
                cout<<'B'<<endl;
                break;
            }
            else cout<<'A'<<endl;;
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
vector<int>v1,v2;
int main()
{
    cin>>n>>a>>x>>b>>y;
        if(x>a)
        {
            for(int j=a;j<=x;j++)
            {
                v1.push_back(j);
            }
        }
        else if(x<a)
        {
            for(int j=a;j<=n;j++)
            {
                v1.push_back(j);
                if(j==n)
                {
                    for(int k=1;k<=x;k++)
                    {
                        v1.push_back(k);
                    }
                }
            }
        }
        if(y<b)
        {
            for(int j=b;j>=y;j--)
            {
                v2.push_back(j);
            }
        }
        else if(b<y)
        {
            for(int j=b;j>0;j--)
            {
                v2.push_back(j);
                if(j==1)
                {
                    for(int k=n;k>=x;k--)
                    {
                        v2.push_back(k);
                    }
                }
            }
        }

    for(int i=0;i<min(v1.size(),v2.size());i++)
    {
    //    cout<<v1[i]<<" "<<v2[i]<<endl;
        if(v1[i]==v2[i])
        {

            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int m,n;
int c[100009],a[100009],b[100009];
int x,y,w;
map<int,int>mp;
vector<pair<int,int> >v;
int main()
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(mp[a[i]]==0)
        {
            w++;
            c[w]=a[i];
        }
        if(mp[b[i]]==0)
        {
            w++;
            c[w]=b[i];
        }
        mp[a[i]]++;
        mp[b[i]]++;
    }
    for(int i=0;i<w;i++)
    {
        v.push_back({mp[c[i]],c[i]});
    }
    sort(v.begin(),v.end());

}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
vector<int>v1,v2;
int main()
{
    cin>>n>>a>>x>>b>>y;
        if(x>a)
        {
            for(int j=a;j<=x;j++)
            {
                v1.push_back(j);
            }
        }
        else if(x<a)
        {
            for(int j=a;j<=n;j++)
            {
                v1.push_back(j);
                if(j==n)
                {
                    for(int k=1;k<=x;k++)
                    {
                        v1.push_back(k);
                    }
                }
            }
        }
        if(y<b)
        {
            for(int j=b;j>=y;j--)
            {
                v2.push_back(j);
            }
        }
        else if(b<y)
        {
            for(int j=b;j>0;j--)
            {
                v2.push_back(j);
                if(j==1)
                {
                    for(int k=n;k>=x;k--)
                    {
                        v2.push_back(k);
                    }
                }
            }
        }

    for(int i=0;i<min(v1.size(),v2.size());i++)
    {
    //    cout<<v1[i]<<" "<<v2[i]<<endl;
        if(v1[i]==v2[i])
        {

            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int i1,k1,i2,k2,w;
int b[8][8]={0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0};
int main()
{
    cin>>i1>>k1>>i2>>k2;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            if(i1==i2||k1==k2)
            {
                cout<<1<<" ";
            }
            else cout<<2<<" ";
        }
        else if(i==1)
        {
            i1--,i2--,k1--,k2--;
            if(b[i1][k1]!=b[i2][k2])
            {
                cout<<0<<" ";
                w++;
            }
            else if(abs(i1-i2)==abs(k2-k1))
            {
                cout<<1<<" ";
                w++;
            }
                if(w==0)
                {
                    cout<<2<<" ";
                }
        }

        else if(i==2)
        {
            if(abs(i1-i2)==abs(k1-k2))
            {
                cout<<abs(i1-i2);
            }
            else if(i1==i2||k1==k2)
            {
                cout<<abs(i1-i2)+abs(k1-k2);
            }
            else
            {
                cout<<max( abs ( i1 - i2 ), abs ( k1 - k2 ) ) ;
            }
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n*2;
    int b=0;
    int sum=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<" ";
        }
        if(i!=0)
            cout<<0<<" ";
        else
            cout<<0;
        for(int j=0; j<b/2; j++)
        {
            cout<<sum<<" ";
            sum++;
        }
        sum--;
        for(int j=0; j<b/2-1; j++)
        {
            sum--;
            cout<<sum<<" ";
        }
        if (i!=0)
            cout<<0;
        cout<<endl;
        if(i==0)
        {
            a-=2;
            b+=2;
            sum=1;
        }
        else
        {
            a-=2;
            b+=2;
            sum=1;
        }
    }
    cout<<0<<" ";
    int w=1;
    for(int i=0; i<n; i++)
    {
        cout<<w<<" ";
        w++;
    }
    b=w*2-3;
    w--;
    for(int i=0; i<n-1; i++)
    {
        w--;
        cout<<w<<" ";
    }
    cout<<0<<endl;
    a=2;
    sum=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<" ";
        }
        if(i!=n-1)
            cout<<0<<" ";
        else
            cout<<0;
        for(int j=0; j<b/2; j++)
        {
            cout<<sum<<" ";
            sum++;
        }
        sum--;
        for(int j=0; j<b/2-1; j++)
        {
            sum--;
            cout<<sum<<" ";
        }
        if (i!=n-1)
            cout<<0;
        cout<<endl;
        if(i<n-1)
        {
            a+=2;
            b-=2;
            sum=1;
        }
        else
        {
            a+=2;
            b--;
            sum=1;
        }
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
vector<char>v;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(s.size()==1)
        {
            cout<<v[i];
            exit(0);
        }
        if(i!=v.size()-1)cout<<v[i]<<'+';
        else cout<<v[i];
    }
}
