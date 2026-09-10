#include <iostream>
using namespace std;

int fib(int n) {
    if (n < 2) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int a;

    cout << "Fibonacci Series Using Recursion" << endl;
    cout << "Enter Number: ";
    cin >> a;

    for (int i = 0; i < a; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}
