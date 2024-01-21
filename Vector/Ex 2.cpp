 typedef pair<ll, ll> pi;
 vector <ll> dijkstra(ll V, vector<vector<pair<ll, ll>>> adj, ll s, vll &par)
{
     priority_queue<pi, vector<pi>, greater<pi> > pq;
     pq.push({0, s});
     vector<ll>dist(V, LLONG_MAX);
      vll par(V,-1);
     dist[s] = 0;
     while (!pq.empty()) {
         ll dis = pq.top().first;
         ll ind = pq.top().second;
         pq.pop();
        for (auto it : adj[ind]) {
            if (dist[it.ff] > dis + it.ss) {
                 par[it.ff] = ind ;
                 dist[it.ff] = dis + it.ss;
                 pq.push({dist[it.ff], it.ff});
             }
        }
     }
     return dist;
 }
-----
 ll help(vll &v, ll cnt) {
     ll sum = 0;
     sort(all(v));
     reverse(all(v));
     for (ll i = 0; i < cnt; i++) {
        sum += v[i];
     }
    return sum;
}
----
 ll helper(ll i, ll j, vector<vector<char>>&v, vector<vector<ll>>&vis) {
     ll cnt = 0;
     for (; cnt < v.size() - i; cnt++) {
         for (ll k = j - cnt; k <= j + cnt; k++) {
             if (k >= v[0].size() || k < 0 || v[i + cnt][k] != '*') return cnt;
        }
 
    }
     return cnt ;
}
ll scndmin(vll &tmp) {
     ll ind = -1, mn = LLONG_MAX;
     for (ll i = 0; i < tmp.size(); i++) {
         if (tmp[i] < mn) {
             ind = i;
            mn = tmp[i];
         }
     }
    ind = -1, mn = LLONG_MAX;
     for (ll i = 0; i < tmp.size(); i++) {
         if (i == ind) continue;
         if (tmp[i] < mn) {
             ind = i;
             mn = tmp[i];
         }
     }
     return mn;
}
