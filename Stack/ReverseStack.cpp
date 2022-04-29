// iii. Reverse a string using stack.

#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

void Reverse(char *C, int n) // array is always passed through pointer(*c) and n is number of characters in string
{
    stack <char> S; // created a stack of characters

//loop for push
    for (int i = 0; i < n; i++) // traversing string left to right
    {
        S.push(C[i]); // and pushing the character into the stack
    }
//loop for pop
    for (int i = 0; i < n; i++)
    {
        C[i] = S.top(); // overwrite the character at index i
        S.pop(); // perform pop
    }
}

int main()
{
    char C[51]; // character array which stores the string
    cout << "\nEnter a string: ";
    cin >> C;
    Reverse(C, strlen(C)); // passing the array and length of the string in the array
    cout << "Reversed output: " << C;
    cout << "\n";
}