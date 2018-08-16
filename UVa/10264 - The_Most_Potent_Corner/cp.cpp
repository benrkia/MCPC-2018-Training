#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e5;

int weights[MAXN];
int potencies[MAXN];

int main(){
	// freopen("input.in", "r", stdin);

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n, corners_count, corner, sum, max_sum;
	while(scanf("%d", &n) != EOF){
		corners_count = 1<<n;
		for(int i=0;i<corners_count;++i)
			scanf("%d", weights+i);

		for(int i=0;i<corners_count;++i){
			sum = 0;
			for(int j=0;j<n;++j){
				corner = i^(1<<j);
				sum += weights[corner];
			}
			potencies[i] = sum;
		}

		max_sum = 0;
		for(int i=0;i<corners_count;++i){
			for(int j=0;j<n;++j){
				corner = i^(1<<j);
				max_sum = max(max_sum, potencies[i]+potencies[corner]);
			}
		}

		printf("%d\n", max_sum);
		
	}

	return 0;

}