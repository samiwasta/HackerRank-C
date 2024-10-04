#include <stdio.h>

int main() 
{
    int a, b;
    
    char *arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	
    for(int i = a; i <= b; i++){
      if(i <= 9){
          printf("%s\n", arr[i-1]);
      }
      else if(i % 2 == 0){
          printf("even\n");
      }
      else {
          printf("odd\n");
      }
    }

    return 0;
}

