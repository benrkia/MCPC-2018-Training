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

	int n, t, k, d, ov_1, ov_2;
	cin>>n>>t>>k>>d;

	ov_1 = ceil((double)n/k) * t;
	
	int cnt, i, j, built;
	ov_2 = built = i = j = 0;
	cnt = 0;

	while(cnt<n){
		if(built && j==t){
			cnt += k;
			j=0;
		}
		if(i==t){
			cnt += k;
			i=0;
		}
		++i;
		++j;
		if(cnt<n)
			++ov_2;
		if(!built && j==d){
			built = 1;
			j=0;
		}
	}

	if(ov_1>ov_2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}