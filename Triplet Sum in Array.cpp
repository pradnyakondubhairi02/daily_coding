//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        int sum=0;
        
        map<int,int>mp;
        
        
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum=arr[i]+arr[j];
                
                if(mp.find(X-sum) != mp.end()){
                    return true;
                }
                
                
            }
            mp[arr[i]]++;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends
