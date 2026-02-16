#include <iostream>
#include <string>
using namespace std;

string interpret(string command) {
    string result = "";
    int i = 0;
    while(i < command.size()){
        if(command[i] == 'G'){
            result.append("G");
            i++;
        }
        else if(command[i] == '(' && command[i+1] == ')'){
            result.append("o");
            i+=2;
        }
        else{
            result.append("al");
            i+=4;
        }
    }        
    return result;
}

int main(){
    string command = "G()(al)";
    cout<<interpret(command);
    return 0;
}