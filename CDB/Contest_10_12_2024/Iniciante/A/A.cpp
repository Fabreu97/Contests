#include <stdio.h>
#include <cstring>

#define MAX 100000
#define SFREQ 30

int main() {

	int t,k,n,i,j;
	int freq [SFREQ];
	char word[MAX];
	int odd;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		scanf(" %s", word);
		odd = 0;
		for(i = 0; i < SFREQ; i++) {
                	freq[i] = 0;
        	}
		for(i = 0; word[i] != '\0'; i++) {
			freq[word[i] - 'a'] += 1; 
		}
		for(i = 0; i < SFREQ; i++) {
			if(freq[i]%2) {
				odd++;
			}
		}
		if( (odd - k) > 1) {
			printf("NO\n");		
		}
		else {
			printf("YES\n");
		}
	}
	return 0;
}
