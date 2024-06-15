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
    int n;
    cin>>n;

    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);
    bool flag=1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            flag=0;
            break;
        }
    }

    (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    solve();

}
