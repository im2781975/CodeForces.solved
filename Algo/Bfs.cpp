void bfs(int a,vector<vector<int> > &adj,int visited[],int dist[]){
	queue<int> q;
	q.push(a);
	visited[a]=1;
	while(!q.empty()){
	    int node=q.front();
	    q.pop();
	    for(int i=0;i<adj[node].size();i++){
	        int child=adj[node][i];
	        if(!visited[child]){
	            visited[child]=1;
	            dist[child]=dist[node]+1;
	            q.push(child);
	        }
	    }
	}
}
