// 2D vector

#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>&v)
{

    cout<<"Size: "<<v.size()<<endl;  // v.size- o(1)
 
   for (auto vect1D : v)
    {
        for (auto x : vect1D)
        {
            cout << x << " ";
        }   
        cout << endl;

    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   
	vector< vector<int>>v=
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    

   print(v);
}

// Input 
//8
// abc
// def
// abc
// ghj
// jkl
// ghj
// ghj
// abc 