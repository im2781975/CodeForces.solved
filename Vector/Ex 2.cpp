 typedef pair<ll, ll> pi;
 vector <ll> dijkstra(ll V, vector<vector<pair<ll, ll>>> adj, ll s, vll &par)
{
     priority_queue<pi, vector<pi>, greater<pi> > pq;
     pq.push({0, s});
     vector<ll>dist(V, LLONG_MAX);
      vll par(V,-1);
     dist[s] = 0;
     while (!pq.empty()) {
         ll dis = pq.top().first;
         ll ind = pq.top().second;
         pq.pop();
        for (auto it : adj[ind]) {
            if (dist[it.ff] > dis + it.ss) {
                 par[it.ff] = ind ;
                 dist[it.ff] = dis + it.ss;
                 pq.push({dist[it.ff], it.ff});
             }
        }
     }
     return dist;
 }
-----
 ll help(vll &v, ll cnt) {
     ll sum = 0;
     sort(all(v));
     reverse(all(v));
     for (ll i = 0; i < cnt; i++) {
        sum += v[i];
     }
    return sum;
}
----
 ll helper(ll i, ll j, vector<vector<char>>&v, vector<vector<ll>>&vis) {
     ll cnt = 0;
     for (; cnt < v.size() - i; cnt++) {
         for (ll k = j - cnt; k <= j + cnt; k++) {
             if (k >= v[0].size() || k < 0 || v[i + cnt][k] != '*') return cnt;
        }
 
    }
     return cnt ;
}
ll scndmin(vll &tmp) {
     ll ind = -1, mn = LLONG_MAX;
     for (ll i = 0; i < tmp.size(); i++) {
         if (tmp[i] < mn) {
             ind = i;
            mn = tmp[i];
         }
     }
    ind = -1, mn = LLONG_MAX;
     for (ll i = 0; i < tmp.size(); i++) {
         if (i == ind) continue;
         if (tmp[i] < mn) {
             ind = i;
             mn = tmp[i];
         }
     }
     return mn;
}
------
int  Sum(vector<int> m)
{
    int sum=0;
    for(int i=0;i<m.size();i++)
       sum+=m[i];
     return sum;
}
int  element(vector<int> d)
{
    int maxm = d[0];
    for(int i=0;i<d.size();i++)
    {
        if(maxm<=d[i])
            maxm=d[i];
    }
    return maxm;
}
int Min(vector<int> a)
{
    return (*min_element(a.begin(),a.end()));
}
void func_A()
{
     int n;
     cin>>n;
     vector<int> v;
     for(int i=0;i<n;i++)
     {
         int x;
         //scanf("%d",&x);
         cin>>x;
         v.push_back(x);
     }
      if(Min(v)==1)
        cout<<element(v)<<endl;
     else
      cout<<Min(v)+1<<endl;
 
 
     int cnt=0;
     while(Sum(v)>n)
     {
        for(int i=0;i<n;i++)
         {
         cout<<v[i]<<" ";
         }
         cout<<endl;
         cout<<Sum(v)<<endl;
 
        int h=Min(v);
        cout<<h<<endl;
        for(int j=0;j<n;j++)
        {
            if(v[j]>h)
                v[j]=v[j]-h;
        }
        cnt+=1;
    }
    cout<<cnt+1<<endl;
}
------
ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    if(sum%2!=0)
        cout<<"NO"<<endl;
    else
    {
 
        vector<ll> v;
        for(ll i=1;i<=n;i++)
            v.push_back(i);
        for(ll i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<"\n";
        ll a = Sum(v)/2;
        vector<ll> set1;
        vector<ll> set2;
 
 
       if(n%2!=0)
       {
        set1.push_back(v[n-1]);
        v.pop_back();
        set2.push_back(v[n-2]);
        v.pop_back();
        for(ll i=0;i<v.size();i++)
        {
             if(Sum(set1)==a||Sum(set2)==a){
                    break;
            }
            set2.push_back(element(v));
            v.pop_back();
            set1.push_back(element(v));
            v.pop_back();
        }
 
        if(Sum(set1)!=a){
            for(int i=0;i<v.size();i++)
                set1.push_back(v[i]);
        }
        if(Sum(set2)!=a){
            for(int i=0;i<v.size();i++)
                set2.push_back(v[i]);
        }
        }
        else{
        ll turn = 1;
        ll start = 1;
        ll last = n;
        while (start < last) {
 
            if (turn) {
                set1.push_back(start);
                set1.push_back(last);
                turn = 0;
            }
            else {
                set2.push_back(start);
                set2.push_back(last);
                turn = 1;
            }
            start++;
            last--;
        }
        }
        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(ll i=0;i<set1.size();i++)
            cout<<set1[i]<<" ";
        cout<<endl;
        cout<<set2.size()<<endl;
        for(ll i=0;i<set2.size();i++)
            cout<<set2[i]<<" ";
}
------
void func_A()
{
     int n;
     cin>>n;
     vector<int> v;
     for(int i=0;i<n;i++)
     {
         int x;
         //scanf("%d",&x);
         cin>>x;
         v.push_back(x);
     }
      if(Min(v)==1)
        cout<<element(v)<<endl;
     else
      cout<<Min(v)+1<<endl;
}
int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    ll count=0;
    ll m=v[0];
    ll *p;
    p=new ll[m+1];
    for(int i=0;i<m+1;i++)
        p[i]=0;
    for(ll i=0;i<n;i++)
    {
        p[v[i]]++;
    }
    for(ll i=0;i<m+1;i++)
    {
        if(p[i]!=0)
        count++;
    }
    cout<<count<<endl;*/
    int t;
    cin>>t;
    while(t--)
    {
         func_A();
 
    }
   int n;
    cin>>n;
    vector<int> v,v2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
            x=i;
    }
    cout<<x<<endl;
int  Sum(vector<int> m)
{
    int sum=0;
    for(int i=0;i<m.size();i++)
       sum+=m[i];
     return sum;
}
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
 
        }
       int cnt=-1;
 
       while(element(v)<=k)
       {
 
           sort(v.begin(),v.end());
           v[1]+=v[0];
           cnt+=1;
       }
       cout<<cnt<<endl;
    }
------
 int  Sum(vector<int> m)
{
    int sum=0;
    for(int i=0;i<m.size();i++)
       sum+=m[i];
     return sum;
}
   int n;
    cin>>n;
    int cont=0;
    while(n--)
    {
        vector<int> v;
        int x;
        int a=0;
        for(int i=0;i<3;i++)
        {
            cin>>x;
           v.push_back(x);
           a+=x;
        }
        int a=Sum(v);
        if(a>=2)
            cont+=1;
 
    }
    cout<<cont<<endl;
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a=v[k-1];
    int cont=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=a && v[i]>0)
            cont+=1;
    }
    cout<<cont<<endl;
   return 0;
}
