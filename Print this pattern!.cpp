//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void printPattern(int n)
    {
       for(int i=1;i<=(2*n)-1;i++){
            for(int j=1;j<=(2*n)-1;j++){
                cout<<max(abs(n-i),abs(n-j))+1;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        
        Solution ob;
        ob.printPattern(N);
        
    }
    return 0;
}
// } Driver Code Ends
