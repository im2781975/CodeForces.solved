    vector<vector<int> > pos(200001,vector<int> (2));

 		int n,m;
 		cin>>n>>m;
 		vector<int> a(n);
 		vector<int> c(n,0);
 		vector<int> b(n+m+1,0);
 		for(int i=0;i<n;i++) cin>>a[i];
 		for(int i=1;i<=m;i++){
 			int x,y;
 			cin>>x>>y;
 			x--;
 			b[a[x]]+=i-c[x];
 			c[x]=i;
 			a[x]=y;
 		}
 		m++;
 		for(int i=0;i<n;i++) b[a[i]]+=m-c[i];
 		int ans=0;
 		for(int i=0;i<sz(b);i++){
 			ans+=((b[i]*(m-b[i]))+((b[i]*(b[i]-1))/2));
 		}
 		cout<<ans<<endl;
 	}
-----
int n,k;
	    cin>>n>>k;
	    vector<ll>vec(n);
	    for(ll i=0;i<n;i++)
	        cin >> vec[i];
	        
	    sort(all(vec));
	    reverse(all(vec));
	    ll val=vec[k-1];
	   ll i=0;
	   ll cnt=0;
	   if(val==0)
	   {
	       ll cap=0;
	       for(ll i=0;i<n;i++)
	       {
	           if(vec[i]>0)
	           cap++;
	       }
	       cout << cap << endl;
	   }
	   else{
	   while(vec[i]>=val &&  i<n){
	       i++;
	       cnt++;
	   }
	    cout << cnt << endl;
	   }
	    
	} 
    return 0;
}
-----
 vector<ll> sieve(ll n)
{
     vector<bool> prime(n + 1, true);
 
     prime[0] = false;
    prime[1] = false;
     ll m = sqrt(n);
 
     for (ll p = 2; p <= sqrt(n); p++)
     {
        if (prime[p])
        {
 
            for (ll i = p * 2; i <= n; i += p) {
                prime[i] = false;
 
             }
        }
     }
     vector<ll> ans;
     for (ll i = 0; i < n; i++)
         if (prime[i])
             ans.push_back(i);
     return ans;
 }
 ll findLowerBound(vector<pair<ll, ll> >& arr,pair<ll, ll>& p1)
{     auto low = upper_bound(arr.begin(), arr.end(), p1);
 
     return low - arr.begin();
}
 ll maxvec(vll &v) {
     ll mx  = LLONG_MIN;
     ll i;
     rep(i, 0, v.size() - 1) mx = max(v[i], mx);
     return mx;
}
 ll minvec(vll &v) {
     ll mn  = LLONG_MAX;
     ll i;
    rep(i, 0, v.size() - 1) mn = min(v[i], mn);
     return mn;
}
 ll sumvec(vll &v) {
    ll sum = 0;
     ll i;
     rep(i, 0, v.size() - 1) sum += v[i];
    return sum;
}
bool allequal(vll &v) {
     ll mx = LLONG_MIN;
    ll mn = LLONG_MAX;
     for (ll i = 0; i < v.size(); i++) {
         mx = max(mx, v[i]);
        mn = min(mn, v[i]);
}
     return mx == mn;
}
