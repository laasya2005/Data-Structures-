// 9. Implementation of sorting 

#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i <n; ++i)
    {
        cin>>arr[i]; // Printing the array
    }
    sort(arr,arr+n);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" "; // Printing the array in sorted order
    }
    cout<<endl;
}