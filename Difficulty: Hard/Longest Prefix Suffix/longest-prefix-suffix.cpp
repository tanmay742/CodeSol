
// User function template for C++

class Solution {
  public:
    int longestPrefixSuffix(string &s) {
       //i am doing this after learning the concept of KMP algorithm 
       //it is basically kmp algorithm only one of the complex dsa problem h khudse derive 
       //nhi kr skte agar peh;e nahi dekha h to ek baar smjh aa gyi to code karna aasan hi h 
       // //https://youtu.be/__Cu92rei1s?si=WhV7t_u72Co1m0iW ----> pepcoding subhesh sir
       //https://youtu.be/zYwWiEgwGso?si=PVjhrUWt_bS6DiIA --->aditya verma
       //https://youtu.be/sODA1BzFvsE?si=KCPnajTXHT0gOnYK  ---->coder army
       
       vector<int>lps(s.length(),0);
       int suffix=1;
       int prefix=0;
       while(suffix<lps.size()){
           if(s[prefix]==s[suffix]){
               lps[suffix]=prefix+1;
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
       return lps[lps.size()-1];
    }
};