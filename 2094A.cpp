#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) for(auto& x:a) cin>>x //must initialize the vector with the correct size.
#define output(a) for(auto p:a) cout<<p
#define newLine cout<<endl

void solve()
{
    string s;
    getline(cin>>ws, s);

    stringstream ss(s);
    string output, word;
    while(ss >> word)
    {
        output.push_back(word[0]);
    }
    cout << output <<endl;
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

