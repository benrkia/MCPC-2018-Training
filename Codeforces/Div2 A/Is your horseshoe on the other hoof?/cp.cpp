#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()
#define fi first
#define se second

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long int ll;
typedef long double Double;
const int MAXN = 1e4+5;

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<int, int> mp;
	mp.clear();
	int c;
	for(int i=0;i<4;++i){
		scanf("%d", &c);
		++mp[c];
	}

	printf("%d\n", 4-Size(mp));

	return 0;

}