#include <stdio.h>

void update(int *a,int *b) {
    *a=*a+*b;
    *b=abs(*a-(2**b));
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int *pa = &a,*pb = &b;
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
