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

int gcd(int a, int b) // The function runs recursive in nature to return GCD
{
    if (b == 0) // if b becomes 0 return a
        return a;
    return gcd(b, a%b); // divide to a by b to make smaller number
}

void solve()
{
    ll n, mx2=0, mx1;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(gcd(a[i], a[j])==1)
            {
                mx1=i+j+2;
                mx2=max(mx1, mx2);
            }
        }
    }

    if(mx2==0) cout<<"-1"<<endl;
    else cout<<mx2<<endl;
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
