#include <iostream>
using namespace std;

string mergeNearbyDuplicates(string input, int k){
    // Work on a copy of the input string
    string result = input;
    
    bool merged = true;
    
    // Keep merging until no more merges are possible
    while (merged){
        merged = false;
        int n = result.size();
        
        // Scan from left to right
        for (int i = 0; i < n; i++){
            char currentChar = result[i];
            bool mergedPair = false;
            
            // Look ahead within distance k
            for (int j = i + 1; j < n && j - i <= k; j++) {
                if (result[j] == currentChar){
                    // Merge by removing the right character
                    result.erase(result.begin() + j);
                    merged = true;
                    mergedPair = true;
                    break; // Restart after modification
                }
            }
            
            if (mergedPair) break; // Restart scanning from beginning
        }
    }
    
    return result;
}


int main(){
    
    return 0;
}