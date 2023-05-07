//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        
        string temp="";
        string ans="";
        
        for(int i=S.size()-1;i>=0;i--){
            if(S[i]=='.'){
              reverse(temp.begin(),temp.end());
                ans+=temp;
                ans.push_back('.');
                temp="";
            }
            else{
                temp.push_back(S[i]);
            }
           
            
            
        }
         reverse(temp.begin(),temp.end());
            ans+=temp;
        return ans;
        
        
        // string str = "";
        // int n = S.length();
        // int end = n;
        // for (int i = n - 1; i >= 0; i--){
        //     if (S[i] == '.'){
        //         str += S.substr(i + 1, end - i - 1);
        //         str += ".";
        //         end = i;
        //     }
        //     if (i == 0)
        //         str += S.substr(i, end - i);
        // }
        // return str;
        
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
