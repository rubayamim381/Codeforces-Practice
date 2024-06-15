//============================================================================
// Name        : 1985C.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
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

ll power(ll x,ll y)
{
	if(y==0)
		return 1;

	return x*power(x,y-1);
}

void solve()
{
	ll n;
	cin>>n;

	ll sum = 0;
	int mx=0, good_arr = 0;

	for(ll i=1; i<=n; i++)
	{
		int elm;
		cin>>elm;
		sum = sum + elm;
		mx = max(mx, elm);

		if(sum - mx == mx) good_arr++;

	}

	cout<<good_arr<<endl;


}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
