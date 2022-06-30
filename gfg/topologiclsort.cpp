// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{

	public:
	void dfs(int node, vector<int>&ans, vector<int>&vis, vector<int>adj[]){
	    vis[node]=1;
	    for(auto&it: adj[node]){
	        if(!vis[it]){
	            dfs(it, ans, vis, adj);
	        }
	    }
	      ans.push_back(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>vis(V, 0);
	    stack<int>stk;
	    vector<int>ans;
	    
	    for(int i=0; i<V; i++){
	        if(!vis[i]){
	            dfs(i, ans, vis, adj);
	        }
	    }
	    
	    reverse(ans.begin(), ans.end());
	    return ans;
	}
};


