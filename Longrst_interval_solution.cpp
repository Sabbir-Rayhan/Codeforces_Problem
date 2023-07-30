
// Author: Sabbir rayhan Mahee

#include<bits/stdc++.h>
using namespace std;


void mahee(){
	long long n;
		cin>>n;
		int cnt=0,write=0;
	for(int i=1;i<=6500;i++){
		if(n%i==0)
		{
			cnt++;
		}
		else
		{
			write=max(write,cnt);
			cnt=0;
		}
}
	//write=max(write,cnt);
	cout<<write<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		mahee();
	}
}

