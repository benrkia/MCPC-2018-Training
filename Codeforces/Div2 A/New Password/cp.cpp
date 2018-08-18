#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()
#define fi first
#define se second
#define clr(v, d) memset(v, d, sizeof(v))

typedef pair<int, int> ii;
typedef vector<ii> vi;
typedef pair<int, pair<int, int> > iii;
typedef vector<iii> vii;
typedef long long int ll;
typedef long double Double;
const int MAXN = 5e3+5;

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	char c='a';
	string s;
	cin>>n>>k;

	while(n--){
		if((c-'a') == k){
			c = 'a';
		}
		s+=c;
		++c;
	}

	cout<<s<<endl;

	return 0;
}