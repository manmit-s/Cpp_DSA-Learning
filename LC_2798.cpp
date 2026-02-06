#include <iostream>
#include <vector>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int count = 0;
    for(int x : hours){
        if(x >= target) count++;
    }
    return count;
}

int main(){
    vector<int> hours = {0,1,2,3,4};
    int target = 5;
    cout<<numberOfEmployeesWhoMetTarget(hours, target);
    return 0;
}