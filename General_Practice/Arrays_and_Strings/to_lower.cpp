#include <iostream>
#include <algorithm>
using namespace std;

string toLowerCase(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    /*
    From input_begin to input_end
    Apply function on each element
    Store result starting from output_begin
    */
    return s;
}

int main(){
    string s = "Hello theRe";
    cout<<toLowerCase(s);
    return 0;
}