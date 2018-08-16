#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e4+5;

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ans=0;
	char last = 'a';
	string s;
	cin>>s;

	for(int i=0;i<s.size();++i){
		int diff = abs(s[i] - last);
		if(diff > 13)
			ans += 26 - diff;
		else
			ans += diff;
		last = s[i];
	}

	printf("%d\n", ans);

	return 0;

}