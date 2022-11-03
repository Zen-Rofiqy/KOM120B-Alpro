#include <stdio.h>
int main(){
    double a,b;
    scanf("%lf",&a);
    b=a*(100.0/115.0);      //Pajak = 115/100. pada konteks kali ini adalah kebalikannya, berarti invers dari
                            //        115/100, yaitu 100/115
    printf("%.2lf\n",b);    //Pengambilan 2 digit dibelakang decimal
    return 0;
}