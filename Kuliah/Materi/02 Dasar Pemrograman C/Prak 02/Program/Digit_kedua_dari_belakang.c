#include <stdio.h>
int main(){
    long int a;
    scanf("%ld", &a);
    a=a%100;            //mengambil 2 digit dari belakang
    a=a/10;
    if(a>=0){           //jika input = positif
        a=a*7;
    }
    else{               //jika input = negatif
        a=a*-7;
    }
    printf("%ld\n", a);
    return 0;
}