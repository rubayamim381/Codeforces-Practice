//============================================================================
// Name        : 1976A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) int e; for(int i=0; i<n; i++) cin>>e, a.push_back(e)
#define output(a) for(auto p:a) cout<<p<<" "
#define el cout<<endl

const int N = 1e5 + 10;
char arr[N];

ll power(ll x, ll y) {
	if (y == 0)
		return 1;

	return x * power(x, y - 1);
}

void solve() {

	int n;
	cin >> n;

	bool flag = 0;
	vector<char> b;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		b.push_back(arr[i]);
	}

	sort(b.begin(), b.end());

	for (int i = 0; i < n; i++) {
		if (b[i] != arr[i]) {
			flag = 1;
			break;
		}
	}

	cout << ((flag) ? "No" : "Yes");
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

