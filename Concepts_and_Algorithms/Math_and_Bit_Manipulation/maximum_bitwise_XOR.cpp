#include <iostream>
using namespace std;

string maximumXor(string s, string t) {
    string check_t = t;
    int count0 = 0, count1 = 0;
    for(char ch : check_t){
        if(ch == '0') count0++;
        else count1++;
    }

    string result;
    for(char ch : s){
        if(ch  == '0'){
            if(count1 > 0){
                result.push_back('1');
                count1--;
            }
            else{
                result.push_back('0');
                count0--;
            }
        }
        else{
            if(count0 > 0){
                result.push_back('1');
                count0--;
            }
            else{
                result.push_back('0');
                count1--;
            }
        }
    }
    return result;
}

int main(){
    
    return 0;
}