//============================================================================
// Name        : 1980B.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
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
	int n, f, k, e;
	cin >> n >> f >> k;

	vector<int> cubes;

	for (int i = 0; i < n; i++) {
		cin >> e;
		cubes.push_back(e);
	}

	int fav_cube = cubes[f - 1];

	sort(cubes.rbegin(), cubes.rend());

	int count_fav_cube = count(cubes.begin(), cubes.begin() + k, fav_cube);
	int count_total_fav_cube = count(cubes.begin(), cubes.end(), fav_cube);

	string res = (count_fav_cube == count_total_fav_cube) ? "YES" :
			(count_fav_cube == 0) ? "NO" : "MAYBE";

	cout << res;
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
