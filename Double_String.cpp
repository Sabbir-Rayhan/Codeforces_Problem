// Problem Link : https://codeforces.com/contest/1703/problem/D

// This Problem is very interesting. I think you will enjoy this problem;

// Mail : sabbirrayhan475@gmail.com

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> v(n);
		map<string,int>m;
		for(int i=0; i<n; i++){
			cin>>v[i];
			m[v[i]]++;
		}

		string x="";
		string y="";
		string ans(n,'0');
		//cout<<ans<<endl;
		for(int i=0; i<n; i++){
			if(v[i].size()==1) continue;
			for(int j=0; j<v[i].size()-1; j++){
				for(int k=0; k<=j; k++)
					x.push_back(v[i][k]);
				for(int l=j+1; l<v[i].size(); l++)
					y.push_back(v[i][l]);
				// cout<<x<<" "<<y<<endl;
				// cout<<m[x]<<" "<<m[y]<<endl;
				// x.erase();
				// y.erase();
				if(m[x]>=1 && m[y]>=1)
					ans[i]='1';
				x.erase();
				y.erase();
			}

		}
		cout<<ans<<endl;
	}
}