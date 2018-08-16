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

	int a, b, y=0;
	scanf("%d%d", &a, &b);

	while(a<=b){
		a*=3;
		b*=2;
		++y;
	}

	printf("%d\n", y);

	return 0;

}