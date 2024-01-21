void dfsdp(int node,vector<vector< int> > &adj,int visited[],int* x){
    if(*x>=1000000){
        return;
    }
    *x=*x+1;
    visited[node]=1;
    for(int i=0;i<adj[node].size();i++){
        int child=adj[node][i];
        if(!visited[child]){
            dfsdp(child,adj,visited,x);
        }
        
    }
    visited[node]=0;
    return;
}
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
int recur(int node,int visited[],vector<vector<int> > m,int color[]){
    visited[node]=1;
    int coloring;
    if(color[node]==1){
        coloring=0;
    }else{
        coloring=1;
    }
    int counter=0;
    for(int i=0;i<m[node].size();i++){
        int child=m[node][i];
        if(node==child){
            counter=1;
            continue;
        }
        if(!visited[child]){
            color[child]=coloring;
            int ans=recur(child,visited,m,color);
            if(ans==1){
                counter=1;
            }
        }else{
            if(color[child]!=coloring){
                counter=1;
            }
        }
    }
    // cout<<node<<" "<<counter<<endl;
    return counter;
}
