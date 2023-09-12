//Problem : https://codeforces.com/contest/1829/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0,max=0;
		cin>>n;
		int ara[n];
		for(int i=0; i<n; i++){
			cin>>ara[i];
		}

		for(int i=0; i<n; i++){
			if(ara[i]==0){
				count++;
				if(max<=count)
				 	max=count;
			}
			
			else{
				 count=0;
			}
		}
		cout<<max<<endl;
	}
}