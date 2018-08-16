#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e4+5;

int a[10];

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	int ans=0;
	
	for(int i=1;i<5;++i)
		cin>>a[i];
	
	cin>>s;

	for(int i=0;i<s.size();++i)
		ans += a[s[i]-48];

	printf("%d\n", ans);

	return 0;

}