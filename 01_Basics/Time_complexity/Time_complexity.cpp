#include <bits/stdc++.h>
using namespace std;

int constantTime() {
	return 42; // O(1)
}

int logarithmicTime(int n) {
	int steps = 0;
	for (int value = n; value > 1; value /= 2) {
		steps++;
	}
	return steps; // O(log n)
}

int squareRootTime(int n) {
	int steps = 0;
	for (int value = 1; value * value <= n; value++) {
		steps++;
	}
	return steps; // O(sqrt n)
}

int linearTime(int n) {
	int steps = 0;
	for (int i = 0; i < n; i++) {
		steps++;
	}
	return steps; // O(n)
}

int linearithmicTime(int n) {
	int steps = 0;
	for (int i = 0; i < n; i++) {
		for (int value = n; value > 1; value /= 2) {
			steps++;
		}
	}
	return steps; // O(n log n)
}

int quadraticTime(int n) {
	int steps = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			steps++;
		}
	}
	return steps; // O(n^2)
}

int cubicTime(int n) {
	int steps = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				steps++;
			}
		}
	}
	return steps; // O(n^3)
}

int polynomialTime(int n, int degree) {
	int steps = 1;
	for (int power = 0; power < degree; power++) {
		steps *= n;
	}
	return steps; // O(n^k), where k is fixed
}

int exponentialTime(int n) {
	if (n == 0) {
		return 1;
	}
	return exponentialTime(n - 1) + exponentialTime(n - 1);
	// O(2^n)
}

int factorialTime(int n) {
	if (n <= 1) {
		return 1;
	}

	int permutations = 0;
	for (int i = 0; i < n; i++) {
		permutations += factorialTime(n - 1);
	}
	return permutations; // O(n!)
}

int main() {
	int n = 10;

	cout << "O(1): " << constantTime() << '\n';
	cout << "O(log n): " << logarithmicTime(n) << '\n';
	cout << "O(sqrt n): " << squareRootTime(n) << '\n';
	cout << "O(n): " << linearTime(n) << '\n';
	cout << "O(n log n): " << linearithmicTime(n) << '\n';
	cout << "O(n^2): " << quadraticTime(n) << '\n';
	cout << "O(n^3): " << cubicTime(n) << '\n';
	cout << "O(n^k), k = 4: " << polynomialTime(n, 4) << '\n';
	cout << "O(2^n), n = 5: " << exponentialTime(5) << '\n';
	cout << "O(n!), n = 5: " << factorialTime(5) << '\n';
}