#include <iostream>
#include <vector>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int s = 0, e = letters.size() - 1, mid;
    char ans = letters[0];
    while(s <= e){
        mid = s + (e - s)/2;
        if(letters[mid] > target){
            ans = letters[mid];
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<char> letters = {'c', 'f', 'j'};
    // vector<char> letters = {'x', 'x', 'y', 'y'};
    char target = 'a';
    cout<<nextGreatestLetter(letters, target)<<endl;
    return 0;
}