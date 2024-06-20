//============================================================================
// Name        : 1976B.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define test int t; cin>>t; while(t--)
#define input(a) int e; for(int i=0; i<n; i++) cin>>e, a.push_back(e)
#define output(a) for(auto p:a) cout<<p<<" "
#define el cout<<endl

const int N = 1e5 + 10;

ll power(ll x, ll y) {
	if (y == 0)
		return 1;

	return x * power(x, y - 1);
}

void solve() {
	int n;
	cin >> n;

	vector<ll> a(n, 0), b(n+1, 0);

	for (auto &x : a) {
		cin >> x;
	}

	for (auto &y : b) {
		cin >> y;
	}

	ll min_op = 0, ext_mn = 1e18;

	for (int i = 0; i < n; i++) {
		min_op += abs(a[i] - b[i]);
		ext_mn = min({ ext_mn, abs(a[i] - b[n]), abs(b[i] - b[n]) });

		ll mn1 = min(a[i], b[i]);
		ll mx2 = max(a[i], b[i]);

		if (b[n] >= mn1 && b[n] <= mx2)
			ext_mn = 0;
	}

	cout << min_op + 1 + ext_mn;
	el;
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

