#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <string, int> m;
    m["tv"] = 50;
    m["tablet"] = 90;
    m["washing Machine"] = 60;
    m["watch"] = 30;

    for(auto i : m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}