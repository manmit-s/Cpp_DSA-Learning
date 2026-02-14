#include <iostream>
using namespace std;

string defangIPaddr(string address) {
    string result;
    for(char c : address){
        if(c == '.'){
            result += "[.]";
        }
        else result += c;
    }
    return result;
}

int main(){
    
    return 0;
}