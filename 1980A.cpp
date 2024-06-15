//============================================================================
// Name        : 1980A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
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
#define output_mp(mp) for(auto p:mp) cout<<p.first<<" "<<p.second<<endl
#define el cout<<endl

ll power(ll x, ll y) {
	if (y == 0)
		return 1;

	return x * power(x, y - 1);
}

void solve() {

	unordered_map<char, int> umap = {
			{ 'A', 0 },
			{ 'B', 0 },
			{ 'C', 0 },
			{ 'D', 0 },
			{ 'E', 0 },
			{ 'F', 0 },
			{ 'G', 0 }
	};
	char e;
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> e;
		umap[e]++;
	}

	int min_probs = 0;

	for (auto x : umap) {
		if (x.second < m)
			min_probs += m - x.second;
	}

	cout << min_probs << endl;

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
