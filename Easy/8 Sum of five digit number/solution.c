#include <stdio.h>

int main() {
	
    int n, sum, lastDigit;
    scanf("%d", &n);
    
    while(n != 0){
        lastDigit = n % 10;
        n /= 10;
        sum += lastDigit;
    }
    
    printf("%d", sum);
    
    return 0;
}