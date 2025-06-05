class Solution {
  public:
    int solve(vector<vector<int>> &grid, int i, int j ,vector<vector<int>>&dp){
        //base cases 
        if(i==grid.size()-1&&j==grid[0].size()-1&&grid[i][j]==0)return 1;
        if(i>=grid.size()||j>=grid[0].size())return 0;
        
        
        
        //for this case  if i am at index i , j 
        if(grid[i][j]==1)return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        return dp[i][j]= solve(grid,i+1,j,dp)+solve(grid,i,j+1,dp);
        
          
    }
    int uniquePaths(vector<vector<int>> &grid) {
      int n = grid.size();
      int m = grid[0].size();
      
      vector<vector<int>>dp(n+2,vector<int>(m+2,-1));
        int ans =0;
        return solve(grid,0,0,dp);
        
     //now as i can see that 2 states are changing in this question 
     //also there can be repeating subproblems so we can use dp here
     
     
    }
};