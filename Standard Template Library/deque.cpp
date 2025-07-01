#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque <int> d = {1,2,3,4,5};
    d.push_back(1);
    d.push_back(2);
    d.push_front(4);
    d.push_front(8);

    d.pop_back();
    d.emplace_back(9);

    //size(), erase(), clear(), begin(), end(),  rbegin(), rend(), insert(), front(), back()
    for(int val : d){
        cout<<val<<" ";
    }
    return 0;
}