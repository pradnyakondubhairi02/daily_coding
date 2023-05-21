#include<bits/stdc++.h>
using namespace std;


int main(){

     int n;
     cin>>n;
     
     int ans=0;
     int temp=n;
     while(n!=0){
     	int rem=n%10;
     	ans+=pow(rem,3);
     	n=n/10;
	 }
	 
	 if(temp==ans){
	 	cout<<"yes";
	 }
	 else{
	 	cout<<"no";
	 }
}
