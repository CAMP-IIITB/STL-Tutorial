#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    
    // this program demonstrates the use of keyword "auto"

    // KEEP IN MIND THAT THIS WILL ONLY WORK WITH C++ 11 AND ABOVE

    // auto is used for type inference.
    // It automatically deduces the data type of an expression
    // For example,

    auto num = 10;

    cout << num + 5 << endl;


    // It can be used when we are dealing with complex data structures and are unsure of it's data type.
    // For example, suppose you have a map

    map<int,int>myMap;

    for(int i=0; i<5; i++){
        myMap[i] += i;
    }


    // Now the basic method of iterating through map is

    /*
    for (map<int,int>::iterator it=myMap.begin(); it!=myMap.end(); ++it){
        cout << it->second << endl;
    }
    */

    // But with auto it can be reduced to

    for(auto it : myMap){
        cout << it.second << endl;
    }


    // More examples -
    // Suppose you have an array of sets

    set<int> mySet[5];
    
    mySet[2].insert(5);
    mySet[2].insert(3);

    // You have to print all the elements in mySet[2]
    // Now instead of writing it's complex iterator, we can just use auto

    for(auto it : mySet[2]){
        cout << it << endl;
    }


    // So, we see that, auto can be used as a substitute for complex iterators

    return 0;  
} 
