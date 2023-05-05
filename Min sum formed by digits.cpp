//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        
        // priority_queue<long long , vector<long long > ,greater< long long> > pq;
        
        // long long n1=0;
        // long long n2=0;
        
        // for(int i=0;i<n;i++){
        //     pq.push(arr[i]);
        // }
        
        // for(int i=0;i<n;i=i+2){
        //     n1=pq.top()*10+
        // }
        
        sort(arr,arr+n);
        
        long long int n1=0;
        long long int n2=0;
        
        for(int i=0;i<n;i++){
            if(i%2==0){
                n1=n1*10+arr[i];
            }
            else{
                n2=n2*10+arr[i];
            }
        }
        
        long long ans=n1+n2;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
