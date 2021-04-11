#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	// if 'n' is divisible by 'm', then take the exact quotient
	// otherwise, add 1 to it before taking (ceiling function)
	int factor = (n % m == 0 ? n / m : n / m + 1);
	// calculate the remainder ('n' mod 'm')
	int temp = n % m;
	// there will be two cases for this problem
	// the if-else statement below will handle it
	if (n % m == 0) {
		// first case: 'n' is divisible by 'm'
		// print the quotient of 'n' divided 'm', for 'm' times
		for (int i = 0; i < m; i++) {
			cout << factor << " ";
		}
	} else {
		// second case: 'n' is NOT divisible by 'm'
		// print the quotient of 'n' divided 'm' minus 1
		// for ('m' - 'temp') times
		for (int i = 0; i < max(0, m - temp); i++) {
			cout << factor - 1 << " ";
		}
		// then, print the original quotient of 'n' divided by 'm'
		// for 'temp' times
		for (int i = 0; i < temp; i++) {
			cout << factor << " ";
		}
	}
	cout << '\n';
	return 0;
}
