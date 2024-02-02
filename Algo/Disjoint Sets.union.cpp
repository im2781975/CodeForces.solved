#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5;
int parent[maxn], rank_[maxn];
int findParent(int node)
{
    if(node==parent[node])
        return node;
    int x=findParent(parent[node]);
    parent[node]=x;
    return parent[node];
}
void union_(int a, int b)
{
    a=findParent(a);
    b=findParent(b);
    if(rank_[a] < rank_[b])
        parent[a] = b;
    else if(rank_[b] < rank_[a])
        parent[b] = a;
    else
    {
        parent[b]=a;
        rank_[a]++;
    }
}
int main()
{
    for(int i=0; i<maxn; i++)
        parent[i]=i;
    int n, e;
    cin >> n >> e;
    for(int i=1; i<=e; i++)
    {
        string query;
        cin >> query;
        int u, v;
        cin >> u >> v;
        if(query=="union")
            union_(u, v);
        else
        {
            if(findParent(v)==findParent(u))
                cout << "Yes";
            else
                cout << "No";
        }
    }
    for(int i=1; i<=n; i++)
        cout << rank[i] << " ";
    cout << "\n";
    for(int i=1; i<=n; i++)
        cout << parent[i] << " ";
}
