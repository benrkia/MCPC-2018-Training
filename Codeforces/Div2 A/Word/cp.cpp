#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e5+5;

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin>>s;
	int n, low=0;

	for(n=0;s[n]!='\0';++n)
		if(s[n]>96) ++low;

	if(n-low > low) transform(all(s), s.begin(), ::toupper);
	else transform(all(s), s.begin(), ::tolower);

	cout<<s<<endl;

	return 0;

}