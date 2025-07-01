#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>  l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(4);
    l.push_front(8);

    l.pop_back();
    l.emplace_back(9);

    //size(), erase(), clear(), begin(), end(),  rbegin(), rend(), insert(), front(), back()
    for(int val : l){
        cout<<val<<" ";
    }
    return 0;
}