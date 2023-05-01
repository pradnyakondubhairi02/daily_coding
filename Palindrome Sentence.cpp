//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    int i=0;
	    int j=s.size()-1;
	    
	   while(i<j){
	       
	       while(i<j && !isalpha(s[i])) {
	           i++;
	       }
	       while(i<j && !isalpha(s[j])) {
	           j--;
	       }
	       
	       if(isalpha(s[i]) && isalpha(s[j])){
	           if(s[i]!=s[j]){
	               return 0;
	           }
	       }
	       i++;
	       j--;
	   }  
	   return 1;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends
