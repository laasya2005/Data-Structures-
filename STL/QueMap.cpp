
// 3. Question related to maps 

/* Given N strings, print unique strings
in lexiographical order with their frequency*/
// N<= 10^5
// |S|<=100

#include<bits/stdc++.h>
using namespace std;

void print(map<string,int>&m)
{
    cout<<"Size: "<<m.size()<<endl;  // v.size- o(1)
    for(auto &pr:m){
        cout<<pr.first <<" "<< pr.second<< endl;
    }
    cout<<endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    map<string,int>m; // string is key as we need unique strings, value is integer as we need frequency
    int n;
    cin>>n; // number of strings to give as input
    for(int i=0;i<n;++i)
    {
        string s; 
        cin>>s; // Entering all kinds of string
        m[s]++; // m[s] = m[s] + 1, inserting string in map and increasing the counter, counting the frequency in lexical order
    }
print(m);
}

/* Input 
8
abc
def
abc
ghj
jkl
ghj
ghj
abc */