#include <iostream>
#include <string>
using namespace std;

// https://stackoverflow.com/questions/191757/how-to-concatenate-a-stdstring-and-an-int
string test(int num) {
  string ans = "";
  for (int i = 1; i <= 10; i++) {
      ans += to_string(num) + " x " + to_string(i) + " = " + to_string(num * i) + "\n";
  }
  return ans;
}

int main() {
    cout << test(5) << endl;
}