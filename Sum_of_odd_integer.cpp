//Problem Link :  https://codeforces.com/contest/1327/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,root=0;
		cin>>n>>k;
		root = sqrt(n);
		if(k>root)
			cout<<"NO"<<endl;
		else{
			if(n%2 ==0 && k%2!=0)
				cout<<"NO"<<endl;
			else if(n%2==0 && k%2==0)
				cout<<"YES"<<endl;
			else if(n%2!=0 && k%2!=0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
}