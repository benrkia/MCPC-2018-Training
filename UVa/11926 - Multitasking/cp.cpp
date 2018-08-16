#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()

typedef long long int ll;
typedef long double Double;
const int MAXN = 1e6;

bitset<1000005> timeline;

int main(){
	// freopen("input.in", "r", stdin);

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n, m, start, end, interval;
	while(scanf("%d%d", &n, &m), n || m){
		timeline.reset();
		bool conflict = false;

		for(int i=0;i<n;++i){
			scanf("%d%d", &start, &end);
			if(!conflict){
				for(int j=start+1;j<=end;++j){
					if(timeline.test(j)) {
						conflict=true;
						break;
					}
					timeline.set(j);
				}
			}
		}

		for(int i=0;i<m;++i){
			scanf("%d%d%d", &start, &end, &interval);
			if(!conflict){
				while(true){
					for(int j=start+1;j<=end;++j){
						if(timeline.test(j)){
							conflict=true;
							break;
						}
						timeline.set(j);
					}

					start += interval;
					end += interval;

					if(start>MAXN && end>MAXN)
						break;
					else if(end>MAXN)
						end = MAXN;
				}
			}
		}

		if(conflict)
			printf("CONFLICT\n");
		else
			printf("NO CONFLICT\n");

	}

	return 0;

}