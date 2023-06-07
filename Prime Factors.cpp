//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	bool isPrime(int n){
	    if(n<1){
	        return false;
	        
	    }
	    
	    for(int i=2;i<=sqrt(n);i++){
	        if(n%i==0){
	            return false;
	        }
	    }
	    return true;
	}
	
	vector<int>AllPrimeFactors(int N) {
	     vector<int>v;
	
	      for(int i=2;i<=N;i++){
	          if(N%i==0){
	              if(isPrime(i)){
	                  v.push_back(i);
	              }
	          }
	      }     
	     return v;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
