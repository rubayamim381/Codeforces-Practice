//============================================================================
// Name        : 1996C.cpp
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
char a[N];
char b[N];

ll power(ll x, ll y) {
	if (y == 0)
		return 1;

	return x * power(x, y - 1);
}

void solve() {
	int n, q;
	cin >> n >> q;

	string a, b;
	cin >> a >> b;

	while (q--) {
		int l, r;
		cin >> l >> r;

		string tempA, tempB;
		tempA = a;
		tempB = b;

		int minOp = 0;

		vector<int> fa(26, 0), fb(26, 0);

		for (int i = l - 1; i < r; i++)
			fa[tempA[i] - 97]++, fb[tempB[i] - 97]++;

		for(int i=0; i<26; i++) {
			minOp += max(0, fa[i]-fb[i]);
		}

		cout << minOp << endl;
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
//		cout << "t: " << t; el;
		solve();
	}
}


//zzde
//azbe
//1 3
//1 4

//a=0, b=0, z=2, d=1
//a=1, b=1, z=1, d=0
