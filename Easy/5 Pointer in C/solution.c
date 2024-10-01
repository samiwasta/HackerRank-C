#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    int sum, diff;
    sum = *a + *b;
    diff = abs(*a - *b);
    
    printf("%d\n%d", sum, diff)
;}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}