#include <stdio.h>
#include <math.h>
int main(){
    double a;
    scanf("%lf", &a);
    int b;
    b=(int)a;
    printf("%d %.5lf",b , a-trunc(a));
    return 0;
}