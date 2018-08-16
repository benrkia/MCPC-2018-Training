#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e3+5;

int main(){
	// freopen("input.in", "r", stdin);

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n, count;
	string s;
	cin>>n>>s;


	char last=s[0];
	count = 0;

	for(int i=1;i<n;++i){
		if(s[i]==last)
			++count;
		else
			last=s[i];
	}

	printf("%d\n", count);

	return 0;

}