#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int andMax = 0, orMax = 0, xorMax = 0;
    
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            int andVal = i & j;
            int orVal = i | j;
            int xorVal = i ^ j;
            
            if(andVal < k && andVal > andMax){
                andMax = andVal;
            }
            if(orVal < k && orVal > orMax){
                orMax = orVal;
            }
            if(xorVal < k && xorVal > xorMax){
                xorMax = xorVal;
            }
        }
    }
    
    printf("%d\n%d\n%d", andMax, orMax, xorMax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}