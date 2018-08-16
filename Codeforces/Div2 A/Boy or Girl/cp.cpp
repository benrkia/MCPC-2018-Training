#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e5+5;

int main(){
	// freopen("input.in", "r", stdin);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin>>s;
	map<char, int> mp;mp.clear();
	int i=0;
	while(s[i]!='\0'){
		++mp[s[i]];
		++i;
	}

	if(Size(mp) & 1)
		cout<<"IGNORE HIM!"<<endl;
	else
		cout<<"CHAT WITH HER!"<<endl;

	return 0;

}