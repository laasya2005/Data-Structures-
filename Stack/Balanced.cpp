// v. Check for balanced parentheses using stack

#include<bits/stdc++.h>
using namespace std;

unordered_map <char,int> symbols={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}}; // global declaration
// opening brackets are given negative numbers and closing brackets are given positive numbers

string isBalanced(string s) 
{
	stack <char> st; //stack

	for(char bracket:s)
	{
		if(symbols[bracket]<0)
		// here symbols[bracket] returns integer value - means opening bracket (less than zero means negative values)
			st.push(bracket); // push open bracket into stack
		
		else // for closing bracket
		{
			if(st.empty()) return "NO"; // stack should not be empty, to have balanced parenthesis thus return No
			char top=st.top(); // if stack is not empty, top element is removed from the stack
			st.pop();
			if(symbols[top]+symbols[bracket] != 0) // if top element opening bracket in stack and closing bracket outside the stack is valid pair or not? 
			return"NO";

		}	
	}
if(st.empty()) return"YES";// if stack is empty then it is balanced string or it is unbalanced string ( NO )
return "NO";

}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
	int t; // Taking the test cases as input
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<isBalanced(s)<<endl;
	}
}

/* INPUT

3            
{[()]}        
{[(])}      
{{[[(())]]}}  */