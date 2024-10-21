#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	for(int row = 1; row <= ((2*n)-1); row++){
          for(int col = 1; col <= ((2*n)-1); col++ ){
              if(row == 1 || col == 1 || row == ((2*n)-1) || col == ((2*n)-1)){
                  printf("%d ", n);
              }
              else {
                  int min = row < col ? row : col;
                  min = min < ((2*n)-row) ? min : ((2*n)-row);
                  min = min < ((2*n)-col) ? min : ((2*n)-col);
                  
                  printf("%d ", n-min+1);
              }
          }
          printf("\n");
      }
    return 0;
}
