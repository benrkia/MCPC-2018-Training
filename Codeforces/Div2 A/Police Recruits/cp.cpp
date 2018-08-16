#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e3+5;

int main(){
	// freopen("input.in", "r", stdin);

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n, ans, rec, p;
	scanf("%d", &n);

	ans = rec = 0;

	while(n--){
		scanf("%d", &p);
		if(p==-1){
			if(rec>0)
				--rec;
			else
				++ans;
		}else{
			rec += p;
		}
	}

	printf("%d\n", ans);

	return 0;

}