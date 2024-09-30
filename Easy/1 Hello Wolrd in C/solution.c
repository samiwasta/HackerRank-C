#include<stdio.h>
int main(){
    char text[50];

    fgets(text, sizeof(text), stdin);

    printf("Hello, World!\n");
    printf("%s", text);

    return 0;
}