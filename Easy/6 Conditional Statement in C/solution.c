#include<stdio.h>

int main(){
    
    int n;
    
    char *arr[] = {"one", "two","three", "four", "five", "six", "seven", "eight", "nine"};
    
    scanf("%d", &n);
    
    if(n <= 9){
        printf("%s", arr[n-1]);
    }
    else {
        printf("Greater than 9");
    }
    
    return 0;
}