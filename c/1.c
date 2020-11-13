#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    scanf("%[^\n]%*c", &s);

    char c[100] = "Hello, World!\n";
    strcat(c,s);
    printf("%s",c);
    return 0;
}