#include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

string f, s;

int main()
{
    fast::cin >> f >> s;

    if((f.size()>=1 && f.size()<=100) && (f.size()>=1 && f.size()<=100))
    {
        if(f.size() == s.size())
        {
            for(int i=0; i<f.size(); i++)
            {
                //only counting capital letters and converting it into small letters
                if(f[i] >= 'A' && f[i]<= 'Z')
                    f[i] += -'A'+97; //update the capital letter

                if(s[i] >= 'A' && s[i] <= 'Z')
                    s[i] += -'A'+97;
            }

            if(f<s)
            {
                fast::cout << "-1\n";
            }
            else if(f>s)
            {
                fast::cout << "1\n";
            }

            else if(f==s)
            {
                fast::cout << "0\n";
            }
        }
    }
    return 0;
}
