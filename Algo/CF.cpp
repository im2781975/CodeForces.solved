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
