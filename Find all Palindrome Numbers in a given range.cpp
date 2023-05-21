#include<bits/stdc++.h>
using namespace std;

bool isPal(int n){
	int temp=n;
      int rev=0;
     while(n!=0){
     	int rem=n%10;
     	rev=rev*10+rem;
     	n/=10;
	 }
	 
	 if(temp==rev){
	 	return true;
	 }
	 else
	 return false;
}

int main(){

    int min,max;
    cin>>min>>max;

      for(int i=min;i<max;i++){
      	if(isPal(i)){
      		cout<<i<<" ";
		  }
	  }
      
}
