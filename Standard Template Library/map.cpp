#include <iostream>
#include <map>
using namespace std;

int main(){
    map <string, int> m;
    m["tv"] = 50;
    m["tablet"] = 90;
    m["washing Machine"] = 60;
    m["watch"] = 30;
    m.erase("tv");

    for(auto i : m){
        cout<<i.first<<" : "<<i.second<<endl;
    }

    if(m.find("tv") != m.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}