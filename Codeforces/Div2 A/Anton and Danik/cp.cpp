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

	int n, a, d;
	string s;
	cin>>n;
	cin>>s;

	a = d = 0;
	for(int i=0;i<n;++i)
		if(s[i]=='A')
			a++;
		else
			d++;

	if(a>d)
		cout<<"Anton"<<endl;
	else if(d>a)
		cout<<"Danik"<<endl;
	else
		cout<<"Friendship"<<endl;

	return 0;

}