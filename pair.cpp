#include <cstdio>
#include <utility>  // include this header file to use pairs!

using namespace std;

int main(){
  // this program demonstrates how to use pairs in C++
  
  // let's begin by creating a pair of integers
  pair<int, int> p = make_pair(4, 5);
  
  // the elements of the pair can be accessed by using the commands "first" and "second". for eg.
  printf("The values inside the pair are (%d, %d)\n", p.first, p.second);
  
  // you can also create pairs of pairs
  
  pair<char, pair<int, int> > nested_pair = make_pair('a', make_pair(1, 2));
  
  printf("The first element of the second element of the nested pair is %d\n", nested_pair.second.first);
  
  return 0;
}
