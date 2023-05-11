class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        set<int>s;
        map<int,int>mp;

        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){

            if(mp.find(nums2[i]) != mp.end()){
                s.insert(nums2[i]);
                // v.push_back(nums2[i]);
            }
        }

        for(auto it:s){
            v.push_back(it);
        }
        return v;
    }
};
