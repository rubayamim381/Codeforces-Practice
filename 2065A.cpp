#include<iostream>
using namespace std;

#define ll long long int
#define test int t; cin>>t; while(t--)
#define input(a) for(auto& x:a) cin>>x
#define output(a) for(auto p:a) cout<<p
#define newLine cout<<endl

void solve()
{
	string word;
	cin>> word;
	
	int len = word.size();
	char lastFirstChar = word[len-1];
	char lastSecChar = word[len-2];
	if(lastFirstChar == 's' && lastSecChar == 'u')
	{
		word.pop_back();
		word.pop_back();
		word.push_back('i');
	}
	
	cout << word << endl;
	
	
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
