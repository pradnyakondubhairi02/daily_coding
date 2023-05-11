//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
      unordered_map<char,int>mp;
      int ans=0;
      
      for(int i=0;i<s.size();i++){
          if(i==0 || mp[s[i]]==0){
              mp[s[i]]=i;
          }
          else{
              int sz=mp.size();
              ans=max(ans,sz);
              i=mp[s[i]];
              mp.clear();
          }
      }
      
      int sz=mp.size();
      ans=max(ans,sz);
      return ans;
}
