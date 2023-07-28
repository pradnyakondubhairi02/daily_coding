class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     int target=0;
     vector<vector<int>>output;
     set<vector<int>>st;

     sort(nums.begin(),nums.end());

     for(int i=0;i<nums.size();i++){

         int j=i+1;
         int k=nums.size()-1;

         while(j<k){
             int sum=nums[i]+nums[j]+nums[k];
             if(sum==target){
                 st.insert({nums[i],nums[j],nums[k]});
                 j++;
                 k--;
             }
             else if(sum>target){
                 k--;
             }
             else{
                 j++;
             }
         }
     }

    for(auto it:st){
        output.push_back(it);
    }

    return output;
    }
};
