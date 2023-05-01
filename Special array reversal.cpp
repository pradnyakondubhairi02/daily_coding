//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string s)
    { 
        
        int i=0;
        int j=s.size();
        
        while(i<j){
            while(i<j && !isalpha(s[i]) ){
                i++;
            }
            while(!isalpha(s[j])){
                j--;
            }
            
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i],s[j]);
            }
            i++;
            j--;
        }
        
        return s;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends
