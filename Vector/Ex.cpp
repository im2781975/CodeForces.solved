
 void ta(int x,int y,int n,int m,vector<vector<char> > &a,vector<vector<int> > &b,int count,string s,string* c){
     if(x<0 || y<0 || x>=n || y>=m){
         return;
     }
     if(b[x][y]<=count && b[x][y]!=-1){
         return;
     }
    
     if(a[x][y]=='#'){
         b[x][y]=-1;
         return;
     }
     b[x][y]=count;

     if(a[x][y]=='B'){
         *c=s;
         return;
     }
     ta(x+1,y,n,m,a,b,count+1,s+"D",c);
     ta(x-1,y,n,m,a,b,count+1,s+"U",c);
     ta(x,y+1,n,m,a,b,count+1,s+"R",c);
     ta(x,y-1,n,m,a,b,count+1,s+"L",c);
     return;
}
int olusola(int n,int x, int y){
vector<int> v(4);

v[0] = x;
v[1] = y;
v[2] = n+1-x;
v[3] = n+1-y;

sort(v.begin(),v.end());

return v[0];
}
void solve_tc()
{
 int n, x1, y1, x2, y2;
 cin>>n>>x1>>y1>>x2>>y2;
int n,k; cin>>n>>k;
vector<int> v(n);
for(int i=0; i<n; i++) {
    cin>>v[i];
}
sort(v.rbegin(),v.rend());

int me = v[k-1];
int cnt = 0;
for (int i = 0; i < n; i++)
{
    if(v[i] == 0){
        continue;
    }
    if(v[i] >= me){
        cnt++;
    }
}
cout<<cnt<<endl;
-----
 vector<int> a1 = a;
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());

 for (int i = 0; i < n; i++)
{
     int index = binarySearch(a, 0, n-1, a1[i]);
     cout<<b[index]<<" ";
 }
cout<<endl;
--
 for (int i = 0; i<n; i++){
    
     int cnt = 0;
    for (int j = i; j < n; j++)
     {
        if(b[i]<a[j]){
             cnt++;
         }
         else {
             break;
         }
     }
     ans = ans % 1000000007;
     cnt = cnt % 1000000007;
     ans = ans*cnt;
     }
 cout<<ans<<endl;
----
int cnt = 0;
 int n; cin>>n;
 vector<int> v(n);
 for (int i = 0; i < n; i++){
     cin>>v[i];  
 }
cout<<"ME"<<endl;
int i =0, j = n-1;
 vector<int> v1;

 int diff = 0, diff1 = 1;
 while(i <= j){
     if(v[i] !=v[j]){
         diff = abs(v[i] - v[j]);
         diff1 = min(v[i], v[j]);
         break;
     }
     i++; j--;
 }
 if(diff == 0){
    cout<<0<<endl;
        return;
}
-----
 vector<int> v2(n);
 vector<int> v3(n);
 for (int i = 0; i < n; i++)
 {
    v2[i] = v[i] % diff;
     if(diff1 != 0) {

    v3[i] = v[i] % diff1;
    }
     else {
         v3[i] = 0;
    }
}
 i =0, j = n-1;

bool og1 = false, og2 = false;
 while(i<=j){
    if(v2[i] != v2[j]){
        og1 = true;
    }
    if(v3[i]!= v3[j]){
         og2 = true;
     }
     i++; j--;
}

 if(og1 && og2){
     cout<<1<<endl; 
     return;
}
 else if(og1){
     cout<<diff1<<endl;
 }
 else if(og2){
     cout<<diff<<endl;
 }
 while(i <= j){
if((v1[i] % diff) != )

 }
sort(v1.begin(), v1.end());

if(v1[0] == v1[v1.size()-1]) {
 cout<<v1[0]<<endl;
    return;
}
 else {
   cout<<1<<endl;
    return;
 }

}
void solve_me()
{
int n;
cin >> n;
     vector<int> v(n);
     int n1 = ceil(double(n) / 2);

    int a = n1;
    for (int i = 0; i < n; i += 2)
{
        v[i] = a;
         a--;
     }
     int b = n;
    for (int i = 1; i < n; i += 2)
     {
        v[i] = b;
         b--;
    }

     f0r(i, n)
     {
         cout << v[i] << " ";
     }
     cout << endl;
    return;
}

 void solve()
 {
 int n;
 cin>>n;
 vector<int> v(n);
vector<int> v1(n);
 for(int i = 0; i<n; i++){
     cin>>v[i];
 }
int ans = 0;
 for(int i = 0; i<n; i++){
     cin>>v1[i];
}
 int i = n-1, j = n-1;
 while(i>=0){
    int temp = v1[j];
if(temp != v[i]){
    i--;
}
else if(temp == v1[j]){
    ans++;
     j--;
    i--;
}
 }
 cout<<n-ans<<endl;
}
void solve_tc()
{
 int n, k;
 cin>>n>>k;
 vector<int> v1(n);
 vector<vector<int>> v;
 int ans = 0;
 for (int i = 0; i < n; i++)
 {
   cin>>v1[i];
 }
 v.push_back(v1);
 vector<vector<int>> v3(k+1, vector<int>(2));

 int k1 = k;
 int cnt1 = 1;
 v3[0][0] = 1;
 v3[0][1] = v1[0];

  while(k1--){
     cin>>v3[cnt1][0]>>v3[cnt1][1];
     cnt1++;
 }
 int ans = 0;
 int k2 = k+1;
 int cnt = 0;

 while(cnt < (k)){
 v1[(v3[cnt][0])-1] = v3[cnt][1];

 int cnt2 = cnt+1;
 int k;
 vector<int> v2 = v1;
 while(cnt2<(k+1)){
vector<int> v2 = v1; 

 v2[(v3[cnt2][0])-1] = v3[cnt2][1];
 set<int> op;

        for(int me : v1) {
       op.insert(me);
    }
         for(int me : v2) {
      op.insert(me);
    }
    ans += op.size();
    cnt2++;
 }

 cnt++;
 cnt1++;
 cnt++;
}
 cout<<ans<<endl;

 }
-----
 int pos, value;
 vector<int> vTemp(2);
 vTemp[0] = v1[pos-1]; vTemp[1] = value;
 v3.push_back(vTemp);

 cin>>pos>>value;
 vector<int> v2 = v1;

 v2[(v3[cnt][0])-1] = v3[cnt][1];
 v2[pos-1] = value;

 for (int i = 0; i < k; i++)
 {
    for (int j = i+1; j < k+1; j++)
    {
    set<int> op;
     for(int me : v1) {
       op.insert(me);
    }
         for(int me : v2) {
       op.insert(me);
    }
   ans += op.size();
 }
     }
 v.push_back(v1);
-----
int n,m;
 		cin>>n>>m;
 		vector<int> a(n);
 		vector<int> c(n,0);
 		vector<int> b(n+m+1,0);
             cout<<endl;
 		for(int i=0;i<n;i++) cin>>a[i];
          for (int i = 0; i < a.size(); i++)
{
                 cout<<a[i]<<" ";
             }
             cout<<endl;
             cout<<endl;

            for (int i = 0; i < b.size();  i++)
             {
                 cout<<b[i]<<" ";
             }                        cout<<endl; 
            for (int i = 0; i < c.size(); i++)
             {
               cout<<c[i]<<" ";
            }
                        cout<<endl;

		for(int i=1;i<=m;i++){
 			int x,y;
 			cin>>x>>y;
 			x--;
 			b[a[x]]+=i-c[x];
 			c[x]=i;
 			a[x]=y;
             for (int i = 0; i < a.size(); i++)
             {
                 cout<<a[i]<<" ";
             }
             cout<<endl;

             for (int i = 0; i < b.size();  i++)
             {
                 cout<<b[i]<<" ";
             }
                 cout<<endl;

             for (int i = 0; i < c.size(); i++)
             {
                 cout<<c[i]<<" ";
             }                        cout<<endl;
            }
 		m++;
 		for(int i=0;i<n;i++) b[a[i]]+=m-c[i];

       for (int i = 0; i < b.size();  i++)
             {
                 cout<<b[i]<<" ";
             }
		int ans=0;
 		for(int i=0;i<sz(b);i++){
 			ans+=((b[i]*(m-b[i]))+((b[i]*(b[i]-1))/2));
             cout<<ans<<" ";
 		}
         cout<<endl;
 		cout<<ans<<endl;
        cout<<endl;
 	}
	return 0;
 }
