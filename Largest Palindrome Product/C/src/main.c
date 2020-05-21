#include <stdio.h>
#include "functions.h"

int main(){
    int a, b, res=0;
    scanf("%d %d",&a,&b);
    res = largePalProd(a,b);
    printf("%d\n",res);
    return 0;
}
