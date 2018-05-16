#include <cstdio>
#include <map>
#include <set>

using namespace std;

int main(){
  // maps and sets are probably the most useful features of STL for CP
  // a set represents, literally a set of distinct items.
  // a map represents a mapping from a set of distinct keys to values
  // internall both data structures are written as red black trees
  // hence insertion deletion and lookup are all performed in O(log n) time
  
  // let's see an example of a set
  // similar to vectors, one must define the type of elements stored in a set in angled brackets
  
  // a set of integers
  set<int> s;
  
  // let's insert elements into the set
  for(int i = 0; i < 5; i++){
    s.insert(i);
  }
  
  // the set now represents the set of integers {0, 1, 2, 3, 4}
  // what if we try to insert an element that is already present in the set?
  
  s.insert(2)
  
  // the set still contains just 5 elements, i.e., {0, 1, 2, 3, 4}. Duplicates are not stored in a set
  // we can verify this by printing the size of a set
  
  printf("The size of the set is %d\n", (int) s.size());
  
  // chceck if an element is present in the set
  
  if(s.find(4) != s.end()){
    printf("The element is present in the set!\n");
  }
  else{
    printf("The element was not found.\n");
  }
  
  // erase an element from the set
  s.erase(4);
  
  printf("After deletion, the size of the set is %d\n", (int) s.size());
  
  // Additionally, sets can also be iterated with iterators. Moreover, iterating throguh a set ensures that elements of
  // the set are iterated in ascending order!
  
  set<int> sorted_set;
  
  // let's insert some random values
  sorted_set.insert(7);
  sorted_set.insert(5);
  sorted_set.insert(8);
  
  // create an iterator
  set<int>::iterator it = sorted_set.begin();
  while(it != sorted_set.end()){
    printf("Printf the elements of the set in sorted order: %d\n", *it);
    it++;
  }
  
  // maps are similar to sets except they map each elemetn of a set to a particular value
  // for example the set below maps integers to strings
  map<int, string> mapping;
  mapping[1] = "apple";
  mapping[2] = "tourist"
  mapping[7] = "much wow";
  
  // you can access elements of the map by using square brackets, similar to how you use them for arrays
  printf("Printing the value of mapping[7]: %s\n", mapping[7]);
  
  // for more info refer http://www.cplusplus.com/reference/algorithm/lower_bound/
  
  // Furthermore, sets and maps also come in a different flavour called unordered_set and unordered_map
  // the unordered flavours of sets and maps are essentially in built hash tables!!
  // Yes you got that right, you don't need to implement hash tables from scratch anymore! <3
  // The name `unordered` comes from the fact that iterating through unordered_set and unordered_map
  // doesn't go through the elements in sorted order. However, insertions, look ups and deletions are
  // amortized O(1)!
  // Learning the unordered data structures have been left as an exercise
  
  
  return 0;  
}
