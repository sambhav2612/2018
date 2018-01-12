#include<stdio.h>
#include<string.h>

void main() {
    char str[] = "Sambhav Jain. Github Username: @sambhav2612";

    printf("\n %s \n", str);

    int i, j, k;
    char temp;
    // reverse each word
    for (i = 0; i < strlen(str); ++i) {
        j = 0;
        while (str[j] != " ") {
            ++j;
        }
        for (k = i; k < j; ++k) {
            // swap
            temp = str[k];
            str[k] = str[j];
            str[j] = temp;
        }
    }

    printf(" %s", str);

}