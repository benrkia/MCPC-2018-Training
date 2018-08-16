#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e3+5;

int a[MAXN];

int main(){
	// freopen("input.in", "r", stdin);

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n, S, D, l, r;
	bool is_s = true;
	scanf("%d", &n);
	for(int i=0;i<n;++i)
		scanf("%d", a+i);

	S = D = l = 0;
	r = n-1;

	while(l <= r){
		if(a[l]>a[r]) { n =a[l]; ++l; }
		else { n=a[r]; --r; }
		if(is_s) S+=n;
		else D+=n;
		is_s = !is_s;
	}

	printf("%d %d\n", S, D);

	return 0;

}