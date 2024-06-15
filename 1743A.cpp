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



// Returns factorial of n
ll fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

ll nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void solve()
{
    int n, k;
    cin>>n;


    for(int i=0; i<n; i++)
    {
        cin>>k;
    }

    int mis_value = 10-n;
    ll ans=nCr(mis_value,2)*6;
    cout<<ans<<endl;

}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
