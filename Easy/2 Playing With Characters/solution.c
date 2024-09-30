#include<stdio.h>
int main(){
    char ch;
    char s[10];
    char sen[50];

    scanf("%c", &ch);
    scanf("%s", s);
    getchar(); // To avoid newline character issue.
    fgets(sen, sizeof(sen), stdin);

    printf("%c\n%s\n%s", ch, s, sen);

    return 0;
}