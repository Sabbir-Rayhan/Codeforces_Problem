//Problem Link: https://codeforces.com/contest/1845/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,x,odd=0,even=0;
		cin>>n>>k>>x;
		if(k==x && x==1)
			cout<<"NO"<<endl;

		else if(n==k && k!=x){
			cout<<"YES"<<endl<<"1"<<endl;
			cout<<n<<endl;
		}

		else if(x!=1){
			cout<<"YES"<<endl<<n<<endl;
			for(int i=0;  i<n; i++)
				cout<<"1"<<" ";
			cout<<endl;
		}

		else{
			for(int i=2; i<=k; i++){
				if(i%2)
					odd++;
				else
					even++;
			}
			if(n%2 && (even==0 || odd==0))
				cout<<"NO"<<endl;
			else{
				cout<<"YES"<<endl;
					if(n%2){
					cout<<((n-3)/2)+1<<endl;
					for(int i=1; i<=(n-3)/2; i++)
						cout<<"2"<<" ";
					cout<<"3"<<endl;
				}
				else{
					cout<<n/2<<endl;
					for(int i=1; i<=n/2;i++)
						cout<<"2"<<" ";
					cout<<endl;
				}
			}
		}
	}
}