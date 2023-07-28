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
	vector<pair<int,int>>v;
	int n,k;
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		int x;
		cin>>x;
		if(x%k == 0){
			v.push_back({k,i});
		}
		else{
			v.push_back({x%k,i});
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(auto it : v){
		cout<<it.second<<" ";
	}
	cout<<endl;
}
}