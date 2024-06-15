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
#include<numeric>

using namespace std;

#define ll long long int
#define test ll t; cin>>t; while(t--)

void solve()
{
    ll n, e, ans;
    cin>>n;
    vector<ll>a,b, b2;

    for(ll i=0; i<n; i++)
    {
        cin>>e;
        a.push_back(e);
    }

    for(ll i=0; i<n; i++)
    {
        cin>>e;
        b.push_back(e);
    }

    sort(b.begin(), b.end());

    ll sum = 0;
	for(ll i = 0; i < n; i++) sum += a[i];
	for(ll i = 0; i < n-1; i++) sum += b[i];


    cout<<sum<<endl;


}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
