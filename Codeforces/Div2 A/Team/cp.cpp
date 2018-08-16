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

	int n, cont, cmt, ans=0;

	scanf("%d", &n);
	while(n--){
		cmt=0;
		for(int i=0;i<3;++i){
			scanf("%d", &cont);
			if(cont==1)
				++cmt;
		}
		if(cmt>=2)
			++ans;
	}

	printf("%d\n", ans);

	return 0;

}