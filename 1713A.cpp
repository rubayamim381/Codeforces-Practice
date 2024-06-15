#include<bits/stdc++.h>
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
using namespace std;

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n, move=0, x, y;
        cin>>n;
        while(n--)
        {
            cin>>x>>y;
            if(x==0)
            {
                move += abs(y*2);
            }else if(y==0) move += abs(x*2);
            else move += 0;
        }

        cout<<move<<endl;
    }

}
