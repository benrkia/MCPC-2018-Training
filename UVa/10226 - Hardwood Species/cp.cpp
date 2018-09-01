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

    int t;
    string s;
    map<string, int> trees;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--){
        trees.clear();
        double count = 0;
        while(getline(cin, s), s!=""){
            ++trees[s];
            ++count;
        }
        count /= 100;

        for(map<string, int>::iterator it = trees.begin();it!=trees.end();++it){
            printf("%s %.4lf\n", it->fi.c_str(), (it->se/count));
        }
        if(t)
            printf("\n");
    }

    return 0;
}