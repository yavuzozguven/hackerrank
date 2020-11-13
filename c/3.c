#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int val1,val2;
    float valf1,valf2;

    scanf("%d %d",&val1,&val2);
    scanf("%f %f",&valf1,&valf2);

    printf("%d %d\n%.1f %.1f",(val1+val2),(val1-val2),(valf1+valf2),(valf1-valf2));



    return 0;
}