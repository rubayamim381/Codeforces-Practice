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
    int n,m,e;
    cin>>n>>m;
    vector<int> ar;

    for(int i=0; i<2*m; i++)
    {
        cin>>e;
        ar.push_back(e);
    }

    bool flag=1;
    if(n==m) cout<<"NO"<<endl;
    else if(m==1) cout<<"YES"<<endl;
    else cout<<"YES"<<endl;

}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    test
    solve();

}
