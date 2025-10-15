#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
    char str[256];
    char *text1 = "line 1! ";
    char *text2 = "line 2! ";
    char *text3 = "line 3! ";

    strcpy(str, text1);
    strcat(str, text2);
    strcat(str, text3);

    //printf("Hello, World!");

    printf("%s\n", str);

    return 0;
}
