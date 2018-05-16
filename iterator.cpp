#include <cstdio>
#include <vector>

using namespace std;

int main(){
  // this tutorial teaches the basics of iterators
  // iterators are a special mechanism to iterator through data structures like vectors in C++
  // they can be thought of like the counter part of pointers but for vectors
  // in simple terms, iterators allow us to iterate through a complex data structure
  
  // first, let's begin by creating a vector
  
  int n = 5;
  
  vector<int> v;
  for(int i = 0; i < n; i++){
    v.push_back(i);
  }
  
  // now let's create an iterator for this vector
  // the line below indicates that we wish to create an iterator 'it' and this iterator is currently pointing at the 
  // 0th index of the vector v
  vector<int>::iterator it = v.begin();
  
  // in the example below, the iterator `it2` is pointing to index 2 in the vector v
  vector<int>::iterator it2 = v.begin() + 2;

  // subtracting one iterator from the other tells us the numebr of indices between the two iterators
  // it2 - it should give us 2
  
  printf("The difference in positions between the two iterators is %d\n", (int) (it2 - it));
  
  // now let's use the iterator to print the entire array
  while(it != v.end()){
    // we must dereference iterators to access their values just like in pointers!
    printf("%d\n", *it);
    it++; // increments the iterator by 1 index
  }
  
  // once the while loop has ended, it now points to v.end()
  // accessing it now will give us an error
  
  return 0;
}
