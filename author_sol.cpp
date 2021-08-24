#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int r = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		// add the pages per day to 'r'
		r += x;
		// output the quotient of 'r' and 'm' (no. of pages if we divide 'r' names in 'm' pages)
		cout << r / m << " ";
		// calculate the remaining names (if there are)
		r %= m;
	}
	cout << '\n';
	return 0;
}
