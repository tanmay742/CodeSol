class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        //mujhe queue vala method to pata tha maine sbse phle vo hi sochat tha but then i thought 
        //ki time complexity me kya hi jyada fark pdega to then i start thinkingh about some 
        //other approaches but thenques ki expected TC dekh k lag rhar h queue ka hi question h 
        
        priority_queue<int>pq;
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                
                pq.push(mat[i][j]);
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        
        return pq.top();
            
    }
};