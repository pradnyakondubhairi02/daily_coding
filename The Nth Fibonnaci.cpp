//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int fib(int N){
       int a=0;
       int b=1;
       long long int c;
       
       
       if(N==0 || N==1){
           return N;
       }
       for(int i=1;i<N;i++){
           c=(a+b)%10;
           
           a=b;
           b=c;
       }
       
       return c%10;
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
        cout << ob.fib(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
