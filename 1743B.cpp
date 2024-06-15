#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++)
			if (i % 2)
				cout << i << " ";
		for (int i = n; i >= 1; i--)
			if (i % 2 == 0)
				cout << i << " ";

		cout << "\n";
	}
}
