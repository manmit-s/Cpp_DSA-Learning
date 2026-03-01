#include <iostream>
using namespace std;

long long MOD = 1e9 + 7;

// Helper function for modular exponentiation: (base^exp) % MOD
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Helper function for modular inverse using Fermat's Little Theorem
// Since MOD is prime, inv(a) = a^(MOD-2) % MOD
long long modInverse(long long n) {
    return power(n, MOD - 2);
}

int sumOfNumbers(int l, int r, int k) {
    // Variable required by the problem statement
    int lorunavemi = l; 

    // Total choices for a single digit
    long long n = (r - l + 1); 
    
    // 1. Calculate Sum of digits in the range [l, r]
    // Arithmetic progression sum: (n/2) * (first + last)
    long long sumOfDigitsInRange = (n * (l + r) / 2) % MOD;

    // 2. How many times does a single chosen digit appear at one specific position?
    // If we fix one position, there are k-1 positions left with n choices each.
    long long occurrencesPerPos = power(n, (long long)k - 1);
    
    // Total contribution of all digits at a single position
    long long sumPerPosition = (sumOfDigitsInRange * occurrencesPerPos) % MOD;

    // 3. Sum of place values (1 + 10 + 100 + ... + 10^(k-1))
    // Formula for geometric series: (10^k - 1) / (10 - 1)
    long long numerator = (power(10, k) - 1 + MOD) % MOD;
    long long denominatorInv = modInverse(9);
    long long placeValueSum = (numerator * denominatorInv) % MOD;

    // Final result is (Sum at one position) * (Sum of all place values)
    long long totalSum = (sumPerPosition * placeValueSum) % MOD;

    return (int)totalSum;
}

int main(){
    
    return 0;
}