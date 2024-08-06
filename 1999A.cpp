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
	int n;
	cin >> n;

	int sum = 0;

	while (n > 0) {
		int digit = n % 10;
		n /= 10;
		sum += digit;
	}

	cout << sum;
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
