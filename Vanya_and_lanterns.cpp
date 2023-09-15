//Problem :  https://codeforces.com/problemset/problem/492/B

#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,l,m=0;
	cin>>n>>l;
	long long ara[n];
	for(int i=0; i<n; i++)
		cin>>ara[i];
	sort(ara,ara+n);
	for(int i=0; i<n-1; i++){
		if(ara[i+1]-ara[i]>m){
			m=ara[i+1]-ara[i];
		}
	}

	double r = l-ara[n-1];
	double s = (double)m/2.0;
	double w = ara[0];
	double maximum = max(max(r,s),w);
	cout<<fixed<<setprecision(10)<<maximum<<endl;
}