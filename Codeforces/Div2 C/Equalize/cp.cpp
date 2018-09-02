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

int main(){
    // freopen("input.in", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0;
    string a, b;
    cin>>n>>a>>b;

    for(int i=0;i<n;++i){
        if(a[i]!=b[i] && a[i+1]!=b[i+1] && a[i]!=a[i+1]){
            swap(a[i], a[i+1]);
            ++ans;
        }
    }

    for(int i=0;i<n;++i){
        if(a[i]!=b[i])
            ++ans;
    }

    cout<<ans<<endl;

    return 0;
}