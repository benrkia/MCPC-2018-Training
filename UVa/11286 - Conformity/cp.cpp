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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, max, count;
    string s[5], frosh;
    map<string, int> mp;
    while(cin>>n, n){
        mp.clear();
        
        while(n--){
            frosh = "";

            for(int i=0;i<5;++i){
                cin>>s[i];
            }
            sort(s, s+5);
            for(int i=0;i<5;++i)
                frosh += s[i];
            ++mp[frosh];
        }
        
        max = 1;
        count=0;
        for(map<string, int>::iterator it=mp.begin();it!=mp.end();++it){
            if(it->se > max){
                max = it->se;
                count = it->se;
            }else if(it->se == max){
                count += it->se;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}