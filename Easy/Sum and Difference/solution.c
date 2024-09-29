#include <stdio.h>

int main()
{
	int num1, num2;
    float no1, no2;
    
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &no1, &no2);
    
    printf("%d %d\n", num1+num2, num1-num2);
    printf("%.1f %.1f", no1+no2, no1-no2);
    
    return 0;
}