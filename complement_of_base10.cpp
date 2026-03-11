#include <iostream>
#include <bitset>
using namespace std;
/*
Initial Approach:
- Convert the number to binary
- Flip each bit
- Convert back to decimal
*/
int bitwiseComplement(int n) {
    //Edge case when n = 0
    if(n == 0) return 0;
    string binary = bitset<32>(n).to_string();
    
    //Remove the leading zeros
    size_t pos = binary.find('1');
    if(pos != string::npos) { //when pos is not -1, npos means no position found
        binary = binary.substr(pos); //extract substring from pos to end
    }
    
    for(int i = 0; i < binary.length(); i++) {
        if(binary[i] == '0') {
            binary[i] = '1';
        } else {
            binary[i] = '0';
        }
    }
    
    //Now convert the binary which is in string format to integer using bitset
    int result = bitset<32>(binary).to_ulong();
    
    return result;
}

int main(){
    
    return 0;
}