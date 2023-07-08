//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        string temp="";

        int num=0;

        for(int i=0;i<str.size();i++){

            if(str[i]<65){

                int t=str[i]-48;

                num=num+t;

            }

            else

            temp.push_back(str[i]);

        }

        sort(temp.begin(),temp.end());

        if(num!=0)

        temp=temp+to_string(num);

        return temp;
       
       
        
       
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
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends
