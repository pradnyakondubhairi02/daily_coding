//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	   long long int cnt=0;
	   
	    sort(arr,arr+n);
	    
	    for(int i=0;i<n;i++){
	        int j=i+1;
	        int k=n-1;
	        
	        while(j<k){
	            long long sum1=arr[i]+arr[j]+arr[k];
	            
	            if(sum1<sum){
	                cnt=cnt+k-j;
	                j++;
	            }
	            else{
	                k--;
	            }
	        }
	    }
	   return cnt;
	}
		 

};

//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
