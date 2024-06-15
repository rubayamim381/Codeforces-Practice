//============================================================================
// Name        : 1985D.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
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
	int row, col;
	cin>>row>>col;

	char grid[row][col];

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin >> grid[i][j];
		}
	}

	int sum_row_pos = 0, sum_col_pos=0, total_hash = 0 ;

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(grid[i][j] == '#')
			{
				sum_row_pos += i+1;
				sum_col_pos += j+1;
				total_hash++;
			}
		}
	}

	cout<< sum_row_pos / total_hash << " " << sum_col_pos / total_hash;
	el;

}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
