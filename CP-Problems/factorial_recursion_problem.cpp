#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
	if(n == 0) {
		return 1;
	}
	int result;
	return result = factorial(n - 1) * n;
}

int main() {
	int n; cin >> n;
	 cout << factorial(n) << '\n';
}