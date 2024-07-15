int main()
{
    ll i,j,t,x,y,c=0,n;
        cin>>t;
        while(t--)
        {
        string s,a,b,s1;
        cin>>n;
        cin>>s;
        s1=s;
        //sort(s1.begin(),s1.end());
        ll f=0,f1=0;
         vector<ll> z;
        for(i=0;i<=9;i++)
        {
                c=0,f1=0;
               
                for(j=0;j<n;j++)
                {
                        if((s[j]-'0')>i)
                        {
                        if(a[a.size()-1]>s[j])
                        {
                                f1=1;
                                break;
                        }  
                        z.push_back(2);      
                        a+=s[j];
                        c=1;
                        }
                        else if((s[j]-'0')<i)
                        {
                        if(b[b.size()-1]>s[j])
                        {
                                f1=1;
                                break;
                        }  
                        z.push_back(1);   
                        b+=s[j];
                        }
                        else
                        {
                                if(c)
                                {
                                z.push_back(1);
                                b+=s[j];
                                }
                                else
                                {
                                z.push_back(2);
                                a+=s[j];
                                }
                        }
                }
                if(f1==0)
                {
                        f=1;
                        c=i;
                        break;
               }         
              z.clear();
              a.clear();
              b.clear();                  
                        
        
        }
        if(f)
        {
                for(auto it:z)
                cout<<it;
                cout<<endl;
        }
        else
        cout<<"-"<<endl;
        }
}
int main()
{
    
      ll a,b,n,x=0,y=0;
      cin>>n;
      vector<ll> z;
      for(ll i=0;i<n;i++)
      {
        cin>>a;
        if(a>0)
        {
                if(x==0)
                x=a;
                else
                z.push_back(a);
        }
        else if(a<0)
        {
                if(y==0)
                y=a;
                else
                z.push_back(a);
        }
        else
        z.push_back(a);
        }    
        sort(z.begin(),z.end());
        reverse(z.begin(),z.end());
          
        cout<<1<<" "<<y<<endl;
        if(x!=0)
        cout<<1<<" "<<x<<endl;
        else
        {
        ll x1=z[z.size()-1],y1=z[z.size()-2];
        z.pop_back();
        z.pop_back();
        cout<<2<<" "<<x1<<" "<<y1<<endl;
        }
     
        cout<<z.size()<<" ";
        for(auto it : z)
        cout<<it<<" ";
        cout<<endl;
}
int main()
{
     ll i,j,c=0;
     ll n;
     vector<ll> x;
     string s;
     cin>>n;
     cin>>s;
     for(char pp : s)
     {
             if(pp=='B')
             c++;
             else
             {
                if(c!=0)
                x.push_back(c);
                c=0;
            }
           // cout<<c<<endl;
      }
      if(c!=0)
      x.push_back(c);
      cout<<x.size()<<endl;
      for(auto it : x)
      cout<<it<<" ";
}
