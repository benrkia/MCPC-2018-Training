#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e5+5;

int a[105];

int main(){
	// freopen("input.in", "r", stdin);

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n;
	scanf("%d", &n);
	for(int i=0;i<n;++i)
		scanf("%d", a+i);

	sort(a, a+n);

	for(int i=0;i<n;++i)
		printf("%d ", a[i]);
	printf("\n");

	return 0;

}