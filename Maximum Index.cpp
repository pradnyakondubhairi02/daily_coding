//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int Arr[], int n) {
        int maxi=0;
       for(int i=0;i<n;i++)
       {
           int j=n-1;
          while(j!=i)
           {
               if( Arr[i] <= Arr[j]){
               maxi=max(maxi,j-i);
               break;
               }
               else
               j--;
           }
       }
       return maxi;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
