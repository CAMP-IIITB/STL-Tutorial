#include <cstdio>
#include <vector>
#include <algorithm>
#include<pair> 

using namespace std;

bool comp(pair<int,int> &p1, pair<int,int> &p2>
{
  if(p1.first > p2.first && p1.second < p2.second) return true;
  return false;
}

int main(){
  // a program that demonstrates how to use C++'s inbuilt sort function to sort arrays and vectors
  
  int n; // number of elements in the array
  scanf("%d", &n);
  
  int array[n]; // our array of integers
  for(int i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  
  sort(array, array+n); // sort function takes as input pointers to the start of the array
                       //  and a pointer to one position after the end of the array
                       
  // print the array and see if it worked!                        
  for(int i = 0; i < n; i++){
    printf("array[%d] = %d\n", i, array[i]);
  }
  
  vector<int> vec(n, 0); // created a vector that contains n elements, all of which are initially 0
  for(int i = 0; i < n; i++){
    scanf("%d", &vec[i]);
  } 
  
  sort(vec.begin(), vec.end());
  
  for(int i = 0; i < n; i++){
     printf("vec[%d] = %d\n", i, vec[i]);
  }
  
  // We can also use the inbuilt sort function to sort based on custom comparators
  // Let's define a vector of pairs, where we would like to sort based on the first element in descending order
  // and on the second in increasing order
  // We have defined comp above
  vector<pair<int,int> , comp > w;
  // Remember a comparator should return true only if x < y. Not x <= y. 
  
  return 0;
}
