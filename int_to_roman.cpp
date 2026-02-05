#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

//For Future ME!!
// yeh toh maine soln dekha toh samjha ki hash map kese implement krna hai otherwise jab hashmap nhi dekha toh mai esa soch rha tha ki jese eg: 58 hai toh ek helper fn se mai vector return karunga -> (8, 50) as in expanded form and is vector se popback krte jaaunga to see woh number kis range mai aata hai uske according if else ladder lagega pura

// Update hashmap pe computational time zyada lag rha tha so I used pair instead it is far more lightweight and takes O(1) to access elements whereas map takes O(log n) time

string intToRoman(int num){
    pair<int, string> intAndRoman[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };


    string ans = "";

    for(auto &m : intAndRoman){
        if(num / m.first){
            int count = num/m.first;
            for(int i = 1; i <= count; i++) ans.append(m.second);
            num = num % m.first;
        }
    }
    return ans;
}

int main(){
    cout<<intToRoman(58);
    return 0;
}