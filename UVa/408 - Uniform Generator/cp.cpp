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

int main(){
    // freopen("input.in", "r", stdin);

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int step, mod, x, i;
    map<int, int> mp;

    while(scanf("%d%d", &step, &mod) != EOF){
        
        mp.clear();
        x=0;
        mp[0] = 1;
        for(i=1;i<mod;++i){
            x = (x+step)%mod;
            if(mp.find(x) != mp.end()) break;
        }

        if(i<mod)
            printf("%10d%10d    Bad Choice\n\n", step, mod);
        else
            printf("%10d%10d    Good Choice\n\n", step, mod);

    }

    return 0;
}