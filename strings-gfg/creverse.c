#include<stdio.h>

void reverse(char *p) {
    if (*p) {
        reverse(p+1);
        printf("%c", *p);
    }
}

void main() {
    char ch[] = "Sambhav Jain";
    printf("%s \n", ch);
    reverse(ch);
    printf("\n");
}