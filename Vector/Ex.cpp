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
       ll i,j=0,n,k,s=0;
           vector<ll> z;
           cin>>n;
           for(i=0;i<n;i++)
           {
                cin>>k;
                z.push_back(k);
                s+=k;
           }
           sort(z.begin(),z.end());
           k=0;
           for(i=n-1;i>=0;i--)
           {
                j+=z[i];
                k++;
                if(j>(s-j))
                break;
           }
           cout<<k<<endl;  */
}
int main()
{
    vector<ll> z;
        ll i,j,a,n;
        cin>>n;
        for(i=0;i<n;i++)
        {
                cin>>j;
                z.push_back(j);
        }
        sort(z.begin(),z.end());
        auto it=upper_bound(z.begin(),z.end(),z[0]);
        a=it-z.begin();
      it=lower_bound(z.begin(),z.end(),z[z.size()-1]);
        it--;
        j=it-z.begin();
        n=0;
        cout<<max(n,j-a+1)<<endl;
}
int main()
{
       vector<ll> a,b;
        ll n,m,i,j,k,c=0,f=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
                cin>>k;
                a.push_back(k);
        }
        for(i=0;i<m;i++)
        {
                cin>>k;
                b.push_back(k);
       }
       sort(b.begin(),b.end());
       reverse(b.begin(),b.end());
       j=0;
       for(i=0;i<n;i++)
       {
                if(a[i]==0)
                {
                        a[i]=b[j];
                        j++;
                }
      }
      for(i=1;i<n;i++)
      {
        if(a[i]<a[i-1])
        {
                f=1;
                break;
        }}        
      if(f)
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl; 
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
int main()
{
ll i,j,x,y;
        x=1e10;
        x*=-1;
        y=1e10;
        ll n;
        vector<ll> z;
        cin>>n;
        for(i=0;i<n;i++)
        {
                cin>>j;
                x=max(x,j);
                y=min(y,j);
                z.push_back(j);
        }
        cout<<abs(z[0]-z[1])<<" "<<abs(z[0]-x)<<endl;
        for(i=1;i<n-1;i++)
        {
                cout<<min(abs(z[i]-z[i-1]),abs(z[i]-z[i+1]))<<" "<<max(abs(z[i]-x),abs(z[i]-y))<<endl;
        }
        cout<<abs(z[n-1]-z[n-2])<<" "<<abs(y-x)<<endl;
}

