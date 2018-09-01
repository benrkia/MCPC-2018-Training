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

    string s1, s2;
    while(cin>>s1){
        cin>>s2;
        reverse(all(s1));
        reverse(all(s2));
        clr(a, 0);

        for(int i=0;i<s1.size();++i){
            for(int j=0;j<s2.size();++j){
                a[j+i] += (s1[i]-48)*(s2[j]-48);
            }
        }

        for(int i=0;i<MAXN-1;++i){
            if(a[i]>=10){
                a[i+1] += a[i]/10;
                a[i] %= 10; 
            }
        }
        int i=MAXN-1;
        while(i>0 && !a[i]) --i;
        for(;i>=0;--i) cout<<a[i];
        cout<<endl;
    }

    return 0;
}