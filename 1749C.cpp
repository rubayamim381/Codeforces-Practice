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

void solve()
{
    int n, i, k, stage;
	cin >> n;
	int a[n], b[n];

	for(i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);

	for(k = 3*n; k > 0; k--)
	{
		for(i = 0; i < n; i++) b[i] = a[i];

		bool flag = 1;

		for(stage = 1; stage <= k; stage++)
		{
			int x = k - stage + 1, f = 0;
			sort(b, b+n);

			for(i = n-1; i >= 0; i--)
			{
				if(b[i] != -1 and b[i] <= x)
				{
					b[i] = -1;
					f++;
					break;
				}
			}

			if(!f)
			{
				flag = 0;
				break;
			}

			sort(b, b+n);
			for(i = 0; i < n; i++)
			{
				if(b[i] != -1)
				{
					b[i] += x;
					break;
				}
			}
		}
		if(flag) break;
	}
	cout<<k<<endl;
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
