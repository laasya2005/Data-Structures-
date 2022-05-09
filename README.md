# Data Structures

## Outline 

1. Linked List

2. Doubly Linked List 

3. Stack

4. Queue 

5. Tree

6. Graphs

![ds](https://user-images.githubusercontent.com/71040750/165831806-a04ab594-070c-4bfc-a277-787a58f270cd.png)

![WhatsApp Image 2022-04-29 at 1 08 49 AM](https://user-images.githubusercontent.com/71040750/165832440-8f715773-82d4-44ef-83c6-894dd5ef6db1.jpeg)

-------------------------------------------------------------------------------------------------------------------------------------
1. Linked List:

![ll](https://user-images.githubusercontent.com/71040750/162908451-413f2217-4318-41a0-aed6-b4f29ea0507e.png) 

i. Implementation of Linked List

ii. Inserting a node at beginning 

iii. Insert a node at nth position

iv. Delete a node at nth position

v. Reverse a linked list - Iterative method 

![reverse](https://user-images.githubusercontent.com/71040750/163692730-14604f01-7056-4dde-9d3a-f71d874a199d.png)

vi. Print elements of a linked list in forward and reverse order using recursion 

vii. Reverse a linked list using recursion

2. Doubly Linked List:  

![dll](https://user-images.githubusercontent.com/71040750/165485910-f6b11f0a-020b-4f44-94f1-831a7834dc23.png)

3. Stack:

![stack](https://user-images.githubusercontent.com/71040750/165727650-ccacca45-0863-4b91-86b5-5ba9b320e4f7.png)

i. Array implementation of stacks

![stak](https://user-images.githubusercontent.com/71040750/165752195-50aba06a-7d60-4fc2-926a-94e16b39fe44.png)


ii. Linked List implementation of stacks

![ssss](https://user-images.githubusercontent.com/71040750/165742592-c276c88d-3f79-4e1c-8e00-e4c43b9d0b62.png)


iii. Reverse a string using stack.

vi. Reverse a Linked list

![rll](https://user-images.githubusercontent.com/71040750/165767678-d7223e3b-c7c5-4a49-a9db-b09081eeddf9.png)

v. Check for balanced parentheses using stack

vi. Evaluation of Prefix and Postfix expressions using stack

![infix](https://user-images.githubusercontent.com/71040750/165811619-96bc46af-063d-4232-8ecf-f8f27c299254.png)

![order](https://user-images.githubusercontent.com/71040750/165811654-dfd086c0-80ee-49b1-84a5-7d5a18f156a6.png)

![eva](https://user-images.githubusercontent.com/71040750/165888778-f00f0576-8a26-4a39-b9e9-8532ffdebc13.png)

![hiiiii](https://user-images.githubusercontent.com/71040750/165890056-ec0fd310-0350-442a-9b18-b45e5cd381da.png)



vii. Infix to Postfix using stack

![infix](https://user-images.githubusercontent.com/71040750/165891186-2104cf0f-9d24-4319-b535-75df55d3b4eb.png)


4. Queue: 

![queue](https://user-images.githubusercontent.com/71040750/165829742-d0492b99-8a4f-4a87-a22e-a4b7509d4489.png)

i. Array implementation of Queue

![array](https://user-images.githubusercontent.com/71040750/165896874-b314530a-91af-48ee-a84a-f68ef42e582f.png)

ii. Linked List implementation of Queue

![qqqqq](https://user-images.githubusercontent.com/71040750/167086916-cfab2456-6bef-4989-863d-91342efdf07c.png)

5. Tree:

i. Implementation of Binary search tree ( BST )

![ddd](https://user-images.githubusercontent.com/71040750/167120576-406b3380-1f27-470e-bc2d-90c1731bbe06.png)

![bst](https://user-images.githubusercontent.com/71040750/167238221-1d399912-17ec-4536-a21a-1d96b498752d.png)


ii. Finding min and max element in a binary search tree

iii. Finding the height of a binary tree

![ss](https://user-images.githubusercontent.com/71040750/167444415-1fc4cd7f-ab34-4c0b-8f93-aa2f2f2c55b7.png)

iv. Binary tree traversal - breadth-first and depth-first 

![bst](https://user-images.githubusercontent.com/71040750/167448308-22d964a9-e1f1-4422-ae1a-a79331c74f40.png)

### Breadth-first 

![BFS](https://user-images.githubusercontent.com/71040750/167451167-3ab0da8e-e63d-44b6-9ef1-33632425da9c.png)

v. Deleting a node from Binary Search Tree

vi. Inorder Successor in a binary search tree

6. Graphs:

i. Graph Representation - Edge List

ii. Graph Representation - Adjacency Matrix

iii. Graph Representation - Adjacency List


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
  
                  vector <int> :: iterator it; // Iterator pointing to a vector
  
                  vector < pair <int,int> > :: iterator it; // Iterator pointing to a vector 
  
                  map <int,string> m; // Ordered map, stores Key: Value, where keys are stored in sorted order and no duplicate keys (unique keys) in map (ordered maps internally performs comparision). O(log(n))
  
                  unordered_map <int,string> m; // Unodered map, where keys are in unsorted order, makes use of valid keys datatype (unordered maps internally performs hashing), unordered maps decreases the time complexity than compared with ordered maps. O(1)
                
                  multimap <int, int> m; // Multimaps, where duplication of keys are allowed. O(log(n))
  
                  set <string> s; // Stores key, ordered set stores the unique elements in sorted order. O(log(n))
  
                  unordered_set <string> s; // Unordered set is used to check the presence of the element in the set, order of elements doesn't matter. O(1)
             
                  multiset <string> s; // Multiset, where duplication of keys are allowed. O(log(n))
  
  
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
  
  ### Stack: LIFO
  
          stack <int> s;
  
  i) Balanced parenthesis check
  
  ii) Finding next greater element
  
  ### Queue: FIFO
  
         queue <string> q;
  
  
![diff](https://user-images.githubusercontent.com/71040750/165829532-559c7b66-0a62-4a70-b82b-7ad5ec99c052.png)

  ### Sorting: 
  
                Introsort: Quick sort + Heap sort + Insertion sort  
  
           sort (start pointer of sorting, end+1 pointer of sorting, comparator function) //The sorting makes use of inbuilt sort algorithm
  
  -------------------------------------------------------------------------------------------------------------------------------------
  ### Programs on STL
  
  1. Implementation of Vector
  
  2. Implementation of maps
  
  3. Question related to maps
  
  4. Implementation of sets
  
  5. Question based on unordered set
  
  6. Nested map
  
  7. STACK - Balanced parenthesis check
  
  8. STACK - Finding next greater element
  
  9. Implementation of sorting 
  
  Reference: https://www.youtube.com/watch?v=R5BEcvTVZj0&list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn 
  
  
  
  
  
  
  
  












