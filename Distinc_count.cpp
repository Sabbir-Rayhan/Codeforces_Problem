//Problem Link :https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/

 #include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long unq=0, n,x,count=0;
	cin>>n>>x;
	map<long long,long long>m;
	for(int i=0; i<n; i++){
		int number;
		cin>>number;
		m[number]++;
		if(m[number]>1)
			count++;
	}
	
	 //cout<<count<<endl;
	 unq = n - count;
	 //cout<<unq<<endl;

	if(unq == x)
		cout<<"Good"<<endl;
	else if(unq < x)
		cout<<"Bad"<<endl;
	else
		cout<<"Average"<<endl;
}
}