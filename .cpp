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
/--------------------------------------------------------They call him ARIF-----------------------------------------------------*/

#pragma GCC optimize ("Ofast")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
typedef map<pll,ll> mpll;
typedef map<ll,ll> mll;
typedef map<char,ll> mcll;
typedef map<pair<char,ll>,ll> mpcll;
typedef map<pair<char,char>,ll> mpccl;
typedef pair<char,char> pcc;
typedef pair<string,string> pss;
typedef map<string,ll> msll;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define max4(a,b,c,d) max(d,max3(a,b,c))
#define min4(a,b,c,d) min(d,min3(a,b,c))
#define all(x) x.begin(),x.end()
#define endl "\n"
const ll M=1e9+7;
// tu hamesha ceil aur floor me 1.0* daalna bhulta hai
// ll x=max4(a,b,c,d); save value in some variables & dont 
// ll y=min4(a,b,c,d); print it directly it will give an error
// if(find(nums.begin()+fp+1,nums.begin()+ep,temp)!=nums.begin()+ep)

ll gcd(ll a,ll b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

ll power(ll a,ll n)
{
  if(n==0) return 1;
  ll subprob=power(a,n/2);
  ll subprobq=subprob*subprob;
  if(n&1) return a*subprobq;
  return subprobq;
}

ll lcm3(ll x,ll y,ll z)
{
    ll ans=(x*y*z)*gcd(x,gcd(y,z));
    ans/=gcd(x,y);ans/=gcd(y,z);ans/=gcd(x,z);

    return ans;
}

mll primefact(ll n)
{
    mll f;
    while(n%2==0)
    {
        f[2]++;
        n/=2;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            f[i]++;
            n/=i;
        }
    }
    if(n>2) f[n]++;

    return f;
}

void addk(vll &v,ll q=0)
{
    // in case of seg fault try to make n+1 size vect
    if(q==0) cin>>q;
    ll l,r,k;
    while(q--)
    {
        cin>>l>>r>>k;
        v[l]+=k;
        // may be seg fault due to r+1.
        // so make vect of n+1
        v[r+1]-=k;
    }
    for(int i=1;i<v.size();i++)//v.size()=n+1
    {
        v[i]+=v[i-1];
    }
}

ll sumofdigits(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}


void solve()
{ 
    ll n,m;cin>>n>>m;
    cout<<(n*m)/2<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll t;
    t=1;  
    //cin>>t;
    while(t--){
        solve();
    }
}
/*
#include <iostream>
using namespace std;
int fun(int n)
{
	int ans=0;
	while(n)
	{
		if(n%10==2) ans++;
		n/=10;
	}
	return ans;
}
int main()
{
	int ans=0;
	for(int i=1;i<=2020;i++)
	{
		ans+=fun(i);
	}
	cout<<ans<<endl;
	return 0;
}          //   ans:624
*/
/*
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
int main()
{
	int ans=0;
	for(int i=1;i<=2020;i++)
	{
		for(int j=1;j<=2020;j++)
		{
			if(gcd(i,j)==1) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}    //     ans:2481215

#include <iostream>
using namespace std;
struct edge{
	int x,y;
}edges[110];
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>edges[i].x>>edges[i].y;

	int ans=0;
	for(int i=0;i<n;i++)
	{
		int max_y=0,max_x=0;
		for(int j=0;j<n;j++)
		{
			if(edges[i].x==edges[j].x) max_y=max(max_y,edges[j].y);
			if(edges[i].y==edges[j].y) max_x=max(max_x,edges[j].x);
		}
		ans=max(ans,(max_x-edges[i].x)*(max_y-edges[i].y));
	}
	 cout<<ans;
	return 0;
}

#include <iostream>
#include <stdio.h>
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
�ܲ�ѵ��
#include <iostream>
using namespace std;


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

#include <iostream>
using namespace std;

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

#include <iostream>
#include <stdio.h>
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



#include <iostream>

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


#include <iostream>
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

403


#include <iostream>
using namespace std;


int main()
{
	itt n;
	cin>>n;
	while(n)
	{
		cout<<n<<' ';
		n/=2;
	}
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&(s[i+1]>'1'&&s[i+1]<='9'))
		{
			int n=s[i+1]-'0';
			for(int j=0;j<n;j++) cout<<s[i];
			i++;
		}
		else if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))) cout<<s[i];
	}
	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;
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
*/
/*
#include <iostream>
using namespace std;

int main()
{

	return 0;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[0]<target)
            {
            	if(nums[0]<target&&target<nums[mid])
				r=mid-1;
				else l=mid+1;
            }
            else
            {
            	if(nums[mid]>target&&taregt<=nums[n-1])
            		l=mid+1;
            	else r=mid-1;
            }
        }
        return -1;
    }
};



#include <iostream>
#include <bits/stdc++.h>
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
#include <bits/stdc++.h>
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


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n&1)
	{
		cout<<n/2<<endl<<n/2+1<<endl;
	}
	else
	{
		cout<<n/2<<endl;
	}
	return 0;
}



#include <string.h>
#include <stdio.h>
int main()
{
    char s[110];
    gets(s);
    int ans=0;
    for(int i=0;i<strlen(s);i++)
    {
        if((int)s[i]>=48 && (int)s[i]<=57) ans++;
    }
    printf("%d",ans);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

map<int,int> m;
int a[500001],n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	if(m.count(0)) puts("NO");
	else if(m.size()==2)
	{
		int cnt=0;
		for(auto i:m)
		{
			a[++cnt]=i.first;
		}
		if(a[1]+a[2]==0) puts("NO");
		else puts("YES");
	}
	else puts("YES");
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<string,vector<int>> p;
int n,k;
ll ans;
string s;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		auto &v=p[s];
		ans+=v.end()-lower_bound(v.begin(),v.end(),i-k-1);
		v.push_back(i);
	}
	cout<<ans<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

string s;
int x=0,y=0;
unordered_set<string> h;
string m[8]={"ULD","URD","LDR","LUR","DLU","DRU","RUL","RDL"};
int main()
{
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if((s[i]=='L'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='L'))
        {
            puts("NO");
            return 0;
        }
        if((s[i]=='U'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='U'))
        {
            puts("NO");
            return 0;
        }
        if(s[i]=='U') y++;
        else if(s[i]=='R') x++;
        else if(s[i]=='D') y--;
        else x--;
    }
    for(int i=0;i<len-2;i++)
    {
        string ans="";
        ans=s[i]+s[i+1]+s[i+2];
        h.insert(ans);
    }
    for(int i=0;i<8;i++)
    {
        if(h.count(m[i]))
        {
            puts("NO");
            return 0;
        }
    }
    if(x==0&&y==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}


// # ����DP  ����������

#include <bits/stdc++.h>
using namespace std;
const int N = 510,INF=1e9;

int f[N][N];
int a[N][N];
int n;

int main()
{
    cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
	    	cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
	    	f[i][j]=-INF;
	f[1][1]=a[1][1];
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			f[i][j]=max(f[i-1][j-1]+a[i][j],f[i-1][j]+a[i][j]);
		}
	}
	int ans=-INF;
	for(int i=1;i<=n;i++) ans=max(ans,f[n][i]);
	cout<<ans<<endl;
    return 0;
}



���ű�ʮһ��

#include <bits/stdc++.h>
using namespace std;

const int N = 510,INF=1e9;

int f[N][N];
int m[N][N];

int n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cin>>f[i][j];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			//f[i][j]=max(f[i-1][j-1],f[i-1][j])+a[i][j];
		    if(f[i-1][j-1]>f[i-1][j])
		    {
		    	f[i][j]+=f[i-1][j-1];
		    	m[i][j]=m[i-1][j-1]+1;
		    }
		    else
		    {
		    	f[i][j]+=f[i-1][j];
		    	m[i][j]=m[i-1][j]-1;
		    }
		}
	}
	int ans=-INF;
	for(int i=1;i<=n;i++)
	{
		if(abs(m[n][i])<=1&&f[n][i]>ans) ans=f[n][i];
	}
	cout<<ans<<endl;
}


*/
/**************************************

#include <bits/stdc++.h>
using namespace std;
const int N =



int main()
{

	return 0;
}

******************************************


#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int a[N],b[N];
int n,m;

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	int l=0,r=0,ans=0;
	while(l<n&&r<m)
	{
		if(a[l]==b[r])
		{
			l++;
			r++;
			ans++;
		}
		else if(a[l]>b[r])
		{
			r++;
			b[r]+=b[r-1];
		}
		else
		{
			l++;
			a[l]+=a[l-1];
		}
	}
	cout<<ans<<endl;
	return 0;
}



#include <bits/stdc++.h>
using namespace std;
int t;
int n;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int ans=0;
		int i=0;
		while(i<s.size()-1)
		{
			if(s[i]=='0')
			{
				if(s[i+1]=='0') ans+=2;
				else if(s[i+1]=='1'&&s[i+2]=='0') ans+=1;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}



#include <bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans=0;

int q(int x,int y)
{
	int n=0;
	memset(b,0,sizeof b);

	for(int i=x;i<=y;i++)
	{
		b[a[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(b[i]==1) n++;
	}
	return n;
}


int main()
{
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			ans+=q(i,j);
		}
	}
	cout<<ans<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;

int a[10];


int main()
{
	for(int i=0;i<10;i++) a[i]=2021;
	int k;
	int ans=-1;
	for(int i=1;i<=100000;i++)
	{
		int x=i;
		while(x)
		{
			int k=x%10;
			a[k]--;
			x/=10;
			if(a[k]==-1)
			{
				ans=i;
				break;
			}
		}
		if(ans!=-1)
		{
			break;
		}
	}
	cout<<ans-1<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;
const int N = 0x3f3f3f3f;
typedef long long ll;
ll mp[2031][2031];


int main()
{
	int i,j,k;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			mp[i][j]=mp[j][i]=N;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			if(abs(i-j)<=21)
				mp[i][j]=mp[j][i]=(i*j)/(__gcd(i,j));
	for(k=1;k<=2021;k++)
	{
		for(i=1;i<=2021;i++)
		{
			for(j=1;j<=2021;j++)
			{
				if(mp[i][j]>mp[i][k]+mp[k][j]) mp[i][j]=mp[j][i]=mp[i][k]+mp[k][j];
			}
		}
	}
	cout<<mp[1][2021]<<endl;
	return 0;
}

*

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a,b,n,p,x,sum;
	cin>>n;
	while(n--)
	{
		cin>>p;
		sum=0;
		for(int i=0;i<p;i++)
		{
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
		if(n) cout<<endl;
	}
	return 0;
}


#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s,sf;
		cin>>s;
		sf=s.substr(0,6);
		string home;
		int t=(s[0]-'0')*10+(s[1]-'0');
		if(t==33) home="zhejiang,";
		else if(t==11) home="beijing,";
		else if(t==71) home="Taiwan,";
		else if(t==81) home="Hong Kong,";
		else if(t==82) home="Macao,";
		else if(t==54) home="Tibet,";
		else if(t==21) home="Liaoning,";
		else if(t==31) home="shanghai,";

		cout<<"He/She is from "<<home;
		cout<<"and his/her birthday is on "
		<<s[10]<<s[11]<<","<<s[12]<<s[13]<<","<<s[6]<<s[7]<<s[8]<<s[9]
		<<" based on the table."<<endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,t;
    string home,a;
    cin>>n;
    for(int k = 0 ; k < n ; k++)
    {
        cin>>a;
        t = (a[0]-'0')*10+a[1]-'0';
        switch(t)
        {
            case 11:home = "Beijing";break;
            case 31:home = "Shanghai";break;
            case 21:home = "Liaoning";break;
            case 33:home = "Zhejiang";break;
            case 54:home = "Tibet";break;
            case 71:home = "Taiwan";break;
            case 81:home = "Hong Kong";break;
            case 82:home = "Macao";break;
            default :break;
        }
        cout<<"He/She is from "<<home<<",and his/her birthday is on "
        <<a[10]<<a[11]<<","<<a[12]<<a[13]<<","<<a[6]<<a[7]<<a[8]<<a[9]
        <<" based on the table."<<endl;
    }
    return 0;
}



#include <iostream>
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


``````````````````````
#include <iostream>
#include <stdio.h>
using namespace std;

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
}```````````````



#include <bits/stdc++.h>
using namespace std;

int g[10000][10000];

int main()
{
	int ans=0;
	int x,y;
	x=2020,y=2020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4040,y=2031;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=2031,y=2034;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4020,y=4020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	//int ans=0;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(g[i][j]) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
20312088


#include <bits/stdc++.h>
using namespace std;

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


#include <iostream>
using namespace std;
const int N = 1010;

int t,n;
int w[N],v[N];
int f[N][N];
int main()
{
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=t;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	}
	cout<<f[n][t];
	return 0;
}
*
#include <iostream>
using namespace std;
const int N = 20010;
int m,n;
int f[N];
int main()
{
	//���������m   ��Ʒ����Ϊn
	cin>>m>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=m;j>=x;j--)
		{
		    f[j]=max(f[j-x]+x,f[j]);
		}
	}
	cout<<m-f[m];
	return 0;
}*

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{

		char s[10000];
		gets(s);
		int ans=0;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]<0) ans++;
		}
		cout<<ans/2<<endl;
	}
	return 0;
}


#include <iostream>
#include <string>
using namespace std;

int n;
int solve(string s)
{
	int n=s.size();
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1]) return 0;
	}
	return 1;
}
int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(solve(s)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
*
#include <iostream>
#include <stdio.h>
using namespace std;
#define lcm(a,b) a/gcd(a,b)*b
int n;
long gcd(long m,long n)
{
	while(n)
	{
		long temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}

int main()
{
	int a[100001];
	while(scanf("%d",&n)!=EOF)
	{
		int a,x;
		cin>>a;
		while(--n)
		{
			cin>>x;
			a=lcm(a,x);
		}
		cout<<a<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		int a=0,e=0,i=0,o=0,u=0;
		char s[101];
		gets(s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]=='a'||s[j]=='A') a++;
			if(s[j]=='e'||s[j]=='E') e++;
			if(s[j]=='i'||s[j]=='I') i++;
			if(s[j]=='o'||s[j]=='O') o++;
			if(s[j]=='u'||s[j]=='U') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(n) cout<<endl;

	}

	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char s[105];

int main()
{
	while(gets(s))
	{
		int len=strlen(s);
		s[0]-='a'-'A';
		for(int i=1;i<len;i++)
		{
			if(s[i]==' ') s[i+1]-='a'-'A';
		}
		cout<<s<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char s[10011];
	while(scanf("%s",&s)!=EOF)
	{
		int maxchar=s[0];
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>maxchar) maxchar=s[i];
		}
		for(int i=0;i<strlen(s);i++)
		{
			cout<<s[i];
			if(s[i]==maxchar)
			{
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	return 0;
}



#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;
char s[100001];

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		int c=0;
		int l=strlen(s);
		if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_')
		{
			for(int i=1;i<l;i++)
			{
				if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9'))
				c++;
				else
				{
					cout<<"no"<<endl;
					break;
				}
				if(c+1==l)
				{
					cout<<"yes"<<endl;
				}
			}
		}
		else cout<<"no"<<endl;
	}
	return 0;
}


#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
using namespace std;
int a[101];
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i])<abs(a[j]))
				{
					swap(a[i],a[j]);
				}
			}
		}
		for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
		cout<<a[n-1];
		cout<<endl;
	}
	return 0;
}



#include <iostream>
#include <stdio.h>
#include <stdio.h>
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


#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int f=1;
		for(int i=0;i<66;i++)
		{
			if((n*i+18)%65==0)
			{
				cout<<i<<endl;
				f=0;
				break;
			}
		}
		if(f) cout<<"no"<<endl;
	}
	return 0;
}



#include <iostream>
#include <cmath>
#include <stdio.h>
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
*

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
const int N = 1e5+10;

struct edge{
	int ts,id;
	bool operator < (const edge x) const {
		return ts<x.ts;
	}
}edges[N];

int n,m,ti;
map<int,int> m;
int main()
{
	cin>>n>>m>>ti;

	for(int i=0;i<m;i++)
		cin>>edges[i].ts>>edges[i].id;
	sort(edges,edges+m);



	return 0;
}
*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	int n1=max(x4,x2)-min(x1,x3);
	int n2=max(y2,y4)-min(y1,y3);
	int n=max(n1,n2);
	cout<<n*n<<endl;
	return 0;
}
*
#################   a^b
#include <iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(int a,int b,int p)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ans;
}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;
	return 0;
}

################   64λ�����˷�
#include <iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(ll a,ll b,ll p)
{
	ll ans=0;
	while(b)
	{
	    if(b&1) ans=(ans+a)%p;
	    b>>=1;
	    a=a*2%p;
	}
	return ans;

}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;
	return 0;
}
*

#include <iostream>
#include <algorithm>
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
*
#include <iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;
const int N = 100001;
int a[N];
int n;
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	while(cin>>n,n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min_index=0,num=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<num)
			{
				num=a[i];
				min_index=i;
			}
		}
		swap(a[min_index],a[0]);
		cout<<a[0];
		for(int i=1;i<n;i++) cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<int> res;
int main()
{
	while(cin>>n>>m)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=i*2;
			if(i%m==0)
			{
				res.push_back(sum/m);
				sum=0;
			}
		}
		if(n%m!=0) res.push_back(sum/(n%m));
		cout<<res[0];
		for(int i=1;i<res.size();i++)
		{
			cout<<" "<<res[i];
		}
		cout<<endl;
		res.clear();
	}
	return 0;
}
*

#include <iostream>
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

*
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
*

#include <iostream>

using namespace std;

int t;
char op;
int y;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>op>>y;
		if(op>='a'&&op<='z') cout<<-(op-'a'+1)+y<<endl;
		else cout<<op-'A'+y+1<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char a[40000],b[40000];
void pop(char *s)
{
	int i,len=strlen(s)-1;
	for(i=len;i>=0;i--)
	{
		if(s[i]=='0') len--;
		else break;
	}
	if(s[i]=='.') len--;
	s[len+1]='\0';
}

int main()
{
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='.') pop(a);
		}
		for(int i=0;i<strlen(b);i++)
		{
			if(b[i]=='.') pop(b);
		}
		if(strcmp(a,b))
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;

string s,w;

int main()
{
	while(getline(cin,s),s!="#")
	{
		set<string> ans;
		istringstream str(s);
		while(str>>w)
		{
			ans.insert(w);
		}
		cout<<ans.size()<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <string>
using namespace std;

int n,x;
//int a[11];

int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans;
		ans=s.substr(6,5);
		ans="6"+ans;
		cout<<ans<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;

struct Stu{
	char name[1000];
	int sn;
	int st;
}stu[1000];

int n,m;
int cmp(Stu x,Stu y)
{
	if(x.sn==y.sn)
	{
		return x.st<y.st;
	}
	return x.sn>y.sn;
}
int main()
{
	cin>>n>>m;
	int p=0;
	while(cin>>stu[p].name)
	{
		for(int i=0;i<n;i++)
		{
			char ch;
			int k,l;
			cin>>k;
			if(k<=0) continue;
			stu[p].sn++;
			stu[p].st+=k;
			if(getchar()=='(')
			{
				cin>>l;
				cin>>ch;
				stu[p].st+=l*m;
			}
		}
		p++;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<p;i++)
	{
		cout<<left<<setw(10)<<stu[i].name<<" "<<right<<setw(2)<<stu[i].sn<<right<<" "<<setw(4)<<stu[i].st<<endl;
	}
	return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char op;
	int n,s=0;
	while(cin>>op,op!='@')
	{
		if(s) cout<<endl;
		s=1;
		cin>>n;
		getchar();

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+n;j++)
			{
				if(j==n-1-i||j==n-1+i) cout<<op;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
//������:http://acm.hdu.edu.cn/showproblem.php?pid=2091
#include <queue>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <assert.h>
using namespace std;
#define N 100005
//�ӵ㣺ע����ĩ��Ҫ�пո� ע�����ͼ�μ任��
char ch;
int main()
{
   bool flag = 0;
    while(scanf("%c",&ch),ch!='@'){  //������ʹ�� scanf("%c",ch) ���� getchar()  ��Ϊ��ȡ�߻س��� ������ scanf("%s",s) ���� cin>>sting ע����ʱ��Ҫ��"@"
      if(flag) printf("\n");
      flag = 1;
      int n;
      scanf("%d",&n);
      getchar();                     //ȡ������n�� ���Ļس�
      for(int i=0;i<n;i++){          //���ǱȽϼ���д��
         for(int j=0;j<i+n;j++){
            if(j==n-1-i || j==n-1+i || i==n-1) printf("%c",ch);
            else printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}

*
#include <iostream>
#include <stdio.h>
using namespace std;

int n,r;
void solve(int n,int r)
{
	int f=1;
	if(n<0)
	{
		f=0;
		n=-n;
	}
	string ans="";
	while(n)
	{
		int a=n%r;
		if(a==10) ans+='A';
		else if(a==11) ans+='B';
		else if(a==12) ans+='C';
		else if(a==13) ans+='D';
		else if(a==14) ans+='E';
		else if(a==15) ans+='F';
		else ans+=a+'0';
		n/=r;
	}
	if(!f) cout<<"-";
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		solve(n,r);
	}
	return 0;
}
*

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
*
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

*

#include <iostream>
#include <iomanip>
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
#include <iostream>

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
*
#include <iostream>

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

*

#include <stdlib.h>
#include <stdio.h>
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
typedef long long ll;
using namespace std;
int n,m;
int g[10][10];
int st[10][10];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int ans=100,sum=0;
int total;
void dfs(int x,int y,int total,int s)
{
	if(total==sum/2)
	{
		ans=min(ans,s);
		return ;
	}
	if(total>sum/2) return ;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(st[nx][ny]==0&&nx>=0&&ny>=0&&nx<n&&ny<m)
		{
			st[nx][ny]=1;
			dfs(nx,ny,total+g[nx][ny],s+1);
			st[nx][ny]=0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>g[i][j];
			sum+=g[i][j];
		}
	}
	st[0][0]=1;
	dfs(0,0,g[0][0],1);
	if(ans!=100) cout<<ans<<endl;
	return 0;
}
*
                       codeforces 231 team
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
*
#include <iostream>
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

#include <iostream>

using namespace std;

int main()
{
	string s,t;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>s>>t;
		if(s==t)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			bool f=true;
			int lastindex;
			int m=t.size();
			lastindex=s.rfind(t[m-1]);
			s[lastindex]='1';
			if(lastindex==-1)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				int i=m-2;
				while(i>=0)
				{
					int pos=s.rfind(t[i]);
					if(pos==-1)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else if(pos>lastindex)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else
					{
						lastindex=pos;
						s[pos]='1';
					}
					i--;
				}
				if(f) cout<<"YES"<<endl;
			}

		}
	}
	return 0;
}

*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[3];
struct edge
{
	int a,b,c,d;
}edges[5];
int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	return 0;
}
*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[10];

struct PT {
	int x1, y1, x2, y2;
};

int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	PT t[10];
	PT s[10];
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	t[0] = {p[0].x, p[0].y, p[0].x, p[1].y};
	t[1] = {p[0].x, p[1].y, p[1].x, p[1].y};
	t[2] = {p[1].x, p[1].y, p[2].x, p[1].y};
	t[3] = {p[2].x, p[1].y, p[2].x, p[2].y};
	int tt = -1;
	for (int i = 0; i < 4; i++) {
		if (tt == -1)
			s[++tt] = t[i];
		else {
			auto q = s[tt];
			tt--;
			if (q.x1 == t[i].x2 || q.y1 == t[i].y2) {
				s[++tt] = {q.x1, q.y1, t[i].x2, t[i].y2};
			} else {
				s[++tt] = q;
				s[++tt] = t[i];
			}
		}
	}
	cout << tt+1 << endl;
	for (int i = 0; i <= tt; i++)
		cout << s[i].x1 << " " << s[i].y1 << " " << s[i].x2 << " " << s[i].y2 << endl;
	return 0;
}
*


#include <iostream>
using namespace std;
int n, m;
int main() {
	cin >> n >> m;
	cout << (n * m) / 2;
	return 0;
}
*

#include <iostream>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s[1] == '+')
			ans++;
		else
			ans--;
	}
	cout << ans;
	return 0;
}

*/

#include <iostream>
#include <cmath>
using namespace std;
int a[6][6];       //����a�±��1��ʼ
int main() {
	int x, y;
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++) {
			cin >> a[i][j];
			if (a[i][j]) {
				x = i;
				y = j;
			}
		}
	cout << abs(3 - x) + abs(3 - y);
	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL); // FAST

	// *****************************************************
	             // 40: (A) Beautiful Matrix
	int arr[5][5], i, j;
	for (int r = 0; r < 5; r++)
	{
		for (int c = 0; c < 5; c++)
		{
			cin >> arr[r][c];
			if (arr[r][c] == 1)
			{
				i = r;
				j = c;	
			}
		}
	}
	cout << abs(i - 2) + abs(j - 2) << endl;
	// *****************************************************





/*	// *****************************************************
	             // 39: (A) Marathon
	int t, arr[4];
	cin >> t;
	while (t--)
	{
		int counter = 0;
		int max = 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> arr[i];
			max = arr[0];
			if (arr[i] >= max && i != 0)
			{
				counter++;
			}
		}
		cout << counter << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	           // 38: (A) Dubstep
	          // "WUB"
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
		{
			i += 2;
			cout << " ";
		}
		else
		{
			cout << s[i];
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	            // 37: (A) Polycarp and Coins
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int c1 = n / 3, c2 = n / 3;
		if (c1 + (2 * c2) == n)
		{
			cout << c1 << " " << c2 << endl;
		}
		else if ((c1 + 1) + (2 * c2) == n)
		{
			cout << c1 + 1 << " " << c2 << endl;
		}
		else
		{
			cout << c1 << " " << c2 + 1 << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
                     // 36: (A) Square String?
	int t;
	cin >> t;
	bool flag = false;
	while (t--)
	{
		string s;
		cin >> s;
		if (s.size() % 2 != 0)
		{
			cout << "NO" << endl;
			flag = false;
		}
		else
		{
			int j = s.size() / 2;
			flag = false;
			for (int i = 0; i < s.size() / 2; i++)
			{
				if (s[i] == s[j])
				{
					flag = true;
					j++;
				}
				else
				{
					cout << "NO" << endl;
					flag = false;
					break;
				}
			}
		}
		if (flag)
		{
			cout << "YES" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	              // 35: (A) Gravity Flip
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << " ";
	}
	// ***************************************************** */





/*	// *****************************************************
	          // 34: (A) Divisibility Problem
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c = 0;
		cin >> a >> b;
		if (a % b == 0)
		{
			cout << "0" << endl;
		}
		else
		{
			cout << b - (a % b) << endl;
		}
	}  
	// ***************************************************** */





/*	// *****************************************************
	              // 33: (A) Lucky?
	int t;
	cin >> t;
	while (t--)
	{
		long long sum1 = 0, sum2 = 0;
		string s;
		cin >> s;
		for (int i = 0; i < s.size() / 2; i++)
		{
			sum1 += s[i] - '0';
			sum2 += s[s.size() - i - 1] - '0';
		}

		//*********************(or)******************************   
		
		for (int j = s.size() - 1; j >= s.size() / 2; j--)
		{
			sum2 += s[j] - '0';
		}
		
		//******************************************************* 
		if (sum1 == sum2)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	                   // 32: (B) Coins
	int n;
	cin >> n;
	int temp = n;
	for (int i = n; i > 0; i--)
	{
		if (temp % i == 0)
		{
			cout << i << " ";
			temp = i;
		}
	}
	// ***************************************************** */






/*	// *****************************************************
	            // 31: (A) Laptops
	int n;
	cin >> n;
	bool flag = false;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		if (b > a)
		{
			flag = true;
		}
	}
	if (flag == true)
	{
		cout << "Happy Alex" << endl;
	}
	else
	{
		cout << "Poor Alex" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	              // 30: (A) Pangram
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n < 26)
	{
		cout << "NO" << endl;
		return 0;
	}
	else
	{
		int c = 0;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		sort(s.begin(), s.end());
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != s[i + 1])
			{
				c++;
			}
		}
		if (c == 26)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	                // 29: (A) Anton and Letters
	string s1,s2;
	getline(cin, s1);
	int x = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			char t = s1[i];
			s2[x] = t;
			x++;
		}
	}
	sort(s2.begin(), s2.end());
	int c = 0;
	for (int i = 0; i < s2.size() - 1; i++)
	{
		if (s2[i] != s2[i + 1])
		{
			c++;
		}
	}
	cout << c << endl;
	// ***************************************************** */ 







/*	// *****************************************************
	          // 28: (A) Die Roll
	int y, w;
	cin >> y >> w;
	if (w == y)
	{
		cout << "1/1" << endl;
	}
	else if (w == 0 || y == 0)
	{
		cout << "0/1" << endl;
	}
	else if (y % w == 0)
	{
		cout << w / w << "/" << y / w << endl;
	}
	else
	{
		cout << (6 - y) << "/" << 6 << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	                 // 27: (A) Football
	int n;
	cin >> n;
	string s;
	string team[2] = { "","" };
	int goal[2] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (i == 0)
		{
			team[0] = s;
			goal[0]++;
		}
		else if (team[0] == s)
		{
			goal[0]++;
		}
		else
		{
			team[1] = s;
			goal[1]++;
		}
	}
	if (goal[1] > goal[0])
	{
		cout << team[1] << endl;
	}
	else
	{
		cout << team[0] << endl;
	}


	/*
	int n;
	cin >> n;
	string s[110];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s, s + n);
	cout << s[n / 2] << endl;*/


	// ***************************************************** */





/*	// *****************************************************
	             // 26: (A) Lucky Division
	int n;
	cin >> n;
	if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 477 == 0 || n % 744 == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	         // 25: (A) Nearly Lucky Number
	string s;
	cin >> s;
	long long luck = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '4' || s[i] == '7')
		{
			luck++;
		}
		if (luck > 7)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	if (luck == 4 || luck == 7)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	              // 24: (B) Grab the Candies
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long m = 0, b = 0;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] % 2 == 0)
			{
				m += arr[i];
			}
			else
			{
				b += arr[i];
			}
		}
		if (m > b)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
                 	// 23: (A) Plus or Minus
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b == c)
		{
			cout << "+" << endl;
		}
		else
		{
			cout << "-" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	            // 22: (B) Atilla's Favorite Problem
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		char c = s[n - 1];
		int x = 0;
		for (int i = 'a'; i <= c; i++)
		{
			x++;
		}
		cout << x << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	               // 21: (A) Medium Number
	int n;
	cin >> n;
	int arr[3];
	while (n--)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + 3);
		cout << arr[1] << endl;
	}
	// ***************************************************** */
	




/*	// *****************************************************
	               // 20: (A) Soft Drinking
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int liters = k * l;
	liters /= nl;
	int limes = c * d;
	int grams = p / np;
	int min1 = min(liters, min(limes, grams));
	cout << min1 / n << endl;
	// ***************************************************** */





/*	// *****************************************************
	             // 19: (A) George and Accommodation
	int n, p, q, c = 0;
	cin >> n;
	while (n--)
	{
		cin >> p >> q;
		if (p != q)
		{
			if (q > p)
			{
				if (p + 1 != q)
				{
					c++;
				}
			}
			else
			{
				if (q + 1 != p)
				{
					c++;
				}
			}	
		}
	}
	cout << c << endl;
	// ***************************************************** */





/*	// *****************************************************
	                // 18: (A) Anton and Danik
	int n, a = 0, d = 0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			a++;
		}
		else
		{
			d++;
		}
	}
	if (a > d)
	{
		cout << "Anton" << endl;
	}
	else if (d > a)
	{
		cout << "Danik" << endl;
	}
	else
	{
		cout << "Friendship" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	             // 17: (A) Hulk
	int n;
	cin >> n;
	string s1 = "I hate ";
	string s2 = "I love ";
	if (n == 1)
	{
		cout << "I hate it" << endl;
		return 0;
	}
	else
	{
		int c = 0;
		for (int i = 0; i < n - 1; i++)
		{
			cout << s1;
			c++;
			if (c == n)
			{
				break;
			}
			cout << "that ";
			cout << s2;
			c++;
			if (c == n)
			{
				break;
			}
			cout << "that ";
		}
	}
	cout << "it" << endl;
	// ***************************************************** */



	
	
/*	// *****************************************************
	              // 16: (A) Word
	char s[101];
	cin >> s;
	int l = 0, u = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			l++;
		}
		else
		{
			u++;
		}
	}
	if (l >= u)
	{
		cout << strlwr(s) << endl;
	}
	else
	{
		cout << strupr(s) << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	              // 15: (A) Petya and Strings
	char s1[101], s2[101];
	 cin >> s1 >> s2;
	 cout << strcmp(strlwr(s1), strlwr(s2)) << endl;
	// ***************************************************** */





/*	// *****************************************************
	                // 14: (A) Boy or Girl
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	int c = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[i + 1])
		{
			c++;
		}
	}
	if (c % 2 != 0)
	{
		cout << "IGNORE HIM!" << endl;
	}
	else
	{
		cout << "CHAT WITH HER!" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	                       // 13: (B) Drinks
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	long double p;
	long double sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		sum += p;
	}
	cout << sum / n << endl;
	// ***************************************************** */




/*  // *****************************************************
	                     // 12: (A) Football
	string s;
	cin >> s; // 1000000001
	int z = 1, o = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
		{
			z++;
			if (z >= 7)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
		else
		{
			z = 1;
		}
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
		{
			o++;
			if (o >= 7)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
		else
		{
			o = 1;
		}
	}
	cout << "NO" << endl;
	// ***************************************************** */




/*	// ***************************************************** 
                 // A. String Task
	            // "A", "O", "Y", "E", "U", "I"
	string s;
	cin >> s;
	bool flag = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A' || s[i] == 'a' || s[i] == 'O' || s[i] == 'o' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'E' || s[i] == 'e' || s[i] == 'U' || s[i] == 'u' || s[i] == 'I' || s[i] == 'i')
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			cout << ".";
			if ('A' <= s[i] && s[i] <= 'Z')
			{
				s[i] = s[i] + 32;
				cout << s[i];
			}
			else
			{
				cout << s[i];
			}
		}
	}
	// ***************************************************** */





/*  // *****************************************************
	               // 11:  (A) Translation
	string s, t;
	cin >> s >> t;
	   // code
	   // edoc
	int v = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == t[s.size() - 1 - i])
		{
			v = 1;
		}
		else
		{
			v = 0;
			break;
		}
	}
	if (v == 1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	// ***************************************************** */




/*  // *****************************************************
	                 // 10: (A) Soldier and Bananas
	long long k, n, w, amount = 0, price = 0;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++)
	{
		price += i * k;
	}
	amount = price - n;
	if (price > n)
	{
		cout << amount << endl;
	}
	else
	{
		cout << "0" << endl;
	}
	// ***************************************************** */




/*  // *****************************************************
	             // 9: (A) Elephant  
	int x;
	cin >> x;
	if (x % 5 == 0)
	{
		cout << x / 5 << endl;
	}
	else
	{
		cout << (x / 5) + 1 << endl;
	}
	// ***************************************************** */




/*  // *****************************************************
	               // 8: (A) In Search of an Easy Problem
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 1)
		{
			cout << "HARD" << endl;
			return 0;
		}
	}
	cout << "EASY" << endl;
	// ***************************************************** */




/*  // *****************************************************
	                 // 7: (A) HQ9+
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	// ***************************************************** */




 /* // *****************************************************
	              // 6: (A) Odd Divisor
	long long t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		for (int i = 3; i <= 9; i += 2)
		{
			if (s[s.size() - 1] % i == 0)
			{
				cout << "YES" << endl;
				break;
			}
			else
			{
				cout << "NO" << endl;
				break;
			}
		}
	}
	// ***************************************************** */




/*  // *****************************************************
	                       //  5: (A) Sum
	int t, a, b, c, sum = 0;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c;
		if ((a + b == c) || (a + c == b) || (b + c == a))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	// ***************************************************** */




	/*
	long long x, y, m, counter = 0;
	cin >> x >> y >> m;
	long long sum = x;
	long long t = m;
	while (t--)
	{
		sum = sum + y;
		counter++;
		if (sum == m)
		{
			break;
		}
	}
	
	Input
0 1 8
Output
8
Answer
5
Checker Log
wrong answer expected '5', found '8'
	if (sum == m)
	{
		cout << counter << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
	*/





/*  // *****************************************************
	                //  4: (A) Even Odds,
	long long n, k;
	cin >> n >> k;
	int* arr = new int[n];
	int x = 0;
	for (int i = 1; i <= n; i += 2)
	{
		arr[x] = i;
		x++;
	}
	int y = x;
	for (int i = 2; i <= n; i += 2)
	{
		
		arr[y] = i;
		y++;
	}
	cout << arr[k - 1] << endl;
	// ***************************************************** */




/*  // *****************************************************
                 	  //  3: (A) Required Remainder
	int t, x, y, n;
	cin >> t;
	while (t--)
	{
		cin >> x >> y >> n;
		while (n % x != y)
		{
			n--;
		}
		cout << n << endl;
	}
	// ***************************************************** */




/* //  *****************************************************
	                //  2: (A) Bit++ 
	int n, x = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string op;
		cin >> op;
		if (op == "++X")
		{
			++x;
		}
		else if (op == "--X")
		{
			--x;
		}
		else if (op == "X++")
		{
			x++;
		}
		else if (op == "X--")
		{
			x--;
		}
	}
	cout << x << endl;
	// ***************************************************** */




/*  // *****************************************************
                 // 1: (A) Watermelon
    int n;
	cin >> n;
	if (n > 2)
	{
		if (n % 2 == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}
    // ***************************************************** */
	return 0;
}
/*
#include<iostream>

using namespace std;

int main(){


    string str;
    cin>>str;
    int temp=0;
    //cout<<str[0];

    for(int i=0;str[i]!='\0';i++){


        for(int j=i+2;str[j]!='\0';j+=2){

            if(str[i]>str[j]){

               temp=str[i];

               str[i]=str[j];

               str[j]=temp;

            }

        }

    }


    cout<<str;

}
*/

/*
#include<iostream>

using namespace std;

int main(){

int size;

cin>>size;



int arr[size];

int *ptr;

ptr = new int[size];

for(int i=0;i<size+1;i++){


    scanf("%d",(ptr+i));


}

for(int i=0;i<size+1;i++){


    printf("%d",*(ptr+i));


}


}
*/

/*
#include<iostream>

using namespace std;


int main(){

    int occurence[4];
    long long int arr[4];
    int count=1;
    int max=0;

    for(int i=0;i<4;i++){

        cin>>arr[i];

    }

    for(int i=0;i<3;i++){

      //  count=0;

        for(int j=i+1;j<4;j++){


            if(arr[i]==arr[j]){

                count++;

            }

        }

        // if(count>=1){

        //     occurence[i]=count;

        // }

        cout<<count<<endl;

    }

    // max = occurence[0];

    // for(int i=1;i<4;i++){

    //     if(max<occurence[i]){

    //         max=occurence[i];
    //     }

    // }


    cout<<count;

}
*/


/*
//Program to check all the numbers in the array

#include<iostream>


using namespace std;

int main(){


int totalLevels = 0;

cin>>totalLevels;

int arr[totalLevels]={};

int num = 1;

int X_levels=0;

int Y_levels=0;

//This will create an array of number from 1 to totallevels

for(int i=0;i<totalLevels;i++){


    arr[i] = num;

    num++;



}

//This will create an array for player X size

cin>>X_levels;

int xArr[X_levels];


for(int i=0;i<X_levels;i++){

    cin>>xArr[i];

}

cin>>Y_levels;


int yArr[Y_levels];

//This will create an array for player Y size

for(int i=0;i<Y_levels;i++){

    cin>>yArr[i];

}

//This will create an array of total size X + Y size

int dup_arr[X_levels + Y_levels];


for(int i=0,k=0;i<(X_levels+Y_levels);i++){


    if(i<X_levels){

        dup_arr[i] = xArr[i];

    }
    else if(i>=X_levels){

        dup_arr[i] = yArr[k];
        k++;
    }
}

int flag=1;

int count=0;

//Checking that all the required levels exits or not

for(int i=0;i<totalLevels && flag==1;i++){


count=0;

    for(int j=0;j<(X_levels + Y_levels);j++){

  //  cout<<arr[i]<<endl;

        if(arr[i]==dup_arr[j]){

            count++;


        }


    }

    //cout<<count<<endl;

    if(count>=1){

        flag=1;

    }
    else{

        flag=0;

    }
}

//When the flag variable gets 0 it means that all the levels are not passed

if(flag==0){

 cout<<"Oh, my keyboard!";

}
else{


    cout<<"I become the guy.";


}

}

*/
/*

#include <iostream>


#include<string>


using namespace std;


int main() {

    string arr1;

    string arr2;

    char result[101];

    cin>>arr1;

    cin>>arr2;

//This will loop throught the entire rays and check wheather their characters are same then "0" and different then stores "1".

    for(int i=0;arr1[i]!='\0';i++){



        if(arr1[i]!=arr2[i]){

            result[i] = '1';


        }
        else{

            result[i] = '0';

        }

    }


for(int i=0;result[i]=='1' || result[i]=='0';i++){

cout<<result[i];

}
}

*/
// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {

//     string arr1;
//     string arr2;
//     string result;
//     cin>>arr1;
//     cin>>arr2;

//     for(int i=0;arr1[i]!=0;i++){

//         if(arr1[i]!=arr2[i]){

//             result[i] = '1';

//         }
//         else{

//             result[i] = '0';

//         }

//     }


//     cout<<result;

// }


/*

#include<bits/stdc++.h>

//#include<iostream>

#include<string>

using namespace std;

int main(){

string set;



getline(cin,set);

int lenght = 0;

int count=0;

int flag=0;

for(int i=0;set[i]!=0;i++){

    lenght++;

}



if(lenght == 2){

    flag=1;

}

int count_var=0;

if(flag!=1){

for(int i=1;i<lenght;i+=3){

        flag=0;

        count_var=0;


if(set[i]!='0'){

//    cout<<set<<endl;

    for(int j=i+3;j<lenght;j+=3){


        if(set[i]!=set[j]){



        }
        else{

            set[j] = '0';

           // flag=1;

           count_var++;

        }
    }
if(count_var>=1){

    flag=1;
    count++;

}


    if(flag==0){

        count++;

    }


}



}

}

cout<<count;

}
*/

/*

#include <iostream>

#include<algorithm>

using namespace std;

int main() {

int size;

cin>>size;

char str[size+1];

int arr[26];           //This array contains the a 26 element array of count 1;

int arr2[26];

int count  = 0;

for(int i=0;i<26;i++){

    arr[i] = 1;

}

cin>>str;

char ch[27];

char *ptr = ch;

char ch2[27];

char *ptr2 = ch2;


//Two pointer points towards an array of upper and lower case alphabets;

for(int i=0;i<26;i++){

    *ptr = 'A' + i;

    *ptr2 = 'a' + i;        //It will check that wheather every element in string is equal to A or a and then so on.

    for(int j=0;str[j]!=0;j++){

    if(str[j]==*ptr || str[j]==*ptr2)
    {
        arr2[i] = 1;

    }

    }


    ptr++;

    ptr2++;


}

int flag=0;

for(int i=0;i<26 && flag==0;i++){

   if(arr[i]==arr2[i]){

       flag=0;

   }
   else{

       flag=1;

   }
}

if(flag==1){

    cout<<"NO";

}
else{

    cout<<"YES";

}

}
*/
/*

#include<iostream>

using namespace std;


class Student{

private:

    string name;
    int roll_num;
    int marks;

public:

    void setname(string n){

    name = n;


    }
    void setroll(int roll){

    roll_num = roll;


    }

    string getname(){

    return name;


    }
    int getroll(){

    return roll_num;


    }

    void setmarks(int m){

    marks = m;


    }


    int getmarks(){

      return marks;


    }

    //Passing the object by reference

    //It will add it on the memory of object which is being passed in the function

    Student add(Student *d){

    d->setmarks(d->getmarks() + marks);

   // return d;

    }

    //Pass by value

    Student add2(Student d){

    d.setmarks(d.getmarks() + marks);

    return d;

    }

};

int main(){


Student d1;

Student d2;

d1.setmarks(30);

d2.setmarks(20);

Student d3;
//This will add the d2 to d1
//passing by reference
//d2.add(&d1);
//now storing the result on the different object
d3 = d2.add2(d1);

cout<<d3.getmarks();

cout<<d3.getmarks();




//cout<<d1.g;





}
*/
/*

#include<iostream>

using namespace std;

int main(){


    int num;

    cin>>num;

    int arr[num];

    for(int i=0;i<num;i++){


        scanf("%d",&arr[i]);

    }

    int value=0;
    int ways=0;
    int initValue=0;
    int finalValue=0;


    for(int i=0;i<num;i++){

        ways=0;

        value = arr[i];

        initValue = 1;

        finalValue = value-1;


        //for(int j=0;j<(arr[i]/2) && initValue<finalValue;j++){

        while(finalValue>initValue){


        if(initValue+finalValue==arr[i]){

                ways++;

            }

            initValue++;

            finalValue--;

        }

        printf("%d\n",ways);
    }



}
*/

/*
#include<iostream>

using namespace std;

int main(){


    int num;
    int value=0;
    int ways=0;
    int initValue=0;
    int finalValue=0;

    cin>>num;

    int arr[num];

    for(int i=0;i<num;i++){


        scanf("%d",&arr[i]);

         ways=0;

        value = arr[i];

        initValue = 1;

        finalValue = value-1;

        while(finalValue>initValue){


        if(initValue+finalValue==arr[i]){

                ways++;

            }

            initValue++;

            finalValue--;

        }

        printf("%d\n",ways);



    }




}
*/

/*
#include<iostream>

using namespace std;

int main(){

    int n,m;
    int max=0;
    cin>>n>>m;
    int flag=0;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=m;j++){

            if(i%2!=0){

                printf("#");

            }
            else{


            }



        }
        printf("\n");

    }



}
*/
/*
//Program to check the available or non available of police officers

#include<iostream>


using namespace std;

int main(){

int size;

cin>>size;

int arr[size];

int count=0;

int avail_officiers=0;            //available officers

int untrea_crimes=0;                //untreated crimes


for(int i=0;i<size;i++){

    cin>>arr[i];


}

for(int i=0;i<size;i++){

        //when the entry is 1 or greater than 1
    if(arr[i]>=1){

        avail_officiers+=arr[i];

    }
    //when the entry is -1 or greater than 1 this will execute when there are available officers
    else if(arr[i]==-1 && avail_officiers>=1){


        avail_officiers--;

    }

    //when the entry is -1 or greater than 1 this will execute when there are no available officers making the untreated crimes
    else if(arr[i]==-1 && avail_officiers==0){


        untrea_crimes++;

    }

}


cout<<untrea_crimes;

}
*/
/*
#include<iostream>

using namespace std;

int main(){

int arr[3];

for(int i=0;i<3;i++){

    cin>>arr[i];

}

int temp=0;


//This will sort the array in accending order so that the max or min coordinates are at the end of the array
for(int i=0;i<2;i++){

        for(int j=i;j<3;j++){

    if(arr[i]>arr[j]){

        temp=arr[j];
        arr[j] = arr[i];
        arr[i]=temp;

    }

        }
}


int value=0;
int count=0;
//This will check the first and last element and increase or decrease them respectively to try to match the 2nd one. In this way we get the total minimum steps both friends needs to take to meet at one point.
for(int i=0;(arr[0]&&arr[2]!=arr[1]);i++){

    if(arr[0]<arr[1]){

        arr[0]+=1;

        count++;

    }
    else if(arr[2]>arr[1]){

        arr[2]-=1;
        count++;

    }

}

printf("%d",count);

}

*/
/*




#include<iostream>
using namespace std;

int main(){


int test_cases=0;

cin>>test_cases;

for(int i=0;i<test_cases;i++){

  int size;

  cin>>size;

  int arr[size];

  for(int j=0;j<size;j++){

    cin>>arr[j];


  }

   int flag=0;

    for(int j=0;j<size-1 && flag==0;j++){

        if((arr[j]==arr[j+1]) || (arr[j]-arr[j+1])==-1 || (arr[j]-arr[j+1])==1){

            flag=0;

        }
        else {flag=1;

        }
    }

    if(flag==0){


        printf("YES\n");

    }
    else{

        printf("NO\n");

    }
}
}
//*/

/*
#include<iostream>

using namespace std;

int main(){

int size;

cin>>size;

char arr[size+1];

cin>>arr;

int count=0;


for(int i=0;i<size-1;i++){


    if(arr[i]==arr[i+1]){

        count++;

    }

}

cout<<count;

}


*/
/*
#include<iostream>


using namespace std;


int  main(){


int size;
int max;
cin>>size;

int arr[size];

for(int i=0;i<size;i++){


    cin>>arr[i];

}

max = arr[0];

for(int i=1;i<size;i++){


    if(max<arr[i]){

        max = arr[i];

    }

}

int count=0;

//check if they are not equal then it increases the index i to become equal to the max

for(int i=0;i<size;i++){


    if(arr[i]!=max){

        for(int j=0;arr[i]!=max;j++){


            arr[i]+=1;

            count++;

        }

    }

}



cout<<count;

}
*/




/*
#include<iostream>

using namespace std;


int main(){


    long int a,b;

    int num;

    cin>>num;

    int flag=0;

    int count=0;


for(int j=0;j<num;j++){

        cin>>a>>b;

    if(a%b==0){


    cout<<count<<endl;

    }
    else{
     /*
    for(int i=0;i<num;i++){

        count=0;

        cin>>a>>b;

        if(a%b==0){

            cout<<"0"<<endl;

        }
        else{


            for(int j=0;(a%b!=0);j++){

                a++;
                count++;

            }
            cout<<count<<endl;

        }

    }


//
for(int i=0;a>b;i++){

    a=a-b;

}


   b = b-a;

   cout<<b<<endl;
}
    }

}

*/


#include <algorithm>
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int arr[5][5];

    int x;
    int y;
    int count=0;
    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            cin>>arr[i][j];

        }


    }
    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            if(arr[i][j]==1){

                x=i;
                y=j;

            }

        }


    }

    for(int i=0;x!=2 || y!=2;i++){

    if(x<2){

        x+=1;
        count++;

    }
    else if(x>2){

        x-=1;
        count++;

    }
    else if(y<2){

        y+=1;
        count++;

    }
    else if(y>2){

        y-=1;
        count++;

    }
    }
    cout<<count;
}


 
