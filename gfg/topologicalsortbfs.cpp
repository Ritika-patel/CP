// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // using bfs (kahs algo)
	    vector<int>vis(V, 0);
	    for(int i=0; i<V; i++){
	        for(auto&it: adj[i]){
	            vis[it]++;
	        }
	    }
	    
	    queue<int>q;
	    vector<int>ans;
	    for(int i=0; i<vis.size(); i++){
	        if(vis[i]==0) q.push(i);
	    }
	    
	    while(!q.empty()){
	        int node=q.front();
	        q.pop();
	        ans.push_back(node);
	        for(auto&it: adj[node]){
	            vis[it]--;
	            if(vis[it]==0) q.push(it);
	        }
	    }
	    return ans;
	}
};

