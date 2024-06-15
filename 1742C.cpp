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
    int r=0, b=0;
    char m[8][8];

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
            cin>>m[i][j];
        //cout<<endl;
    }

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            //for red
            if(m[i][j]=='R')
                r++;
            else
                r=0;
            if(r==8)
            {
                cout<<"R"<<endl;
                break;
            }
        }

        if(r==8)
            break;
    }

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            //for blue
            if(m[j][i]=='B')
                b++;
            else
                b=0;

            if(b==8)
            {
                cout<<"B"<<endl;
                break;
            }
        }
        if(b==8)
            break;
    }


}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    solve();

}

/*
4
....B...
....B...
....B...
RRRRRRRR
....B...
....B...
....B...
....B...
RRRRRRRB
B......B
B......B
B......B
B......B
B......B
B......B
RRRRRRRB
RRRRRRBB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
........
........
........
RRRRRRRR
........
........
........
........
*/
