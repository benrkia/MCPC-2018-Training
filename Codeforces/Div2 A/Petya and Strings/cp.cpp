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

	string s1, s2;
	cin>>s1>>s2;
	int i=0, r=0;

	while(s1[i]!='\0'){
		if(s1[i]<97) s1[i]+=32;
		if(s2[i]<97) s2[i]+=32;

		if(s1[i]<s2[i]){
			r = -1;
			break;
		}
		if(s1[i]>s2[i]){
			r = 1;
			break;
		}
		++i;
	}

	cout<<r<<endl;

	return 0;

}