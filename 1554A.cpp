#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long int n, a, i;
    cin >> t;

    if(t<1)
        exit(1);
    else
    {
        while(t--)
        {
            cin >> n;
            if(n>=2 && n<=100000)
            {
                for(i=0; i<n; i++)
                {
                    cin >> a[i];
                    cout << "1";
                }
            }
            else
                exit(1);

        }
    }
}
