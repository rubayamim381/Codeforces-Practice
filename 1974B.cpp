#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) for(auto& x:a) cin>>x
#define output(a) for(auto p:a) cout<<p;
#define output_mp(mp) for(auto p:mp) cout<<p.first<<" "<<p.second<<" "
#define el cout<<endl

const int N = 1e5 + 10;
int arr[N];

ll power(ll x, ll y) {
	if (y == 0)
		return 1;

	return x * power(x, y - 1);
}

char match(map<char, int> mp, int value) {
	for (auto &it : mp) {
		if (it.second == value) {
			return it.first;
		}
	}
}

void solve() {
	int n;
	cin >> n;

	vector<char> v(n, 0);
	map<char, int> mp;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		mp[v[i]];
	}

	int j = 0;
	for (auto x : mp) {
		mp[x.first] = j++;
	}

	int maplen = mp.size();

	for (int i = 0; i < n; i++) {
		int val = maplen - mp[v[i]] - 1;
		v[i] = match(mp, val);
	}

	output(v);
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
