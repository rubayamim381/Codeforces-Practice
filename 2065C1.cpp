#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) for(auto& x:a) cin>>x //must initialize the vector with the correct size
#define output(a) for(auto p:a) cout<<p
#define el cout<<endl

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n, 0), b(m, 0);
    input(a);
    input(b);

    bool flag = false;
    a[0] = min(b[0] - a[0], a[0]);

    for (int i=1; i<a.size(); i++)
    {
        int x = a[i];
        int y = b[0] - a[i];

        if( min(x, y) >= a[i-1])
            a[i] = min(x,y);
        else if( max(x,y) >= a[i-1])
            a[i] = max(x,y);
        else
        {
            cout << "NO"; el;
            return;
        }

    }

    cout << "YES";
    el;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

