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

	ll x;
	int n, d, ans=0;
	char c;
	cin>>n>>x;
	cin.ignore();
	while(n--){
		cin>>c>>d;
		cin.ignore();
		if(c=='+')
			x += d;
		else{
			if (d>x)
				++ans;
			else
				x -= d;
		}
	}

	cout<<x<<" "<<ans<<endl;

	return 0;
}