class Solution {
  public:
    int countSubstr(string& s, int k) {
       //this question is actually very beautiful 
       //we cant directly apply the sliding window but looking at the time complexity 
        //one can onlty think of sliding window or prefix sum bioth cannot be really applied 
        
        
        //now i have seen the solution and its really clear now
        //hum atlesast k distinct ya atmost k distinct subtstrings k count ka question solve
        //krte h sliding window ki classical problem h maine bhi  abhi tk kia nahi tha 
        //abhi hi pata chala 
        
        //but answer will be = no of substirng with ( atleast k - atleast k+1)elements
        
        ///                                        (atmost k- atmost k-1 elemtns)
       
    //not my solution but easy to undersatnd   
       int i =0;
       int j=0;
       int n = s.length();
       int dc=0;
       unordered_map<char,int>mp;
       int ans1=0;
       while(j<n){
           mp[s[j]]++;
           if(mp[s[j]]==1){//mtlb 1st time aaya h 
               dc++;
           }
           while(dc==k){
               ans1+=(n-j);
               mp[s[i]]--;
               if(mp[s[i]]==0)dc--;
               i++;
               
           }
           j++;
       }
        
       int p =0;
       int q=0;
       
        dc=0;
       unordered_map<char,int>mp1;
       int ans2=0;
       while(q<n){
           mp1[s[q]]++;
           if(mp1[s[q]]==1){//mtlb 1st time aaya h 
               dc++;
           }
           while(dc==k+1){
               ans2+=(n-q);
               mp1[s[p]]--;
               if(mp1[s[p]]==0)dc--;
               p++;
               
           }
           q++;
       }
        
       return ans1-ans2 ; 
    }
};