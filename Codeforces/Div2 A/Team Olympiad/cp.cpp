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

int t[MAXN];

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, _1s, _2s, _3s, w;
	_1s = _2s = _3s = 0;

	cin>>n;

	for(int i=1;i<=n;++i){
		cin>>t[i];
		if(t[i]==1)
			++_1s;
		else if(t[i]==2)
			++_2s;
		else
			++_3s;
	}

	w = min(min(_1s, _2s), _3s);

	vii v(w);
	_1s = _2s = _3s = 0;

	for(int i=1;i<=n;++i){
		if(t[i]==1 && _1s<w){
			v[_1s].first = i;
			++_1s;
		}
		if(t[i]==2 && _2s<w){
			v[_2s].second.first = i;
			++_2s;
		}
		if(t[i]==3 && _3s<w){
			v[_3s].second.second = i;
			++_3s;
		}
	}

	cout<<w<<endl;
	for(int i=0;i<w;++i){
		cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
	}

	return 0;
}