// 1. Implementation of Vector

/*Dynamically adding elements to the vector and printing the output*/
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v)    // &v- using reference(&), copy of elements can be avoided, reference is used in printing, 
                               // when vector is passed to the function, just to use vector and not to change any values in the vector
                              // because copying is expensive operation
{
    cout<<"Size: "<<v.size()<<endl;  // v.size- o(1) as size of vector is dynamic we can use v.size function

 for(int i= 0; i<v.size(); ++i){ 
        cout<< v[i] <<" ";
 }
    
    cout<<endl; // v[i] is used for accessing values of specific vector, i is by using index
}

int main()
{
    
    vector<int>v; // vector with integer datatype
    int n;
    cin>>n; // giving size of vector
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x; // adding the elements in the vector
        v.push_back(x); //push_back-o(1), x will join at the end of vector

    }
    v.pop_back(); // pop_back-o(1)
    printVec(v);

    vector<int>v2=v;// o(n), copying vector (here v2 is copy of v)
    v2.push_back(5);
    printVec(v2); //changes made in v2 doesn't effect v as (vector v2 is copy of v)
}