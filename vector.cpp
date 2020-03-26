#include <cstdio>
#include <vector> // include this to use vectors!

using namespace std;

int main(){
  // this program demonstrates how to use vectors in C++
  // vectors are resizeable dynamic arrays, and are extremely useful in many implementations
  
  // let's begin by creating the simplest structure, a vector of integers
  
  // here v is a vector which will store integers and currently it represents an array of size 0
  vector<int> v;
  
  // let's add elements to v
  for(int i = 0; i < 5; i++){
    v.push_back(i); // adds an element to the end of the array
  }
  
  // now v represents the array [0, 1, 2, 3, 4]
  // to access the i-th element, simply use v[i]
  // for eg. let's print the element at index 2
  
  printf("The element at index 2 is %d\n", v[2]);
  
  // It is even possible to initialise a vector of a certain size
  vector<int> w(n) ;
  // The elements are initialised to 0
  // We can initialise them to -1 by adding a second argument
  vector<int> w(n,-1);
  
  // similarly you can create vectors of other types as well
  
  vector<bool> vector_of_booleans;
  vector<char> vector_of_chars;
  // note that two consecutive '>' or '<' should always be separated with a space, else you will get an error
  vector<vector<int> > vector_of_vectors;
  
  // the value inside the angled brackets, i.e. the T in vector<T> denotes the type of each element of the vector
  
  return 0;
}
