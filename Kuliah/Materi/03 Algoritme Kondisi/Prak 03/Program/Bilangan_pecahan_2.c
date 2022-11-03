#include <stdio.h>
#include <math.h>
int main(){
    double a;
    scanf("%lf", &a);
    long int n=a;
    double b=a-n;
    printf("%ld %.5lf\n",n , b);
    return 0;
}