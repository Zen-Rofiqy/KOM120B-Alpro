#include <stdio.h>
int main(){
    unsigned long int n;
    scanf("%lu", &n);
    n=1+n*(n+1)/2;          //formula dari penjumlahan f(1) dan deret 
    printf("%lu\n",n);
    return 0;
}
