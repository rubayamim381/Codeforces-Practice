//============================================================================
// Codeforces Round 993 (Div. 4)
// Author      : Rubaya Mim
// Copyright   : Your copyright notice
//============================================================================

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) for(auto& x:a) cin>>x
#define output(a) for(auto p:a) cout<<p
#define newLine cout<<endl

const int N = 1e5+10;
int arr[N];

ll power(ll x,ll y)
{
	if(y==0)
		return 1;

	return x*power(x,y-1);
}

void solve()
{
	string strA;
	cin>>strA;

	int len = strA.size();
	string strB;

	// reverse and store the first string to the second string
	for(int i=len-1; i>=0; i--) {
		strB.push_back(strA[i]);
	}

	//	now replace the second string characters
	for(int i=0; i<len; i++) {
		if(strB[i] == 'p')
			strB[i] = 'q';
		else if(strB[i] == 'q')
			strB[i] = 'p';
	}

	output(strB);
	newLine;
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
