#include <iostream>
#include <string>
using namespace std;

string test(int range)
{ 
    string ans = "";
    int first = 0, second = 1, fibonicci = 0;
    cout << "Fibonacci Series upto " << range << " Terms "<< endl;
    for ( int c = 0 ; c < range ; c++ ) {
        if ( c <= 1 ){
            fibonicci = c;
            ans += to_string(fibonicci) + " ";
        } else {
            fibonicci = first + second;
            first = second;
            second = fibonicci;
            ans += to_string(fibonicci) + " ";
        }
        cout << fibonicci <<" ";
    }
    return ans;
}

int main() {
    cout << test(10);
}