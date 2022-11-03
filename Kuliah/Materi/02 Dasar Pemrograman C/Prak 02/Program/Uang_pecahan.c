#include <stdio.h>
int main(){
    int a,b;
    scanf("%d", &a);
    b=a/100;                    //Menghitung banyaknya pecahan 100k
    printf("%d ", b);
        a=a%100;           //Modulo digunakan untuk fokus pada pecahan selanjutnya (50k)
        b=a/50;                 //Menghitung banyaknya pecahan 50k
        printf("%d ", b);
    a=a%50;
    b=a/10;                     //Menghitung banyaknya pecahan 10k
    printf("%d ", b);
        a=a%10;
        b=a/5;                  //Menghitung banyaknya pecahan 5k
        printf("%d ", b);
    a=a%5;
    b=a/2;                      //Menghitung banyaknya pecahan 2k
    printf("%d ", b);
        a=a%2;              
        b=a;                    //Menghitung banyaknya pecahan 1k. Note : karena Mod 2 = 1 atau 0. Maka langsung saja b=a.
        printf("%d\n", b);
    return 0;
}