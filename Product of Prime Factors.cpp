//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:

    bool prime(int n){
       if(n<=1){
           return false;
           
       }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    
    long long int primeProduct(int N){
           int prod=1;
           
           for(int i=2;i<=N;i++){
               
               if(N%i==0){
                   if(prime(i)){
                      prod=prod*i;    
                   }
                   
               }
           }
           
           return prod;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.primeProduct(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
