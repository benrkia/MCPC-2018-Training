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

	int n, h, w=0, p;
	scanf("%d%d", &n, &h);

	for(int i=0;i<n;++i){
		scanf("%d", &p);
		if(p>h)
			++w;
		++w;
	}

	printf("%d\n", w);

	return 0;

}