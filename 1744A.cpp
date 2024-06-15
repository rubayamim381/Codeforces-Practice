#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int ar[n];
       for(int i=0;i<n;i++)
        cin>>ar[i]; //integers
       string s;
       cin>>s; //chars
       string ans="YES";


       map<int,char>mp;
       for(int i=0;i<n;i++)
       {
           if(mp[ar[i]] != s[i]) //2 3 2 4 1 cacta  aaab
            //1 2 3 4
            //a c a t

            //1 2 2 1
            //aaab
            //1 a 2 a
           {
               //cout<<mp[ar[i]]<<" "<<s[i]<<endl;
               if(mp[ar[i]]>='a' and mp[ar[i]]<='z')
               {
                   ans="NO";
                   break;
               }else
               {
                   mp[ar[i]]=s[i];
               }
           }
       }

       cout<<ans <<endl;
    }
}

