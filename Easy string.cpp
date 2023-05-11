//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string s){
    
       int c =1;
     int n = s.size();
     string ans="";
     for(int i=0;i<n;i++)
     {
         if(tolower(s[i]) == tolower(s[i+1]))
           c++;
         else{
             ans+=to_string(c);
             ans+=tolower(s[i]);
             c=1;
         }
     }
     return ans;
}

