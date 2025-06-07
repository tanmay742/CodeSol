class Solution {
  public:
    int dfs( vector<vector<int>>&adj,int curr, int src, int dest, vector<int>&dp){
          
           
        //if the curr node is equal to the destination node 
        if(curr==dest){
            return 1;
        }
        if(dp[curr]!=-1)return dp[curr];
        int ans =0;
        for(auto i:adj[curr]){
           ans+= dfs(adj , i, src, dest,dp);
        }
        
        return dp[curr]=ans ;
        
    }
    int countPaths(vector<vector<int>>& edges, int v, int src, int dest) {
        //now the normal solution is causing tle beacause recursive solution 
        //can be lengthy so we can actually apply dp 
        //and actaully its given dag so acylcic also so no need of visited also
        // i will create adjacency list
        vector<vector<int>>adj(v);
        for(auto i : edges){
         adj[i[0]].push_back(i[1]);   //creating a dag adjacency list 
        }
      
        int ans=0;
        
        vector<int>dp(v,-1);
        
        return dfs(adj,src,src,dest,dp);
        
    }
};