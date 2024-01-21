ll dfsbipartite(ll node,vector<vector<ll> > &adj,ll visited[],ll color[]){
     cout<<node<<endl;
     for(int i=0;i<4;i++){
        cout<<color[i]<<" ";
     }
     cout<<endl;
    visited[node]=1;
    ll coloring;
    if(color[node]==1){
        coloring=2;
    }else{
        coloring=1;
    }
    ll sum=0;
    for(ll i=0;i<adj[node].size();i++){
        ll child=adj[node][i];
         cout<<node<<" "<<child<<endl;
         cout<<visited[child]<<" "<<color[node]<<" "<<color[child]<<endl;
        
        if(visited[child]==1){
            if(color[node]==color[child]){
                return 1;
            }
        }else{
             cout<<child<<endl;
            color[child]=coloring;
            sum+=dfsbipartite(child,adj,visited,color);
        }
    }
    return sum;
}
void dfstemp(ll node,vector<vector<ll> > &adj,ll visited[],ll color[],ll* white,ll* black,vector<ll> &ve){
    ve.push_back(node);
    visited[node]=1;
    ll coloring;
    if(color[node]==1){
        coloring=2;
    }else{
        coloring=1;
    }
    for(ll i=0;i<adj[node].size();i++){
        ll child=adj[node][i];
        if(!visited[child]){
            color[child]=coloring;
            if(coloring==1){
                *white=*white+1;
            }else{
                *black=*black+1;
            }
            dfstemp(child,adj,visited,color,white,black,ve);
        }
    }
    return;
}
