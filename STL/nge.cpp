// 8. STACK - Finding next greater element

#include<bits/stdc++.h>
using namespace std;

vector <int> NGE(vector<int>v){
	vector<int> nge(v.size());

	stack <int> st;

	for(int i=0;i<v.size();++i){ // we are not using range based loop because we need indexes
		
		while(!st.empty() && v[i] > v[st.top()]){
			nge[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		nge[st.top()]= -1;
		st.pop();
	}
	return nge; // RETURNS NEXT GREATER ELEMENT FROM INPUT VECTOR LIST
}

int main()

{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
     
	int n;
	cin>>n;
	vector<int>v(n); // TAKING VECTOR INPUT
	for(int i=0;i<n;++i){
		cin>>v[i];
	}
	vector<int> nge= NGE(v);
	for(int i=0;i<n;++i)
	{
		cout<<v[i]<<" "<<(nge[i]==-1?-1:v[nge[i]])<<endl;
	}
}

// 6
// 4 5 2 25 7 8