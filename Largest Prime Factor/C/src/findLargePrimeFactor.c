#include <math.h>

long checkPrime(long n);

long largePrimeFactor(long n){
    long res=1;

    for(long i=1; i<=n; i++){
        if(checkPrime(i)){
            if(!(n%i) && i>res){
                res = i;
                n = n/res;
            }
        }
    }
    return res;
}

long checkPrime(long n){

    if(n==1) return 0;
    if(n==2) return 1;

    for(long i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
