// Problem Link : https://codeforces.com/problemset/problem/1352/C

// This Problem is important;

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long x = k/(n-1);
		if((x+k)%n==0)
			cout<<x+k-1<<endl;
		else
			cout<<x+k<<endl;
		}
}