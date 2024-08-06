//============================================================================
// Name        : 1991A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) for(auto& x:a) cin>>x
#define output(a) for(auto p:a) cout<<p<<" "
#define el cout<<endl

const int N = 1e5 + 10;
int arr[N];

ll power(ll x, ll y) {
	if (y == 0)
		return 1;

	return x * power(x, y - 1);
}

void solve() {
	int n, m, s;
	cin >> n >> s >> m;

	int prevR = 0, flag = 0;
	for (int i = 1; i <= n; i++) {
		int l, r;
		cin >> l >> r;

		if (l - prevR >= s) {
			flag = 1;
		}

		prevR = r;
	}

	if (m - prevR >= s)
		flag = 1;

	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}

