#include <cstdio>
#include <algorithm> // must include to use lower_buound and upper_bound
#include <vector>

using namespace std;

int main(){
  // given a sorted vector v and a number x, the lower_bound function returns the iterator to 
  // the smallest index i such that v[i] >= x
  
  // given a sorted vector v and a number x, the lower_bound function returns the iterator to 
  // the smallest index i such that v[i] > x. Notice the strict inequality
  
  int myints[] = {10,20,30,30,20,10,10,20};
  vector<int> v(myints,myints+8);              // 10 20 30 30 20 10 10 20
  sort (v.begin(), v.end());                   // 10 10 10 20 20 20 30 30
  vector<int>::iterator low, up;
  low = lower_bound (v.begin(), v.end(), 20);  //          ^
  up = upper_bound (v.begin(), v.end(), 20);   //                   ^

  printf("lower_bound at position %d\n", (int) (low- v.begin()));
  printf("upper_bound at position %d\n", (int) (up - v.begin()));
  
  return 0;
}
