#include<iostream>
#include<stdio.h>
#include <sstream>
#include <cstdio>
#include<fstream>
#include<algorithm>
#include<vector>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>

using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define rtn return
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

void solve()
{
    ll n,m;
    cin>>n>>m;
    if(n==1 || m==1)
    {
        cout<<n<<" "<<m<<endl; rtn;
    }
    if(n<4 && m<4)
    {
        cout<<n-1<<" "<<m-1<<endl; rtn;
    }
    cout<<n<<" "<<m<<endl;
}
int main()
{
    fast;
    test
    solve();
    rtn 0;
}


