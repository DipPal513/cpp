#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= n; ++i) { // Check divisors up to the square root of n
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    // Take input from user
    cout << "Enter a number: ";
    cin >> n;

    // Check if the number is prime
    if (isPrime(n)) {
        cout << "The number is a prime number" << endl;
    } else {
        cout << "The number is not a prime number" << endl;
    }

    return 0;
}
