
// 2. Implementation of maps

/* Printng map elements by using iterators, iterators are used to access values of container

Indexing is not possible in maps, thats why iterators are used to access values from the container */

#include<bits/stdc++.h>
using namespace std;



void print(map<int,string>&m)
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
    
	map<int,string>m;
    m[1]="abc"; // O(log(n))
    m[2]="cde";
    m[3]="acd";
  //m.insert({4,"afg"});
    print(m);
}