#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a[3];
		cin >> a[0] >> a[1] >> a[2];
		// sort the array in non-decreasing order
		sort(a, a + 3);
		// calculate the sum of the two largest numbers
		cout << a[1] + a[2] << '\n';
	}
	return 0;
}
