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

	int n, ans=0;
	scanf("%d", &n);
	vii vect(n);

	for(int i=0;i<n;++i)
		scanf("%d%d", &vect[i].fi, &vect[i].se);

	for(int i=0;i<n;++i)
		for(int j=i+1;j<n;++j){
			ans += (vect[i].fi == vect[j].se);
			ans += (vect[i].se == vect[j].fi);
		}

	printf("%d\n", ans);

	return 0;

}