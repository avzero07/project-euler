#include <stdio.h>
#include "findLargePrimeFactor.h"

long main(){
    long res, num;

    scanf("%li",&num);
    res = largePrimeFactor(num);
    printf("%li\n",res);
    return 0;
}
