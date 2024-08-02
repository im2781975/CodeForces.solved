int main()
{
         
      ll i,j,x=0,y=0,n,k=0;
      cin>>n>>j;
      x=n;
      while(n--)
      {
                cin>>i;
                if(i>j)
                x++;
      }
      cout<<x<<endl;  
}
int main()
{
      ll n,a,b,c,d,e,f,g,h;
      cin>>a>>b>>c>>d>>e>>f>>g>>h;
      b*=c;
      b/=g;
      //cout<<b<<endl;
      d*=e;
      f/=h;
     // cout<<f<<" "<<d<<endl;
      cout<<min({b,f,d})/a<<endl;    
}
int main()
{
    ll a,b,c;
      cin>>a>>b>>c;
      b=a*b/__gcd(a,b);
      cout<<c/b<<endl;
}
int main()
{
ll i,j=0,a,b;
    ll c=-1;
      ll n,x;
      cin>>n>>x;
      while(n--)
      {
        cin>>a>>b;
        if(a<x)
        {
             if(b!=0)
             c=max(c,100-b);
             else
             c=max(c,j);
        }
        else if(a==x)
        {
                if(b==0)
                c=max(c,b);
        }        
      }
      cout<<c<<endl;     
}
int main()
{
      ll a=0,b=0,c=-1,n,y;
      cin>>n;
       while(n--)
       {
        cin>>y;
        if(y==5)
        a++;
        else
        b++;
      }
      if(b==0)
      {
                cout<<-1<<endl;
      }
      else
      {
                if(a/9==0)
                cout<<0<<endl;
                else
                {       
                        y=a/9*9;
                        while(y--)
                        {
                                cout<<5;
                        }
                        while(b--)
                        {
                                cout<<0;
                         }
                         cout<<endl;
                 }
      }
}
