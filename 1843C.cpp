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
	ll n, max_sum=0;
	cin>>n;

	while(1 <= n){
		max_sum += n;
		n /= 2;
	}

	cout<<max_sum<<endl;
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
