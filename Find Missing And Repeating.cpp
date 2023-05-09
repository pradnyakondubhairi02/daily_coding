//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
       
       map<int,int>mp;
       vector<int>v;
             for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
       
       for(auto it:mp){
           if(it.second>1){
              v.push_back(it.first);   
           }
       }
       
       for(int i=1;i<=n;i++){
           if(mp.find(i)==mp.end()){
               v.push_back(i);
           }
       }
       
       
       return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
