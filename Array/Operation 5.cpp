float y=0,z[3],sum=0;
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
     if(sum<60) {cout<<"F"; return 0;}
------
int x;
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
     cout<<c;}
