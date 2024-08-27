// https://open.kattis.com/problems/fizzbuzz
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,n;
    cin >> x >> y >> n;
    for (int i = 1; i <= n; i++) {
        if (i%x == 0) {
            if (i%y == 0) {
                cout << "FizzBuzz\n";
            } else {
                cout << "Fizz\n";
            }
        } else {
            if (i%y == 0) {
                cout << "Buzz\n";
            } else {
                cout << i << "\n";
            }
        }
    }
}