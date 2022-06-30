  bool dfs(int i, int V, vector<int>adj[], vector<int>&vis, vector<int>&dfsvis){
      vis[i]=1;
      dfsvis[i]=1;
      for(auto&it: adj[i]){
          if(!vis[it]){
              if(dfs(it, V, adj, vis, dfsvis)==true) return true;
          }else if(dfsvis[it]==1){
              return true;
          }
      }
      dfsvis[i]=0;
      return false;
  }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>vis(V, 0);
        vector<int>dfsvis(V,0);
        vis[0]=dfsvis[0]=1;
        for(int i=1; i<V; i++){
            if(!vis[i]){
                if(dfs(i, V, adj, vis, dfsvis)==true) return true;
            }
        }
        return false;
    }
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int>adj[A+1];
    for(int i=0; i<B.size(); i++){
        adj[B[i][0]].push_back(B[i][1]);
    }
    return isCyclic(A+1, adj);
}
