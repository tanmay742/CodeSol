class Solution {
  public:
     void longestPrefixSuffix(string s, string pat,vector<int>&ans) {
       //i am doing this after learning the concept of KMP algorithm 
       //it is basically kmp algorithm only one of the complex dsa problem h khudse derive 
       //nhi kr skte agar peh;e nahi dekha h to ek baar smjh aa gyi to code karna aasan hi h 

  
       vector<int>lps(s.length(),0);
       int suffix=1;
       int prefix=0;
       while(suffix<lps.size()){
           
          
           if(s[prefix]==s[suffix]){
               lps[suffix]=prefix+1;
                if(lps[suffix]==pat.length()){
                        ans.push_back(suffix-pat.length()-pat.length());
                 }
              prefix++;
               suffix++;
           }
           else{
               if(prefix==0){
                   lps[suffix]=0;
                  suffix++;
                   
               }
               else{
                   prefix=lps[prefix-1];
               }
           }
           
           
       }
      
    }
    vector<int> search(string& pat, string& txt) {
       //i didnte get the initutionmost of the articles say its one ogf the most complex 
       //algorithm out there 
       //but after spending 1 day and countless youtube videos I get the idea 
       //also i am sharing some best youtube viodeos to refer for further revisoon of the concept 
       //so that i didnt loose the good resources 
       //https://youtu.be/__Cu92rei1s?si=WhV7t_u72Co1m0iW ----> pepcoding subhesh sir
       //https://youtu.be/zYwWiEgwGso?si=PVjhrUWt_bS6DiIA --->aditya verma
       //https://youtu.be/sODA1BzFvsE?si=KCPnajTXHT0gOnYK  ---->coder army
       //-------------the above were best resources and still in future if i am not able to 
       //get then just give time to yourself as the algo is complex will surely come :) 
       //tu phodega dont get demotivated anytime ....
       //https://youtu.be/NbMN7r7VN2M?si=cNLqTmfKdf4V6tWh  -->not so good but fine 
       //https://youtu.be/ynv7bbcSLKE?si=iOkJCpxv6oTEmYTq
    //   https://youtu.be/GTJr8OvyEVQ?si=YonZ4KDpQbh-bUCT
       
       string s=pat+"#"+txt;
      
       vector<int>ans;
       longestPrefixSuffix(s,pat,ans);
       
       return ans; 
    }
};