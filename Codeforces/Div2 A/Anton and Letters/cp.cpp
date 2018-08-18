#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()
#define fi first
#define se second
#define clr(v, d) memset(v, d, sizeof(v))

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long int ll;
typedef long double Double;
const int MAXN = 1e4+5;

bool vis[26];

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ans=0;
	string s;
	getline(cin, s);
	for(int i=1;i<s.size();i+=3){
		if(s[i]!='}' && !vis[s[i]-'a']){
			vis[s[i]-'a'] = true;
			++ans;
		}
	}

	cout<<ans<<endl;

	return 0;
}