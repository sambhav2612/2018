#include<stdio.h>

void main() {
    char str[] = "Sambhav Jain";
    printf("%s\n", str);

    char *str2 = "Sambhav Jain";
    *(str2+5) = "X";
    printf("%s", str);
}