class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        //prefix sum ya target sum jaisa quesiton lag raha h 
        
        unordered_map<int,int>mp;
        for(int target=0;target<arr.size();target++){
           int targetsum=arr[target]*arr[target];
            
            for(int i=0;i<arr.size();i++){
                //NOW THIS IS LIKE PREFIX SUM THE ERROR THAT I WAS DOING IS PUTTING THIS i==target condition
              //  in the for loop itself what i mean is for(int i=0;i<arr.size()&&i==target;i++)
              //so in this case wwhenever this condition becomes true then i insted of skipping this particular caser
            //   and checking for next cases , the loop just breaks without checking
                if(i==target)continue;
                if(mp.find(targetsum-(arr[i]*arr[i]))!=mp.end()){
                    return true;
                }
                mp[arr[i]*arr[i]]++;
            }
            
        }
       return false; 
    }
};