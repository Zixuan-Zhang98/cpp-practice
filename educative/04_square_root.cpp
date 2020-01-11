#include <iostream>
#include <cmath>
using namespace std;

float test(float a, float b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main() {
    cout << "The result is: " << test(4.5, 5.5) << endl;
}

