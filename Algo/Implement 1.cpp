#include<bits/stdc++.h>
using namespace std;

map<int,int> m;
int a[500001],n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	if(m.count(0)) puts("NO");
	else if(m.size()==2)
	{
		int cnt=0;
		for(auto i:m)
		{
			a[++cnt]=i.first;
		}
		if(a[1]+a[2]==0) puts("NO");
		else puts("YES");
	}
	else puts("YES");
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<string,vector<int>> p;
int n,k;
ll ans;
string s;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		auto &v=p[s];
		ans+=v.end()-lower_bound(v.begin(),v.end(),i-k-1);
		v.push_back(i);
	}
	cout<<ans<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

string s;
int x=0,y=0;
unordered_set<string> h;
string m[8]={"ULD","URD","LDR","LUR","DLU","DRU","RUL","RDL"};
int main()
{
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if((s[i]=='L'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='L'))
        {
            puts("NO");
            return 0;
        }
        if((s[i]=='U'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='U'))
        {
            puts("NO");
            return 0;
        }
        if(s[i]=='U') y++;
        else if(s[i]=='R') x++;
        else if(s[i]=='D') y--;
        else x--;
    }
    for(int i=0;i<len-2;i++)
    {
        string ans="";
        ans=s[i]+s[i+1]+s[i+2];
        h.insert(ans);
    }
    for(int i=0;i<8;i++)
    {
        if(h.count(m[i])) 
        {
            puts("NO");
            return 0;
        }
    }
    if(x==0&&y==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N = 0x3f3f3f3f;
typedef long long ll;
ll mp[2031][2031];


int main()
{
	int i,j,k;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			mp[i][j]=mp[j][i]=N; 
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			if(abs(i-j)<=21)
				mp[i][j]=mp[j][i]=(i*j)/(__gcd(i,j));
	for(k=1;k<=2021;k++)
	{
		for(i=1;i<=2021;i++)
		{
			for(j=1;j<=2021;j++)
			{
				if(mp[i][j]>mp[i][k]+mp[k][j]) mp[i][j]=mp[j][i]=mp[i][k]+mp[k][j];
			}
		}
	}
	cout<<mp[1][2021]<<endl;
	return 0;
}
#include<iostream>
typedef long long ll;
using namespace std;
int n,m;
int g[10][10];
int st[10][10];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int ans=100,sum=0;
int total;
void dfs(int x,int y,int total,int s)
{
	if(total==sum/2)
	{
		ans=min(ans,s);
		return ;
	}
	if(total>sum/2) return ;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(st[nx][ny]==0&&nx>=0&&ny>=0&&nx<n&&ny<m) 
		{
			st[nx][ny]=1;
			dfs(nx,ny,total+g[nx][ny],s+1);
			st[nx][ny]=0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>g[i][j];
			sum+=g[i][j];
		}
	}
	st[0][0]=1;
	dfs(0,0,g[0][0],1);
	if(ans!=100) cout<<ans<<endl;
	return 0;
}
int binarySearch(vector<int>& v, int l, int r, int x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (x == v[m])
            return m;
        else if (x < v[m])
            r = m - 1;
        else
            l = m + 1;
        /* code */
    }
    return 0;
}

int binarySearch6(vector<int> arr, int l, int r, int x)
{
    // left
    int result = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] == x)
        {
            result = m;
            r = m - 1;
        }
        else if (x < arr[m])
        {
            result = m;
            r = m - 1;
        }
        else
        {
            result = m + 1;
            l = m + 1;
        }
        /* code */
    }
    return result + 1;
}

int binarySearch4(vector<int> arr, int l, int r, int x)
{
    int result = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] == x)
        {
            result = m;
            l = m + 1;
            return result + 1;
        }
        else if (arr[m] < x)
        {
            l = m + 1;
            result = m;
        }
        else
        {
            r = m - 1;
            result = m - 1;
        }
    }
    return result + 1;
}
-----
bool check(ll k, string &s, ll x) {
     map<char, ll>m;
     ll n = s.length();
     for (ll i = 0; i < k; i++) m[s[i]]++;
     if (m.size() >= x) return true;
     for (ll i = k; i < n; i++) {
         m[s[i - k]]--;
        if (m[s[i - k]] == 0) m.erase(s[i - k]);
        m[s[i]]++;
         if (m.size() >= x) return true;
     }
    return false;
}
int main()
{
    string s;
        map<char,ll> av;
        cin>>s;
        for(char x: s)
        av[x]++;
        if(av.size()%2)
        cout<<"IGNORE HIM!"<<endl;
        else
        cout<<"CHAT WITH HER!"<<endl;
}
int main()
{
ll a,b=0,n,i;
       cin>>n;
       map<ll,ll> z;
       for(i=0;i<n;i++)
       {
                cin>>a;
                z[a]++;
                b=max(b,z[a]);
       }
       cout<<b<<" "<<z.size()<<endl;
}
int main()
{
ll n=6,x,i,f=0;
      map<ll,ll> mp;
      for(i=0;i<n;i++)
      {
                cin>>x;
                mp[x]++;
                f=max(f,mp[x]);
                
      }
      if((mp.size()==2 && f==4) || (mp.size()==1))
      cout<<"Elephant"<<endl;
      else if((mp.size()==3 && f==4) || (mp.size()==2 && f==5))
      cout<<"Bear"<<endl;
      else
      cout<<"Alien"<<endl; 
}
int main()
{
    ll i,n,x=0;
     map<string,ll> mp;
     string s;
     cin>>n;
     while(n--)
     {
        cin>>s;
        mp[s]++;
     }
     for(auto it : mp)
     {
           if(it.second>x)
           {
                x=it.second;
                s=it.first;
           }
     }
     cout<<s<<endl;
}
int main()
{
      ll n,m,i,j,a;
      map<ll,ll> mp;
      ll x=INT_MAX,y;
      y=x;
      a=y;
      cin>>n>>m;
      while(n--)
      {
                cin>>j;
                mp[j]++;
                x=min(x,j);
       }
       while(m--)
       {
                cin>>j;
                if(mp[j]!=0)
                {
                        a=min(a,j);
                }
                y=min(y,j);
        }
        cout<<min({a,x*10+y,y*10+x})<<endl;    
}
class segmentTree{
public:
	vector<int> a,c,lazy;
	segmentTree(int n)
	{
		//this->n=n;
		lazy.resize(4*(n+5),0);
		a.resize(4*(n+5));
		c.resize(n+5);
	}
	void bulid(int s=1,int e=n,int p=1)
	{
		if(s==e){
			a[p]=c[s];
			return ;
		}
		int m=(s+e)/2;
		bulid(s,m,p*2);
		bulid(m+1,e,p*2+1);
	}
	void change(int s,int e,int x,int ss=1,int ee=4*n,int p=1)
	{
		if(s<=ss&&ee<=e){
			a[ss]+=x*(ee-ss+1),lazy[p]+=x;
			return ;
		}
		int m = ss + ((ee - ss) >> 1);
		if (lazy[p] && ss != ee) {
			a[p * 2] += lazy[p] * (ee - ss + 1), a[p * 2 + 1] += lazy[p] * (ee - m);
			lazy[p * 2] += lazy[p], lazy[p * 2 + 1] += lazy[p]; 			lazy[p] = 0; 	
		}
		if (s <= m) change(s, e, x, ss, m, p * 2);
		if (e > m)  change(s, e, x, m + 1, ee, p * 2 + 1);
		a[p] = a[p * 2] + a[p * 2 + 1];
	}
	int getsum(int s,int e,int ss=1,int ee=4*n,int p=1)
	{
		if (ss <= s && ee <= e) return a[p];
		int m = ss + ((ee - ss) >> 1);
		if (lazy[p]) {
			a[p * 2] += lazy[p] * (ee - ss + 1), a[p * 2 + 1] += lazy[p] * (ee - m);
			lazy[p * 2] += lazy[p], a[p * 2 + 1] += lazy[p]; 			lazy[p] = 0;     
		}
		int sum = 0;
		if (s <= m) sum = getsum(s, e, ss, m, p * 2);
		if (e > m) sum += getsum(s, e, m + 1, ee, p * 2 + 1);
		return sum;
	}
};
class trie
{
public:
	trie* c[128];
	int val;
	trie()
	{
		for(int i=0;i<128;i++)c[i]=NULL;
		val=0;
	}
	int find(string s)
	{
		trie *p=this;
		for(int i=0;i<s.size();i++)
		{
			if(!p->c[s[i]])
				return 0;
			p=p->c[s[i]];
		}
		return p->val;
	}
	void insert(string s)
	{
		trie *p=this;
		for(int i=0;i<s.size();i++)
		{
			if(!p->c[s[i]])
				p->c[s[i]]=new trie();
			p=p->c[s[i]];
		}
		p->val++;
	}
};
