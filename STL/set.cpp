// 4. Implementation of sets

#include<bits/stdc++.h>
using namespace std;

void print(set<string>&s)
{
    cout<<"Size: "<<s.size()<<endl;  // v.size- o(1)

    for(auto value: s){
        cout<<value<<" ";
    }
    cout<<endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	set<string>s;
    s.insert("abc"); //log(n)
    s.insert("zsdf"); // insert function is used to insert values in the set
    s.insert("bcd");
    s.insert("abc");

    // auto it=s.find("abc"); //log(n)
    // if(it!=s.end())
    // {
    //     cout<<(*it);
    // }
    // cout<<endl;
    print(s);
}