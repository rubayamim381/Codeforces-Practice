#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) for(auto& x:a) cin>>x
#define output(a) for(auto p:a) cout<<p
#define newLine cout<<endl

void solve()
{
	string word;
	cin >> word;

	bool same = false;

	for(int i = 1; !same && i < word.size(); i++) {
		same = (word[i-1] == word[i]);
	}

	cout << ( same ? 1 : word.size()) << endl;
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
