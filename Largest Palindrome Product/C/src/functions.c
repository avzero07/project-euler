#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int largePalProd(int a, int b);
int calcNumDigits(int n);
int checkPalindrome(int n);

int largePalProd(int a, int b){
    int numDigitsA = calcNumDigits(a);
    int numDigitsB = calcNumDigits(b);

    if(numDigitsA!=numDigitsB){
        fprintf(stderr, "%s\n", "Please Ensure both Numbers have the same number of digits!");
        return -1;
    }

    int maxPal=0;
    for(int i=pow(10,numDigitsA)-1; i>0; i--){
        for(int j=pow(10,numDigitsB)-1; j>0; j--){
            int prod = i*j;
            if(checkPalindrome(prod)){
                maxPal = prod>maxPal?prod:maxPal;
            }
        }
    }

    return maxPal;
}

int calcNumDigits(int n){
    int numDigits = 0;

    if(n==0) return 1;

    while(n!=0){
        numDigits++;
        n = n/10;
    }
    return numDigits;
}

int checkPalindrome(int n){;
    int copy = n;
    int rev=0;

    while(copy!=0){
        rev = (rev*10) + copy%10;
        copy = copy/10;
    }

    if(rev==n)
        return 1;
    else
        return 0;
}
