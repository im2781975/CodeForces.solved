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
