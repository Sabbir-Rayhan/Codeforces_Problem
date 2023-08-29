//This Problem is very important to learn Binary Search.
//Problem Link-> https://www.spoj.com/problems/EKO/


#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
long long n,m;
long long trees[N];

bool LengthOfTree(int h){
	long long wood=0;
	for(int i=0; i<n; i++){
		if(trees[i]>=h){
			wood+= trees[i]-h;
		}
	}

	return wood>=m;
}


int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++)
		cin>>trees[i];
	sort(trees,trees+n);
	long long low=0,high=trees[n-1],mid;
	while(high-low>1){
		mid = (high+low)/2;
		if(LengthOfTree(mid)){
			low = mid;
		}
		else
			high= mid-1;
	}

	if(LengthOfTree(high))
		cout<<high<<endl;
	else
		cout<<low<<endl;
}