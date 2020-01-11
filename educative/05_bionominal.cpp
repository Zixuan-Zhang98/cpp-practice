#include <iostream>
#include <cmath>
using namespace std;

double test(double a, double b) {
  double computeSquares = pow(a, 2) + pow(b, 2);
  double computeProduct = 2 * a * b;
  double answer = computeProduct + computeSquares;

  cout << "Answer is: " << answer << endl;
  return answer;
}

int main() {
    test(2.5, 4.5);
}