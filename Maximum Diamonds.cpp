//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int maxDiamonds(int A[], int N, int K) {
       
       
       priority_queue<int>pq;
       
       for(int i=0;i<N;i++){
           pq.push(A[i]);
       }
       int ans=0;
       int temp=0;
       
       for(int i=0;i<N;i++){
           if(pq.top()>=K){
               temp=pq.top();
               pq.pop();
               ans=ans+temp;
               pq.push(temp/2);
               
              
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends
