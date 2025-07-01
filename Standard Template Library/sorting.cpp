#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){
    // to sort on the basis of 2nd element we need to compare and return the bool
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
    sort(vec.begin(), vec.end());
    
    //by default this sorting algorithm will sort the array based on 1st element
    for(auto i : vec){
        cout<<i.first<<", "<<i.second<<endl;
    }
    cout<<"-------"<<endl;
    //to implement our own logic to sort based on 2nd element we need to create a comparator/functor
    sort(vec.begin(), vec.end(), comparator); //added our custom comparator
    for(auto i : vec){
        cout<<i.first<<", "<<i.second<<endl;
    }

    // ------------------------------------------------------------------------------------------
    string s = "abc";
    next_permutation(s.begin(), s.end());
    prev_permutation(s.begin(), s.end());

    cout<<s;

    return 0;
}