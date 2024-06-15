//============================================================================
// Name        : 1843A.cpp
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

void solve(){
	int n,e;
	cin>>n;
	vector<int> a;

	for(int i=0; i<n; i++)
	{
		cin>>e;
		a.push_back(e);
	}

	int len=n-1;

	sort(a.begin(), a.end());

	int max_colors = 0;

	for(int i=0; i<=len; i++){
		max_colors += abs(a[len]-a[i]);
		len--;
	}

	cout<<max_colors<<endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    solve();

}
