//{ Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
// } Driver Code Ends


void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	if(s.size()==n){
	    return 1;
	}
	return 0;
}

bool isEmpty(stack<int>& s){
	if(s.size()==0){
	    return 1;
	}
	return 0;
}

int pop(stack<int>& s){
    int a=s.top();
	s.pop();
	return a;
}

int getMin(stack<int>& s){
	int n=s.size();
	int a[n];
	int i=0;
	
	while(!s.empty()){
	    a[i]=s.top();
	    i++;
	    s.pop();
	}
	
	int ans=a[0];
	for(int i=1;i<n;i++){
	    ans=min(ans,a[i]);
	}
	
	return ans;
}
