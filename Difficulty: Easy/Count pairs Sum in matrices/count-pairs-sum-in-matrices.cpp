class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
       //earlier mere dimag me n2log(n2) ki approach aayi thi ki matrix k hr elemt
       //ko lo and seconnd matrix pr binary search laga do
       
       //bilkul brute approach to ye h ki ek matix k hr element ko doosre matrix me find kro to 
       //basically n4 ki complexity h 
       
       //but jab maine expected commplexity dekhi to ques target sum jaisa h 
       //to hum basically vaisa hi logic use kar skte h isme 
    //   bas loop breaking conditoins kch modify ho jaygi or ques n2 me solve ho jayga
    
    //sochte sochte ek approach or aagyi but usme auxillary space use 
    // hogi basically  hum matrix ki jgh 2 vectors me store kr lenge then un vectors ko process 
    //krenege  us se bhi n2 me ho jayga n2 se vector formation then n me target sum to total n2+n
  
    
    //so now ab 1D vector hota to simple first and last index pr point ktk while(s<e) vali cond 
    //lagate  but matrix me kaise kre to simple h kyuki vector 2D h to 2 pointers se kisi bhi 
    //index ko point krenge eassyyy...
    
        int ans=0;//it will store the count value
        int n = mat1.size();//as mat is n*n
        
        //now ek pointer frst mat k first elemnt pr and second pointer doosri matrix k end element pr
        int frow=0;
        int fcol=0;
        int srow=n-1;
        int scol=n-1;
        while(frow<n&&fcol<n&&srow>=0&&scol>=0){
            int sum =mat1[frow][fcol]+mat2[srow][scol];
            if(sum==x){
                ans++;
                if(scol==0){
                    srow--;
                    scol=n-1;
                }
                else scol--;
                
                //this is the way of incrementing the pointer in case of 2d matrix note dont confuse
                //the pointer is one only its just represented by 2 variables fcol frow
                 if(fcol==n-1){
                    frow++;
                    fcol=0;
                }
                else fcol++;
            }
            else if(sum>x){
                if(scol==0){
                    srow--;
                    scol=n-1;
                }
                else scol--;
            }
            else{
                if(fcol==n-1){
                    frow++;
                    fcol=0;
                }
                else fcol++;
            }
            
        }
    
       return ans; 
    }
};