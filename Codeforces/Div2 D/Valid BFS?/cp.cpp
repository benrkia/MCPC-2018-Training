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

int n;
vector<int> g[MAXN];

bool bs(int u, int x){
    int low=0, hi=g[u].size()-1, mid;

    while(low<=hi){
        mid = (low+hi)/2;
        if(g[u][mid]==x) return true;
        if(g[u][mid]>x) hi = mid-1;
        else low = mid+1;
    }
    return false;
}

int main(){
    // freopen("input.in", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    for(int i=1, u, v;i<n;++i){
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }

    for(int i=1;i<=n;++i)
        sort(all(g[i]));

    queue<int> q;
    int a, len, u, check;

    cin>>a;
    if(a!=1){
        cout<<"No"<<endl;
        return 0;
    }else{
        u = 1;
        len = g[u].size();
        for(int i=1, j=0;i<n;++i){
            cin>>a;
            check = bs(u, a);
            while(!check && q.size()){
                u = q.front();q.pop();
                check = bs(u, a);
            }
            if(q.empty() && !check){
                cout<<"No"<<endl;
                return 0;
            }
            q.push(a);
            ++j;
            if(j==len){
                u = q.front();q.pop();
                len = g[u].size();
                j=1;
            }

        }
    }

    cout<<"Yes"<<endl;

    return 0;
}