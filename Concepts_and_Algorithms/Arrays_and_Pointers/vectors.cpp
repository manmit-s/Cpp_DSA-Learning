#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec1 = {2, 4, 6, 9};
    cout << vec1[0] << endl;

    //for each loop 
    for(int val : vec1){ //here val signifies the value AT index not the actual index value!
        cout << val << endl;
    }
    return 0;
}