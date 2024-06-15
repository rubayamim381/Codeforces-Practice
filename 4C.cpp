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
#include<unordered_map>
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

ll power(ll x,ll y)
{
	if(y==0)
		return 1;

	return x*power(x,y-1);
}

unordered_map<string, int> umap;

void solve()
{
	string name;
	cin>>name;

	(umap[name] == 0) ?  cout<<"OK"<<endl : cout<<name <<umap[name]<<endl;

	umap[name]++;
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
