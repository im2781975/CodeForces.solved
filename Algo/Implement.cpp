class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[0]<target)
            {
            	if(nums[0]<target&&target<nums[mid])
				r=mid-1;
				else l=mid+1;
            }
            else
            {
            	if(nums[mid]>target&&taregt<=nums[n-1])
            		l=mid+1;
            	else r=mid-1;
            }
        }
        return -1;
    }
};
#include<iostream>
using namespace std;

struct edge {
    int x, y;
} edges[110];

int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> edges[i].x >> edges[i].y;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int max_y = 0, max_x = 0;
        for (int j = 0; j < n; j++) {
            if (edges[i].x == edges[j].x) 
                max_y = max(max_y, edges[j].y);
            if (edges[i].y == edges[j].y) 
                max_x = max(max_x, edges[j].x);
        }
        ans = max(ans, (max_x - edges[i].x) * (max_y - edges[i].y));
    }
    cout << ans;
    return 0;
}
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
const int N = 1e5+10;

struct edge{
	int ts,id;
	bool operator < (const edge x) const {
		return ts<x.ts;
	} 
}edges[N];

int n,m,ti;
map<int,int> m;
int main()
{
	cin>>n>>m>>ti;
	
	for(int i=0;i<m;i++)
		cin>>edges[i].ts>>edges[i].id;	
	sort(edges,edges+m);
	
	
	
	return 0;
}
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring> 
#include<iomanip>
using namespace std;

struct Stu{
	char name[1000];
	int sn;
	int st;
}stu[1000];

int n,m;
int cmp(Stu x,Stu y)
{
	if(x.sn==y.sn) 
	{
		return x.st<y.st;
	}
	return x.sn>y.sn;
}
int main()
{
	cin>>n>>m;
	int p=0;
	while(cin>>stu[p].name)
	{
		for(int i=0;i<n;i++)
		{
			char ch;
			int k,l;
			cin>>k;
			if(k<=0) continue;
			stu[p].sn++;
			stu[p].st+=k;
			if(getchar()=='(')
			{
				cin>>l;
				cin>>ch;
				stu[p].st+=l*m;
			}
		}
		p++;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<p;i++)
	{
		cout<<left<<setw(10)<<stu[i].name<<" "<<right<<setw(2)<<stu[i].sn<<right<<" "<<setw(4)<<stu[i].st<<endl;
	}
	return 0;
} 
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

#define ll long long
#define vll vector<ll>
#define ff first
#define ss second

typedef pair<ll, ll> pi;

vector<ll> dijkstra(ll V, vector<vector<pair<ll, ll>>> adj, ll s, vll &par) {
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push({0, s});
    vector<ll> dist(V, LLONG_MAX);
    par.assign(V, -1);
    dist[s] = 0;

    while (!pq.empty()) {
        ll dis = pq.top().first;
        ll ind = pq.top().second;
        pq.pop();

        for (auto it : adj[ind]) {
            if (dist[it.ff] > dis + it.ss) {
                par[it.ff] = ind;
                dist[it.ff] = dis + it.ss;
                pq.push({dist[it.ff], it.ff});
            }
        }
    }

    return dist;
}

int main() {
    // Example usage
    ll V = 5;
    vector<vector<pair<ll, ll>>> adj(V);

    // Populate the adjacency list with edges and weights

    ll sourceNode = 0;
    vll parent(V, -1);

    vector<ll> distances = dijkstra(V, adj, sourceNode, parent);

    // Process distances or parent array as needed

    return 0;
}
