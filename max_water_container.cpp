#include <iostream>
#include <vector>
using namespace std;

//Time Complexity O(n)
int maxArea(vector<int>& height) {
        int ht = 0, width = 0, maxArea = 0, i = 0, j = height.size() - 1;
        while (i < j){
            ht = min(height[i] , height[j]);
            width = j - i;
            maxArea = max(maxArea, (ht * width));
            height[i] < height[j] ? i++ : j--;
        }
        return maxArea;
    }

int main(){
    // vector <int> heights = {1,8,6,2,5,4,8,3,7};
    vector <int> heights = {8,7,2,1};
    cout<<maxArea(heights)<<" sq units";
    return 0;
}