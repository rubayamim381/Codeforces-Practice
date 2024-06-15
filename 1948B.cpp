//============================================================================
// Name        :
// Author      : rubayamim
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in count++, Ansi-style
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
#define nl <<endl
#define test int t; cin>>t; while(t--)
#define input(a) for(int i=0; i<n; i++) cin>>e, a.push_back(e);
#define output(a) for(auto p:a) cout<<p<<endl;

ll power(ll x,ll y)
{
	if(y==0)
		return 1;

	return x*power(x,y-1);
}

vector<int> convertDigits(int num) {

	vector<int> digits;

	while(num > 0) {
		digits.push_back(num%10);
		num /= 10;
	}

	return digits;
}

void solve()
{
	int n;
	cin>>n;

	while(n--) {
		short int val;
		cin>>val;

		if(val > 9) {

		}
	}
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
