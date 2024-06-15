//============================================================================
// Name        : 1843A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in count++, Ansi-style
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

#define ll long long int

using namespace std;

void solve() {
	ll e, n, count, min_op=0, max_sum=0;
	cin>>n;

	for (ll i = 0; i < n; i++) {
		cin >> e;

		if (e <= 0) {
			if (e < 0)
				count = 1;
		}
		else {
			if (count == 1) {
				min_op++;
			}
			count = 0;
		}

		if (e < 0)
			e *= -1;

		max_sum += e;
	}

	if (count == 1) min_op++;

	cout << max_sum << " " << min_op << endl;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	solve();

}
