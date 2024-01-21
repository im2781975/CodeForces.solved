-----
pair<int,int> dfscount(int node,vector<vector<int> > adj,int visited[]){
     visited[node]=1;
     int ve=1;
     int ed=0;
     for(int i=0;i<adj[node].size();i++){
         int child=adj[node][i];
         ed++;
         if(!visited[child]){
             pair<int,int> p=dfscount(child,adj,visited);
             ve=ve+p.first;
             ed=ed+p.second;
         }
     }
     return make_pair(ve,ed);
}

int dfschild(int node,vector<vector<int> > &adj,int visited[]){
    visited[node]=1;
    int sum=0;
    for(int i=0;i<adj[node].size();i++){
        int child=adj[node][i];
        if(!visited[child]){
            int r=dfschild(child,adj,visited);
            sum+=r+1;
        }
    }
    return sum;
}
ll dfs(int node,vector<vector<int> > &adj,int visited[],int parent){
     int count=0;
     for(int i=0;i<adj[node].size();i++){
         int child=adj[node][i];
         if(child==parent){
             continue;
         }
         if(visited[child]==0){
             visited[child]=1;
             count+=dfs(child,adj,visited,node);
         }else{
             count++;
        }
     }
     return count;
 }
void dfs(int node,vector<vector<int> > &adj,int visited[],int len[],int in[]){
     for(int i=0;i<adj[node].size();i++){
         int child=adj[node][i];
         len[child]=maxi(len[child],len[node]+1);
         if(visited[child]==0){
             visited[child]=1;
             dfs(child,adj,visited,len,in);
         }
        
     }
}
 int dfs(int node,vector<vector<int> > &adj,int visited[],int parent,int *sum){
     *sum=*sum+1;
     int count=0;
     int counter=0;
     for(int i=0;i<adj[node].size();i++){
        
                 if(adj[node][i]==node){
                     count++;
             continue;
         }
         int child=adj[node][i];
         if(visited[child]==0){
             visited[child]=1;
             int a=dfs(child,adj,visited,node,sum);
            count+=a+1;
         }else{
             if(counter==1){
                 count++;
             }else{
                 if(child!=parent){
                     count++;
                }else{
                     counter=1;
                 }
             }
         }
     }
     return count;
}
int dfs(int node,vector<vector<int> > &adj,int visited[],int dp[]){
    int count=0;
    for(int i=0;i<adj[node].size();i++){
        int child=adj[node][i];
        if(visited[child]==0){
            visited[child]=1;
            int a=dfs(child,adj,visited,dp);
            count=max(count,a+1);
        }else{
            count=max(count,dp[child]+1);
        }
    }
    dp[node]=count;
    return count;
}
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
