//============================================================================
// Name        : 1857A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include <unordered_map>
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

	int n, e, sum=0;
	cin>>n;

	vector<int> arr;

	for(int i=0; i<n; i++){
		cin>>e;
		sum += e;
	}

	(sum%2 == 0) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;

	while(t--)
	solve();

	return 0;

}
