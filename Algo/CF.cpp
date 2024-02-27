#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/977/D/
typedef long long ll;

int n;
bool flag = false;
map<ll, vector<ll>> adj;
map<ll, bool> visited;
vector<ll> ans;

void bfs(ll src)
{
    queue<ll> q;
    q.push(src);
    visited[src] = true;
    ans.push_back(src);
    while (!q.empty())
    {
        if (ans.size() == n)
        {
            flag = true;
            return;
        }
        ll parent = q.front();
        q.pop();
        for (auto child : adj[parent])
        {
            if (parent * 2 == child && !visited[child])
            {
                q.push(child);
                visited[child] = true;
                ans.push_back(child);
            }
            else if ((parent % 3 == 0) && (parent / 3 == child) && !visited[child])
            {
                q.push(child);
                visited[child] = true;
                ans.push_back(child);
            }
        }
    }
}

void init()
{
    ans.clear();
    visited.clear();
}

int main()
{
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                adj[v[i]].push_back(v[j]);
            }
        }
    }

    for (auto val : adj)
    {
        cout << val.first << "->";
        for (auto i : val.second)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    for (auto val : adj)
    {
        bfs(val.first);
        if (flag)
            break;
        init();
    }

    for (auto val : ans)
        cout << val << " ";

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //https://codeforces.com/problemset/problem/1823/B
    int n, k;
    cin >> n >> k;
    map<int, int>mp;
    for(int i=1; i<=n; i++)
    {
        int in;
        cin >> in;
        map[in] = i;
    }
    int cnt = 0;
    for(auto val:mp)
    {
        int cur, currect;
        cur = val.second;
        currect = val.first;
        if(abs(cur - currect) % k! =0)
            cnt++;
    }
    if(cnt==0)
        cout << 0;
    else if(cnt==2)
        cout << 1;
    else 
        cout << -1;
}
#include<bits/stdc++.h>
using namespace std;
int n,m,w;
bool done[100009];
vector<int>v[100009];
void dfs(int node)
{
    done[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            w++;
            dfs(i);
        }
    }
    cout<<w;
}
#include<bits/stdc++.h>
using namespace std;
int n,m,w;
int done[100009];
vector<int>v[100009];
void dfs(int node)
{
    done[node]=w;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin>>q;
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            w++;
             dfs(i);
        }
    }

    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        if(done[a]==done[b])
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int n,m,sum;
bool done[100009];
vector<int>v[100009];
void dfs(int node)
{
    done[node]=1;
    sum+=v[node].size();
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            dfs(i);
            cout<<sum/2<<endl;
            sum=0;

        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int x,n,m,ww,w;
bool done[100009];
vector<int>v[100009];
void dfs(int node)
{
    if(!done[node])w++;
    done[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m>>x;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            dfs(i);
            if(w>=x)
            {
                ww++;
            }
            w=0;
        }
    }
    cout<<ww;
}
#include<bits/stdc++.h>
using namespace std;
int sum,n,m,mx,arr[100009];
bool done[100009];
vector<int>v[1000009];
void dfs(int node)
{
    if(!done[node])
    {
        mx=max(arr[node],mx);
    }
    done[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            dfs(i);
            sum+=mx;
            mx=0;
        }
    }
    cout<<sum;
}
