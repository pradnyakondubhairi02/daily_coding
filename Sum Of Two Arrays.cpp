#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
		
	
	 vector<int>ans;
	 int sum=a[0];
	 
	 for(int i=1;i<n;i++){
	 	sum=sum*10+a[i];
	 }
	 
	
	 
	 int sum1=b[0];
	 
	 for(int i=1;i<m;i++){
	 	sum1=sum1*10+b[i];
	 }
	 
	 int total=sum+sum1;

        while(total!=0){
			int rem=total%10;
			total/=10;
			ans.push_back(rem);
		}

        reverse(ans.begin(),ans.end());
		return ans;
}
