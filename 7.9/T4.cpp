/*
6
1 3 4 5 6 8
*/
/*
30
*/
#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int n,a[100001];
long long dp[100001],pre[100001],tot[100001];

int main(){
	int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
	if(n == 1) cout<<a[1]<<endl;

	if(n == 2) cout<<a[1]+a[2]+(a[1]*a[2])<<endl;

	if(n == 3) cout<<((a[1]+a[2]+a[3])+(a[1]+a[2]*a[3])+(a[1]*a[2]+a[3])+\
			          (a[1]*a[2]*a[3]))<<endl;

	if(n == 4) cout<<((a[1]+a[2]+a[3]+a[4]) + 
			 	 	  (a[1]+a[2]+a[3]*a[4]) + (a[1]+a[2]*a[3]+a[4]) + (a[1]*a[2]+a[3]+a[4]) + \
			 	 	  
				      (a[1]+a[2]*a[3]*a[4]) + (a[1]*a[2]+a[3]*a[4]) + (a[1]*a[2]*a[3]+a[4]) + \
				      
				      (a[1]*a[2]*a[3]*a[4]) )<<endl;\

	if(n == 5) cout<<((a[1]+a[2]+a[3]+a[4]+a[5]) + \
					  (a[1]+a[2]+a[3]+a[4]*a[5]) + (a[1]+a[2]+a[3]*a[4]+a[5]) + (a[1]+a[2]*a[3]+a[4]+a[5]) + (a[1]*a[2]+a[3]+a[4]+a[5]) + \
					  
			          (a[1]*a[2]*a[3]+a[4]+a[5]) + (a[1]*a[2]+a[3]*a[4]+a[5]) + (a[1]*a[2]+a[3]+a[4]*a[5]) + (a[1]+a[2]*a[3]*a[4]+a[5]) + \
			          (a[1]+a[2]*a[3]+a[4]*a[5]) + (a[1]+a[2]+a[3]*a[4]*a[5]) + \
			          
			          (a[1]*a[2]*a[3]*a[4]+a[5]) + (a[1]*a[2]*a[3]+a[4]*a[5]) + (a[1]*a[2]+a[3]*a[4]*a[5]) + (a[1]+a[2]*a[3]*a[4]*a[5]) + \
			          
			          (a[1]*a[2]*a[3]*a[4]*a[5]))<<endl;

	if(n == 6) cout<<((a[1]+a[2]+a[3]+a[4]+a[5]+a[6]) +
			          (a[1]*a[2]+a[3]+a[4]+a[5]+a[6]) + (a[1]+a[2]*a[3]+a[4]+a[5]+a[6]) + (a[1]+a[2]+a[3]*a[4]+a[5]+a[6]) +\
			          (a[1]+a[2]+a[3]+a[4]*a[5]+a[6]) + (a[1]+a[2]+a[3]+a[4]+a[5]*a[6]) + \          
			          
			          (a[1]*a[2]*a[3]+a[4]+a[5]+a[6]) + (a[1]*a[2]+a[3]*a[4]+a[5]+a[6]) + (a[1]*a[2]+a[3]+a[4]*a[5]+a[6]) +\
			          (a[1]*a[2]+a[3]+a[4]+a[5]*a[6]) + (a[1]+a[2]*a[3]*a[4]+a[5]+a[6]) + (a[1]+a[2]*a[3]+a[4]*a[5]+a[6]) +		 
			          (a[1]+a[2]*a[3]+a[4]+a[5]*a[6]) + (a[1]+a[2]+a[3]*a[4]*a[5]+a[6]) + (a[1]+a[2]+a[3]*a[4]+a[5]*a[6]) +
			          (a[1]+a[2]+a[3]+a[4]*a[5]*a[6]) + \   
			          
			          (a[1]*a[2]*a[3]*a[4]+a[5]+a[6]) + (a[1]*a[2]*a[3]+a[4]*a[5]+a[6]) + (a[1]*a[2]*a[3]+a[4]+a[5]*a[6]) +\
			          (a[1]*a[2]+a[3]*a[4]*a[5]+a[6]) + (a[1]*a[2]+a[3]*a[4]+a[5]*a[6]) + (a[1]*a[2]+a[3]+a[4]*a[5]*a[6]) +
			          (a[1]+a[2]*a[3]*a[4]*a[5]+a[6]) + (a[1]+a[2]*a[3]*a[4]+a[5]*a[6]) + (a[1]+a[2]*a[3]+a[4]*a[5]*a[6]) +\
			          (a[1]+a[2]+a[3]*a[4]*a[5]*a[6]) + \
			          
  			          (a[1]+a[2]*a[3]*a[4]*a[5]*a[6]) + (a[1]*a[2]+a[3]*a[4]*a[5]*a[6]) + (a[1]*a[2]*a[3]+a[4]*a[5]*a[6]) +\
  			          (a[1]*a[2]*a[3]*a[4]+a[5]*a[6]) + (a[1]*a[2]*a[3]*a[4]*a[5]+a[6]) + \
  			 
  			          (a[1]*a[2]*a[3]*a[4]*a[5]*a[6])) <<endl;

	if(n == 7) cout<< (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
	
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 

					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 

					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 
					  (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]) + 					  













}