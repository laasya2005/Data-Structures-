// 5. Question based on unordered set
/* 
Given N strings and Q queries.
 In each query you are given a string 
 print yes if string is present
 else pring no.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
	unordered_set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){ //o(1)
        string str;
        cin>>str;
        s.insert(str);}
    int q; // taking queries as input
    cin>>q;
while(q--) {
    string str;
    cin>>str;
    if(s.find(str)==s.end()) // to check whether the queries matches with inserted strings
    {
        cout<<"no\n";
    } 
    else
    {
        cout<<"yes\n";
    }
         }

}
/*   Input 
8   // input strings

abc
def
abc
ghj
jkl
ghj
ghj
abc

3  // input queries

abc //yes
ghj //yes
abcdef //no            */
    