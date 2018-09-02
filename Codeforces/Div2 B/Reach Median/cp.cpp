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
const int MAXN = 2e5+5;

int a[MAXN];

int main(){
    // freopen("input.in", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s, i;
    ll ans=0;
    cin>>n>>s;
    for(int i=0;i<n;++i)
        cin>>a[i];

    sort(a, a+n);

    i = n/2;
    if(a[i]<s){
        while(a[i]<s && i<n){
            ans += s-a[i];
            ++i;
        }
    }else{
        while(a[i]>s  && i>=0){
            ans += a[i]-s;
            --i;
        }
    }

    cout<<ans<<endl;

    return 0;
}