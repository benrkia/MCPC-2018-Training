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

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n, o_r, l, r, grps=1;
	scanf("%d%*1d%1d", &n, &o_r);

	while(--n){
		scanf("%1d%1d", &l, &r);
		if(l==o_r)
			++grps;
		o_r = r;
	}

	printf("%d\n", grps);

	return 0;

}