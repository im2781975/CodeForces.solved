int y[102],z[102],i,j,f=0,d=0;
      while(cin>>y[d++]);
      d--;
      if(d==1) {cout<<-1; return 0;}
      for(i=0;i<d;i++)
    	  for(j=i+1;j<d;j++)
    		  z[f++]=gcd(y[i],y[j]);
      i=0,j=0;
      while(i++<f)
    	  if(z[i-1]>j) j=z[i-1];
      cout<<j;
----
int a,b,c,x=0,y=0,d,z=0;
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
      else cout<<"NO";
------
char y[3][3];
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
   ff:cout<<"illegal";
-----
int x;
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
   if(i!=x-1) cout<<endl;}
-----
int x;
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
   if(i!=x-1) cout<<endl;}
-----
