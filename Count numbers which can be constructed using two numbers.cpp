//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int getCount(int x, int y, int n) {
        
        map<int,int>mp;
        
        int mini=min(x,y);
        
         int cnt=0;
         mp[0]=1;
            
        for(int i=mini;i<=n;i++){
           if(mp.find(i-x) != mp.end()){
               mp[i]=1;
               cnt++;
           }
           else if(mp.find(i-y) != mp.end()){
               mp[i]=1;
               cnt++;
           }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,y,n;
        
        cin>>x>>y>>n;

        Solution ob;
        cout << ob.getCount(x,y,n) << endl;
    }
    return 0;
}
// } Driver Code Ends
