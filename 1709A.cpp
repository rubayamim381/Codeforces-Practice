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
        int x, a[3], b, c;
        bool flag=0;//4/3=1; 1/3=0
        cin>>x; //3

        for(int i=0; i<3; i++)
            cin>>a[i]; //value: index->value, 0->0, 1->1, 2->2

            //x=x;
            c=2;
            while(c--) //2,1,0
            {
                if(a[x-1]!=0)
                    //3
                    //0 1 2
                {
                    flag=1;
                    x=a[x-1];
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        if(flag==1)
            cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;
    }

}

/*
4
3
0 1 2
1
0 3 2
2
3 1 0
2
1 3 0
*/
