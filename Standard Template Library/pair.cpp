#include <iostream>
#include <vector>
using namespace std;

int main(){
    pair <int, string> p = {4, "hello"};

    cout<<p.first<<endl;
    cout<<p.second<<endl;

    vector <pair<int, int>> vec = {{3, 4}, {6, 9}, {2, 3}};
    
    vec.push_back({4, 5}); //easy
    vec.emplace_back(4, 5); //efficient
    // both do the same thing
    return 0;
}