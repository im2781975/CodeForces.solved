#include <bits/stdc++.h>
#include<string>
#include<string.h>
#define ll long long
using namespace std;
vector<ll> primeFactors(ll n)
{
    vector<ll> v;
    int counter=0;
    while (n % 2 == 0)
    {
        if(counter==0){
            v.push_back(2);
        }
        // cout << 2 << " ";
        n = n/2;
        counter=1;
    }
 
    for (ll i = 3; i <= sqrtl(n); i = i + 2)
    {
        counter=0;
        while (n % i == 0)
        {
            if(counter==0){
                v.push_back(i);
            }
            counter=1;
            n = n/i;
        }
    }
 
    if (n > 2)
        v.push_back(n);
    return v;
}
void findCombination(vector<char> sv,ll dis,ll k,vector<string> &total,string temp,ll count){
    if(count==dis){
        if(temp.size()==k){
            total.push_back(temp);
        }
        return;
    }
    findCombination(sv,dis,k,total,temp,count+1);
    temp+=sv[count];
    findCombination(sv,dis,k,total,temp,count+1);
    return;
}
ll fin(int n,map<vector<vector<int> >,int> &m,vector<vector<int> > a){
     if(m.count(a)==1){
         return m[a];
     }
     if(n==1){
         if(a[0][0]==1){
             m[a]=1;
            return 1;
         }else{
             m[a]=0;
             return 0;
         }
     }
     for(int i=0;i<n;i++){
         int sum=0;
         for(int j=0;j<n;j++){
             sum+=a[i][j];
         }
        if(sum==0){
             m[a]=0;
             return 0;
        }
     }
     for(int i=0;i<n;i++){
         int sum=0;
         for(int j=0;j<n;j++){
             sum+=a[j][i];
        }
        if(sum==0){
             m[a]=0;
            return 0;
         }
     }
}
vector<vector<int> > b(n-1,vector<int>(n-1));
     int x=0;
     int y=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(a[i][j]==1){
                 x=i;
                 y=j;
                 goto l;
             }
         }
     }
     l:
     cout<<x<<y<<endl;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(i==x || j==y){
                 continue;
             }

             if(i<x && j<y){
                 b[i][j]=a[i][j];
            }else if(i<x && j>y){
                 b[i][j-1]=a[i][j];
             }else if(i>x && j<y){
                 b[i-1][j]=a[i][j];
             }else{  
                 b[i-1][j-1]=a[i][j];
             }
         }
     }
    a[x][y]=0;
     ll ans1=fin(n,m,a);
     ll ans2=fin(n-1,m,b);
      cout<<m[c]<<endl;
     a[x][y]=1;
     m[a]=ans1+ans2;
     return m[a];
}
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
