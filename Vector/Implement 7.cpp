void solve12(){
    // https://codeforces.com/contest/1859/problem/A
    ll n;
    cin >> n;
    vector<ll>v(n);
    ll mx = 0;
    bool f = false;
    vector<ll>b,c;
    for(int i = 0 ; i < n; i++) {
      cin >> v[i];
      mx = max(mx , v[i]);
    }
    for(int i = 0 ; i < n; i++){
     if(v[i] == mx) c.pb(v[i]);
     else b.pb(v[i]);
    }
    if(b.size()==0 || c.size() == 0){
      cout << -1 << "\n";
      return;
    }
    cout << b.size() << " " << c.size() << "\n";
    for(auto i : b) cout << i << " ";
    cout << "\n";
    for(auto i : c) cout << i << " ";
    cout << "\n";
  }
  void solve13(){
    //https://codeforces.com/contest/1859/problem/B
    ll n;
    cin >> n;
    ll s;
    ll op = 0;
    ll mn = 1e10;
    ll mx = 0;
    ll f = 0;
    ll sum = 0;
    ll temp = 0;
    vector<vector<ll>>v(n);
    for(int i = 0 ; i < n ; i++){
      cin >> s;
      for(int j = 0 ; j < s ; j++){
        int num;
        cin >> num; 
        v[i].pb(num);
        if(mn > num){
          mn = num;
          temp = i;
          sum = num;
        }
      } 
    }
    for(int i = 0 ; i < n ; i++){
      sort(v[i].begin() ,v[i].end());
      sum+= v[i][1];
     }
    for(int i = 0 ; i < n ; i++){
      op= max(op , sum - v[i][1]);
    }
    cout << op << "\n";
    }
    bool check(vector<ll>v , ll k){
      for(int i = 0; i < v.size(); i++){
        if(v[i] - k >0) return false;
      }
      return true;
    }
