//============================================================================
// Name        : 1985E.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
#include<cstdint>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define test int t; cin>>t; while(t--)
#define input(a) int e; for(int i=0; i<n; i++) cin>>e, a.push_back(e)
#define output(a) for(auto p:a) cout<<p<<" "
#define el cout<<endl

ll power(ll x, ll y) {
	if (y == 0)
		return 1;

	return x * power(x, y - 1);
}

void solve() {
	int x, y, z;
	ll k;
	cin >> x >> y >> z >> k;

	ll max_vol = 0;

	for (int a = 1; a <= x; a++) {
		if (k % a == 0) {
			for (int b = 1; b <= y; b++) {
				if (k % (a * b) == 0) {
					ll c = k / (a * b);
					if (a <= x and b <= y and c <= z) {
						ll vol = (x - a + 1) * (y - b + 1) * (z - c + 1);
						max_vol = max(max_vol, vol);
					}
				}
			}
		}
	}

	cout << max_vol << endl;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	test
solve	();

}

