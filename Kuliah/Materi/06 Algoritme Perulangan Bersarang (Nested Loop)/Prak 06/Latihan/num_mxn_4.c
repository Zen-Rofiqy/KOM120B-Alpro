#include <stdio.h>                  //program loop 1 Dimensi
int main(){                               //copy previous program
    int i, m, n, num;                     //hapus j
    scanf("%d %d", &m, &n);
    num=0;
    for (i=1; i<=m*n; i++){               //(1)looping sebanyak m*n kali
            printf("%d", (num++ % 10));  
            if(i%n==0) printf("\n");      //(2)using if to enter and space
                                          //logic : bil hanya akan habis dibagi dengan kelipatannya
            else printf(" ");
    }
return 0;
}