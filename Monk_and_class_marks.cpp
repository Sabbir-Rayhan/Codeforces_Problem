//Problem Link :https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE


#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,multiset<string>>marks_map;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		string name;
		int mark;
		cin>>name>>mark;
		marks_map[mark].insert(name);
	}

	auto cur_it = --marks_map.end();
	while(1){
		auto &student = (*cur_it).second;
		auto &marks = (*cur_it).first;
		for(auto &students : student){
			cout<<students<<" "<<marks<<endl;
		}
		if(cur_it == marks_map.begin()) break;
		cur_it--;
	}
}