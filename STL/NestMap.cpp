// 6. Nested map

#include<bits/stdc++.h>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
	map<pair<string,string>,vector<int>>m;
    int n;
    cin>>n;// total number of student marks to be stored
    for(int i=0;i<n;++i)
    {
        string fn,ln;
        int ct; // count-how many marks need to be taken as input
        cin>>fn>>ln>>ct;
        for (int j=0;i<ct;++j)
        {
            int x; // taking marks input
            cin>>x;
        m[{fn,ln}].push_back(x); // adding the first name, last name As a pair to vector to store in map

        }
    }
for(auto &pr:m) // for printing
    {
        auto &full_name=pr.first; //fullname= firstname + lastname
        auto &list=pr.second; // list is total number of subject marks

        cout<<full_name.first <<" "<< full_name.second<< endl;
        cout<<list.size()<<endl;

    for (auto &element:list) // to print all the marks in the list 
    {
        cout<<element<<" ";
    }
        cout<<endl;

    }
}

/* INPUT

3
james brown  // firstName lastName TotalNumberOfSub Marks 
4               
10 20 30 40   // all the marks in the list
jessie kate
2
30 40 
meena roy
3
100 200 300   */
