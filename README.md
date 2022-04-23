# Data Structures

## Outline 

1. Linked List

![ll](https://user-images.githubusercontent.com/71040750/162908451-413f2217-4318-41a0-aed6-b4f29ea0507e.png) 

i. Implementation of Linked List

ii. Inserting a node at beginning 

iii. Insert a node at nth position

iv. Delete a node at nth position

v. Reverse a linked list - Iterative method 

![reverse](https://user-images.githubusercontent.com/71040750/163692730-14604f01-7056-4dde-9d3a-f71d874a199d.png)

vi. Print elements of a linked list in forward and reverse order using recursion 

vii. Reverse a linked list using recursion

2. Doubly Linked List
3. Stack
4. Queue 
5. Tree
6. Graphs

Reference: https://www.youtube.com/watch?v=92S4zgXN17o&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P

# Basics of C++

1. cout<< - To print , cin>> - To take input from console
2. Syntax for variable: Datatype variableName. Ex: String characterName = "john";
3. Initializing variables: int age{21};
4. Syntax for Array: Datatype array_name [number of elements] {initialization list}. Ex: int test_scores[5] {100,95,99,87,88};
5. Syntax of Vector: vector <datatype> vector_name; Ex: vector <char> vowels(5); // 5 elements are initialized to zero, vectors must have #include <vector> 
### vector_name. push_back(element)
  Ex:    
                                  
                                   vector<int> test_scores {100, 95, 99 };
                                   test_scores.push_back(80); //100,95,99,80
### 2-D Vector Syntax: 
  vector < vector<int> > movie_ratings; 

6. Logical operator- and (&&) T T T, or (||) F F F
7. Range based for loop: for( var_type var_name: Sequence).
  
  Ex:
  
                    int scores[]{100,90,97}; // array
                    for (auto score: scores)
                        cout<< score <<endl; // 100,90,97
 8. Functions: The functions are defined outside main ( Function Declaration )
  
  
              int function_name(int a)
                 {
  
                       statements;
                       return 0;
                  }
  
I. Function calling: function_name(1);
  
II. Function Prototypes: function that doesn't need body 
   Ex: int function_name(); // prototype
  
III. In function defination - PARAMETERS (formal parameters)
  
     In function call - ARGUMENTS (actual parameters) 
  
IV. Parameters in the function are passed in two ways PASS BY VALUE (make a copy) and PASS BY REFERENCE (foraml parameters will be alias of actual parameters) i.e &a and &b is equivalent to x and y.

V. OVERLOADING FUNCTION: Same function name--> with different datatype parameters

9. Pointers: stores the address of a variable 
  Syntax: datatype *pointer_name { nullptr } // pointer is pointing no where i.e initialized to zero
  
  Ex:
  
             int *int_ptr{}; // uninitialized pointers contain garbage data
  
  I. POINTER --> Hold address
     Dereferencing Pointer (it is done by using dot operator or arrow operator) --> hold value
  
  II. The new keyword is used to allocate an integer on heap memory for storage ( int_ptr = new int ; )
       ( delete int_ptr ) // frees the allocated storage
  
10. Object Oriented Programming: uses classes and objects
  
               class class_name // put classes infront of main
               {
                   // variables
                   // declaration
                   // method
                };
               int main() // put objects in main
               {
  
                // objects
  
               }
 I. Constructors: Default, parameterized, copy
  
copy constructor- shallow copying ( Problem, pointer is copied not what it points to (value) ) and deep copying ( solution , we create a copy of pointer to data)
   
II. Struct VS Classes 
  
i. The members of struct are public by default
  
ii. The members of class are private by default
  
III. Friend function : Another class can have access to private class members using friend keyword
  

# Standard Template Library (STL)

##  1. Containers: 
  containers are the data structure which are pre implemented in STL
  
  Sequential: vectors, stack, queue, pair
  
  ordered: maps, multimaps, set, multiset
  
  unordered: unordered map, unordered set
   
##  2. Iterators: vector, pair, maps (ordered map, unordered map, Multimaps), Sets
  Iterators are Similar to pointers and Iterators point to memory address of containers, Iterators are used to access value of container
  
                  vector <int> :: iterator it; // iterator pointing to a vector
  
                  vector < pair <int,int> > :: iterator it; // iterator pointing to a vector 
  
                  map <int,string> m; // ordered map, stores Key: Value, where order of key matters
  
                  unordered_map <int,string> m; // unodered map, where keys are in unsorted order
                
                  multimap <int, int> m; // Multimaps, where duplication of keys are allowed
            
                  set <string> s; // stores key, SET stores the unique elements in sorted order
  
  
     ##### Nesting in STL : Maps and sets
  
                 map < pair<int,int> , int > m; // where pair is key and int is value 
                  
                 map < set<int>, int > m; // where set is key and int is value
                 

  -----------------------------------------------------------------------------------------------
  1. Pair - combination of two different type of datatypes
              
         int main(){
                         
              pair < int, string > p;
              p= {2,"abc"}; // making pairs
              cout<< p.first << " " << p.second << endl; // accessing elements in pair 
                  
                    } // output: 2 abc
  
  2. Pair in array: 
  
             int a[] = {1,2,3};
             int b[] = {2,3,4};
             pair <int,int> p_array[3]; // 3 arrays
             p_array[0] = {1,2};
             p_array[1] = {2,3};
             p_array[2] = {3,4};
             swap(p_array[0], p_array[2]);
             for(int i=0; i<3; ++i)
                {
                cout<< p_array[i].first << " " << p_array[i].second;
                 }  // o/p: 3,4
                            2,3
                            1,2
-------------------------------------------------------------------------------------------------
 ### Nesting in vectors
                                                                   
 1. Vector: vector<int> v; // Empty vector intialization
 2. vectors in pair: vector<pair<int,int>> v ={{1,2},{2,3},{3,4}};
 3. Array of vectors (kind of 2D Array): vector<int> v[10]; // 10 vectors of size zero
 4. vector of vector: vector<vector<int>>v; // we push back values of vector by creating anothe vector
  
 -------------------------------------------------------------------------------------------------
  
  ### Stack: 
  
          stack <int> s;
  
  i) Balanced parenthesis check
  
  ii) Finding next greater element
  
  ### Queue: 
  
         queue <string> q;
  
  ### Sorting: 
  
                Introsort: Quick sort + Heap sort + Insertion sort  
  
   sort (start pointer of sorting, end+1 pointer of sorting, comparator function) //The sorting makes use of inbuilt sort algorithm
  
                  
  

  
  
  
  
  
  
  Reference: https://www.youtube.com/watch?v=R5BEcvTVZj0&list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn 
  
  
  
  
  
  
  
  












