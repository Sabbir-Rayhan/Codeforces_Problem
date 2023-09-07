//Problem Link: https://codeforces.com/contest/1703/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ara[n];
		for(int i=0; i<n; i++)
			cin>>ara[i];
		for(int j=0; j<n; j++){
			int x;
			string s;
			cin>>x>>s;
			for(int i=0; i<x; i++){
				if(s[i]=='D'){
					ara[j]++;
					if(ara[j]>9){
						ara[j] = 0;
					}
				}
				else if(s[i] == 'U'){
					ara[j]--;
					if(ara[j]<0)
						ara[j]=9;
				}
			}
		}

		for(int i=0; i<n; i++){
			cout<<ara[i]<<" ";
		}
		cout<<endl;
	}
}