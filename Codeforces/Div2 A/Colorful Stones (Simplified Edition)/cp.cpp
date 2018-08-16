#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()
#define fi first
#define se second

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long int ll;
typedef long double Double;
const int MAXN = 1e4+5;

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int pos=0;
	string s1, s2;
	cin>>s1>>s2;

	for(int i=0;i<s2.size();++i)
		if(s2[i] == s1[pos]) ++pos;

	printf("%d\n", pos+1);

	return 0;

}