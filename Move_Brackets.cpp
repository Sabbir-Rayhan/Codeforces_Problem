// Problem Link : https://codeforces.com/problemset/problem/1374/C

// Mail : sabbirrayhan475@gmail.com

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0,count1=0;
		string s;
		cin>>n>>s;
		for(int i=0; i<n; i++){
			if(s[i]=='(')
				count++;
			else if(s[i]==')'){
				count--;
				if(count<0){
					count1++;
					count=0;
				}
			}
		}

		cout<<count1<<endl;
	}
}