#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 200
int main()
{
    char ch,s[MAX_LEN],sen[MAX_LEN];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf(" %[^\n]%*c", &sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
