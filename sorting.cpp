#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

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
  
  return 0;
}
