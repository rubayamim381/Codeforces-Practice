#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) for(auto& x:a) cin>>x //must initialize the vector with the correct size.
#define output(a) for(auto p:a) cout<<p
#define newLine cout<<endl

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    input(a);

    sort(a.begin(), a.end());

    int leftPtr = 0, rightPtr = a.size()-1;
    int score = 0;

    while(leftPtr < rightPtr)
    {
        int match = a[leftPtr] + a[rightPtr];
        if(match == k)          score++, leftPtr++, rightPtr--;
        else if( match < k )    leftPtr++;
        else if(match > k)      rightPtr--;
    }

    cout << score << endl;

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

