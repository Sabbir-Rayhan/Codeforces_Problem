// Problem Link: https://codeforces.com/contest/1703/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		int count=0;
		map<char,int>m;
		for(int i=0; i<n; i++){
			m[s[i]]++;
			if(m[s[i]] == 1)
				count+=2;
			else
				count++;
		}
		cout<<count<<endl;
	}
}