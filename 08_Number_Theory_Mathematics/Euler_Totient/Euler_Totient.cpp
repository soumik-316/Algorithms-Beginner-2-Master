#include <bits/stdc++.h>
using namespace std;

// Counts integers k in [1, x] such that gcd(k, x) == 1.
long long eulerTotient(long long x) {
    if (x == 0) {
        return 0;
    }

    long long result = x;

    for (long long prime = 2; prime <= x / prime; prime++) {
        if (x % prime == 0) {
            result -= result / prime;

            while (x % prime == 0) {
                x /= prime;
            }
        }
    }

    if (x > 1) {
        result -= result / x;
    }

    return result;
}

// Computes phi(i) for every i in [1, n] using a totient sieve.
vector<int> eulerTotients(int n) {
    vector<int> phi(n + 1);
    iota(phi.begin(), phi.end(), 0);

    for (int prime = 2; prime <= n; prime++) {
        if (phi[prime] == prime) {
            for (int multiple = prime; multiple <= n; multiple += prime) {
                phi[multiple] -= phi[multiple] / prime;
            }
        }
    }

    return phi; // O(n log log n) time and O(n) space
}

int main() {
    long long x = 10;
    cout << "Number of integers relatively prime to " << x << ": "
         << eulerTotient(x) << '\n';

    vector<int> phi = eulerTotients(10);
    cout << "Totients from 1 to 10: ";
    for (int value = 1; value <= 10; value++) {
        cout << phi[value] << (value == 10 ? '\n' : ' ');
    }
}