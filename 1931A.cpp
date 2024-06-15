//============================================================================
// Name        : 1931A.cpp
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
#include<cstdint>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) for(int i=0; i<n; i++) cin>>e, a.push_back(e);
#define output(a) for(auto p:a) cout<<p<<endl;

void solve()
{
	int n;
	cin>>n;

	if(n>52)
		cout<<char(n+(96-52))<<"zz"<<endl;
	else if(n>27)
		cout<<"a"<<char(n+(96-27))<<"z"<<endl;
	else if(n<29)
		cout<<"aa"<<char(n+(96-2))<<endl;
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
