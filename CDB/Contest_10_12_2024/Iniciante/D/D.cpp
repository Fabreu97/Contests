#include <stdio.h>

int main() {
    int a,b,c, ans, aux;
    int s = scanf("%d %d %d", &a, &b, &c);
    ans = (a-1)*(c+b-1) + b*c;
    s = printf("%d\n", ans);
    return 0;
}