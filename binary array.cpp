class Solution {
  public:
    vector<int> binaryArray(int n, vector<int> &arr) {
        
        vector<int>v;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        
        for(int i=0;i<n;i++){
           sum=sum-arr[i];
           
           if(sum%2==0){
               v.push_back(1);
           }
           else{
               v.push_back(0);
           }
            sum=sum+arr[i];
        }
        
        return v;
    }
};
