//CodeForces Problem (855-A)--> Tom Riddle's Diary
//This Problem is Solved By using Map in STL
//For Any Queries mail  to -> sabbirrayhan475@gmail.com


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    while(n--)
    {
        string s;
        cin>>s;
        m[s]++;
        if(m[s]>1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
