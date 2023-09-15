// Problemm : https://codeforces.com/problemset/problem/1311/A

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a==b)
			cout<<"0"<<endl;
		else if(b>a){
			if(a%2 && b%2)
				cout<<"2"<<endl;
			else if(a%2==0 && b%2==0)
				cout<<"2"<<endl;
			else
				cout<<"1"<<endl;
		}

		else{
			if(a%2 && b%2)
				cout<<"1"<<endl;
			else if(a%2==0 && b%2==0)
				cout<<"1"<<endl;
			else
				cout<<"2"<<endl;
		}
	}
}