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
void bfsme(int x1,int y1,int x2,int y2,vector<vector<char> > &a,vector<vector<int> > &visited, vector<vector<char> > &path,queue<pair<int,int> > &q,int n,int m){
    if(q.empty()){
        return;
    }
    pair<int,int> p=q.front();
    q.pop();
    int x=p.first;
    int y=p.second;
    if(x>0){
        if(a[x-1][y]!='#' && visited[x-1][y]>visited[x][y]+1){
            visited[x-1][y]=visited[x][y]+1;
            path[x-1][y]='D';
            q.push(make_pair(x-1,y));
        }
    }
    if(x<n-1){
        if(a[x+1][y]!='#' && visited[x+1][y]>visited[x][y]+1){
            visited[x+1][y]=visited[x][y]+1;
            path[x+1][y]='U';
            q.push(make_pair(x+1,y));
        }
    }
    if(y>0){
        if(a[x][y-1]!='#' && visited[x][y-1]>visited[x][y]+1){
            visited[x][y-1]=visited[x][y]+1;
            path[x][y-1]='R';
            q.push(make_pair(x,y-1));
        }
    }
    if(y<m-1){
        if(a[x][y+1]!='#' && visited[x][y+1]>visited[x][y]+1){
            visited[x][y+1]=visited[x][y]+1;
            path[x][y+1]='L';
            q.push(make_pair(x,y+1));
        }
    }
    bfsme(x1,y1,x2,y2,a,visited,path,q,n,m);
}
