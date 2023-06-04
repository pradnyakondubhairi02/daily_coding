//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
          vector<int>ans;
           int firstOcc = -1,lastOcc = -1;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
               firstOcc = i;
                break;
            }
        }
        
        for(int i=n-1;i>=0;i--){
            if(arr[i]==x){
                lastOcc = i;
                break;
            }
        }
         ans.push_back(firstOcc);
        ans.push_back(lastOcc);
        
        if(ans[0] == -1) ans.pop_back();
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends
