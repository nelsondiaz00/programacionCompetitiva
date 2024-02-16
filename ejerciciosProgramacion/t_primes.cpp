/*B. T-primes
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.

You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.

Input
The first line contains a single positive integer, n (1 ≤ n ≤ 105), showing how many numbers are in the array. The next line contains n space-separated integers xi (1 ≤ xi ≤ 1012).

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is advised to use the cin, cout streams or the %I64d specifier.

Output
Print n lines: the i-th line should contain "YES" (without the quotes), if number xi is Т-prime, and "NO" (without the quotes), if it isn't.*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; // Si es divisible por i o i+2, no es primo.
        }
    }
    return true;
}


int main() {


    int cantidadVeces;
    long long n;
    double raiz;
    cin >> cantidadVeces;
    for (int i = 0; i < cantidadVeces; ++i) {
        cin >> n;
        raiz = sqrt(n);
        if (raiz - floor(raiz)) {
            cout << "NO" << endl;
        } else {
            if (isPrime(raiz)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }


    }
}
