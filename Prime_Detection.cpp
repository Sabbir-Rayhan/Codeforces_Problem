// Problem Link: https://codeforces.com/contest/1861/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;  i<s.size(); i++){
            if(s[i] == '1'){
                cout<<13<<endl;
                break;
            }
 
            if(s[i] == '3'){
                cout<<31<<endl;
                break;
            }
        }
    }
}