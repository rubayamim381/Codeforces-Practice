#include<iostream>
#include<bits/stdc++.h>
#include<sstream>

using namespace std;

int test(string a, int n)
{
    int max = a[0];
    for (int i=1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];

    }
    for(int i=2; i<n; i++)
    {
        if(!(a[i]>a[i-1] && a[i]>a[i+1]))
        {

        }

    }
}


int main()
{
    int t, n,k, store;

    string a;

    cin >> t;
    if(t>=1 && t<=100)
    {
        for(int i=0; i<t; i++)
        {
            cin >> n >> k; //where n= length of an array ad k= peak value
        }

        for(int j=0; j<n; j++)
        {
            if((n>=1 && n<=100) && (k>=0 && k<=n))
            {
                store = n-j;
                //cout << store << " ";
            }
            stringstream ss;
            ss << store;
            a += ss.str();

            cout << a[j];
            cout << " ";
        }


        // cout << n;
    }
}
