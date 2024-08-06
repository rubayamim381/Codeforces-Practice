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
	int a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;

	int winCount = 0;
	if (a1 >= b1 && a2 > b2 || a1 > b1 && a2 >= b2)
		winCount++;
	if (a1 >= b2 && a2 > b1 || a1 > b2 && a2 >= b1)
		winCount++;

	cout << winCount * 2 << endl;

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
