#include <iostream>
using namespace std;

class Math {
public:
    // 1. Two integers
    int add(int a, int b) {
        return a + b;
    }

    // 2. Three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // 3. Two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;

    cout << m.add(2, 3) << endl;        // calls int version
    cout << m.add(2, 3, 4) << endl;     // calls 3-int version
    cout << m.add(2.5, 3.5) << endl;    // calls double version

    return 0;
}