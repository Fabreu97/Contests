#include <stdio.h>

#define MAX 112345

int main() {
	unsigned int n,m, ans[MAX], i, aux, query;
	unsigned long long int vasya = 0, petya = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%u", &aux);
		ans[aux] = i+1;
	}
	scanf("%d", &m);
	while(m--) {
		scanf("%u", &query);
		vasya += ans[query];
		petya += n - ans[query] + 1; 
	}
	printf("%llu %llu\n", vasya, petya);
	return 0;
}
