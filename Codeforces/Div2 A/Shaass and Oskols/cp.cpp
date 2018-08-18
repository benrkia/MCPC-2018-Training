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

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a[105], m, x, y;

	scanf("%d\n", &n);
	for(int i=1;i<=n;++i)
		scanf("%d", a+i);

	scanf("%d", &m);
	while(m--){
		scanf("%d%d", &x, &y);
		a[x+1] += a[x]-y;
		a[x-1] += y-1;
		a[x] = 0;
	}

	for(int i=1;i<=n;++i)
		printf("%d\n", a[i]);

	return 0;

}