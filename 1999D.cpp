#include <bits/stdc++.h>
using namespace std;

void solve(){

    string a,b;
    cin >> a >> b;

    int x = 0;
    int n = a.size();
    for(int i = 0;i<n;i++){
        if(a[i] == '?'){
            if(x == b.size()) a[i] = 'x';
            else{
                a[i] = b[x];
                x++;
            }
        }
        else{
            if(x == b.size()) continue;
            else if(a[i] == b[x]) x++;
        }

    }

    if(x == b.size()) {
        cout << "YES\n";
        cout<<a<<"\n";
    }
    else cout <<"NO\n";




}

int main()
{
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
