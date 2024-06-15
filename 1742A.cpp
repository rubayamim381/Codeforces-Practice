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
    int ar[3];
    int s=3;

    cin>>ar[0]>>ar[1]>>ar[2];

    sort(ar, ar+s);

    if(ar[0]+ar[1]==ar[2]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
