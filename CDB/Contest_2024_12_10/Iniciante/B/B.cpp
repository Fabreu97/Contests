#include <stdio.h>

#define MAX 10000

int main() {
	int n,i,d, pos;
	int x[2*MAX];
	bool ans = false;
	for(i = 0; i < 2*MAX; i++) {
		x[i] = 0;
	}
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d %d", &pos, &d);
		x[pos + MAX] = d;
	}
	for(i = 0; i < 2*MAX; i++) {
		if(x[i] != 0) {
			pos = i + x[i];
			if( (pos >= 0) && (pos < 2*MAX) && (x[i] == -1*x[pos]) ) {
				ans = true;
				break;
			}
		}
	}
	if(ans) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
