#include<bits/stdc++.h>
using namespace std;
#define ys cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<long long> v(n+1);
	int count =0;
	for(int i=1; i<=n;  i++){
		cin>>v[i];
		if(v[i]==i)
			count++;
	}
	if(count==0)
		cout<<"0"<<endl;
	else{
		if(count%2==0)
			cout<<count/2<<endl;
		else
			cout<<(count/2)+1<<endl;
	}
		
}
}