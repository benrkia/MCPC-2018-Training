#include<bits/stdc++.h>

using namespace std;

#define ALL(c) c.begin(), c.end()

typedef long long int Long;
typedef long double Double;
const int MAXN = 1e2+5;

int main(){

	int p;

	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			scanf("%d", &p);
			if(p == 1){
				printf("%d\n", abs(3-i)+abs(3-j));
				return 0;
			}
		}
	}

	return 0;

}