#include <iostream>
using namespace std;

class Solution {
public:
    bool canAliceWin(int n) {
        int drop = 10;
        bool aliceTurn = true;

        while (true) {
            if (n < drop){
                return !aliceTurn;   // If Alice’s turn → false, else true
            }

            // Perform the move
            n -= drop;
            drop--;

            // Switch turn
            aliceTurn = !aliceTurn;
        }
    }
};


int main(){
    
    return 0;
}