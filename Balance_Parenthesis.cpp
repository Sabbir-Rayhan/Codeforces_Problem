#include<bits/stdc++.h>
using namespace std;

string isbalance(string s)
{
    unordered_map<char,int>symbols = { {'[',-3}, {'{',-2} , {'(',-1}, {']',3}, {'}',2} , {')',1}};
    stack<char>ch;
    for(auto bracket : s)
    {
        if(symbols[bracket] < 0)
            ch.push(bracket);
        else
        {
            if(ch.empty()) return "NO";
            else{
                char top = ch.top();
                ch.pop();
                if(symbols[top] + symbols[bracket] !=0) return "NO";
            }
        }
    }

    if(ch.empty()) return "YES";
    return "NO";
}

int main()
{
    string s;
    cin>>s;
    cout<<isbalance(s)<<endl;
}
