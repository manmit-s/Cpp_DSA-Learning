#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> distCandies(num_people);
        int i = 0, j = 0;
        while(candies > 0){
            int give = min(candies, j+1);
            distCandies[i] += give;
            candies = candies - give;
            j++;
            i = (i+1)%num_people; 
        }
        return distCandies;
    }
};


int main(){
    
    return 0;
}