#include<bits/stdc++.h>
#define vt vector
#define st string
#define ll long long int
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
        int n,m;
        cin>>n>>m;
        char a[n], b[m];

        for(int p=0; p<n; p++)
        {
            cin>>a[p];
        }


        for(int w=0; w<m; w++)
        {
            cin>>b[w];
        }

        int j=0, f=0;
        for(int i=0; i<n-1; i++)
        {
            if(b[j]=='0')
            {
                a[i+1]=min(a[i],a[i+1]);
                cout<<"min: "<<min(a[i],a[i+1]);
                if(b[j]==a[i+1])
                    f=1;
                else
                {
                    f=0;
                   // break;
                }
            }
            else if(b[j]=='1')
            {
                a[i+1]=max(a[i],a[i+1]);
                cout<<"max: "<<max(a[i],a[i+1]);
                if(b[j]==a[i+1])
                    f=1;
                else
                {
                    f=0;
                   // break;
                }
            }
            j++;
        }

        (f) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

}

/*
10
6 2
001001
11
6 2
110111
01
6 2
000001
11
6 2
111111
01
8 5
10000101
11010
7 4
1010001
1001
8 6
01010010
010010
8 4
01010101
1001
8 4
10101010
0110
7 5
1011100
11100
*/
