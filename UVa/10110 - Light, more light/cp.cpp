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
typedef unsigned long long int ll;
typedef long double Double;
const int MOD = 1e9+7;
const int MAXN = 5e2+10;

int a[MAXN];

int main(){
    // freopen("input.in", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    while(cin>>n, n){
        x = (int)sqrt(n);
        if(x*x == n)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }

    return 0;
}