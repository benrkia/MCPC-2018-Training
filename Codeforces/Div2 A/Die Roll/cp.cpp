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

	int y, w;
	cin>>y>>w;
	y = max(y, w);

	double ans = 6 - y + 1;

	if(ans == 6)
		printf("1/1\n");
	else if(ans == 2)
		printf("1/3\n");
	else if(ans == 3)
		printf("1/2\n");
	else if(ans == 4)
		printf("2/3\n");
	else
		printf("%.0lf/6\n", ans);

	return 0;

}