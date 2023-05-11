//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        string ans="";
        for(int i=0;i<str.size();i++){
            if(str[i]=='a'){
                if(str[i+1]!='c'){
                    ans=ans+str[i];
                }
                else{
                    i++;
                }
            }
            else if(str[i]!='b') {
                
                ans+=str[i];
                
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends
