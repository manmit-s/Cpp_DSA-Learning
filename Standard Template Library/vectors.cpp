#include <iostream>
#include <vector>
using namespace std;

int main(){
    //iterators
    vector <int> vec = {1,2,3,4,5};
    
    // vector <int> :: iterator itr;
    //instead of declaring iterator as a line we can use 'auto' keyword  similar to 'var' keyword

    for(auto itr = vec.begin(); itr != vec.end(); itr++){
        cout<<*(itr)<<" ";
    }

    
    for(auto itr = vec.rbegin(); itr != vec.rend(); itr++){
        cout<<*(itr)<<" ";
    }
    return 0;
}