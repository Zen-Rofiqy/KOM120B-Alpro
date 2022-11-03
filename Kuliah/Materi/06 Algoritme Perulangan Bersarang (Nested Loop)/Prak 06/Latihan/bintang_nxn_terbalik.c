#include <stdio.h>
int main(){                   //copy program sebelumnya
    int n,i, j;         
    scanf("%d", &n);          
     for(i=n; i>0; i--){      //(2nd) tambah enter, ulangi langkah 1 dng decrement loop
        for(j=n; j>0; j--){   //(1st) ubah jadi decrement
            printf("*");
        }
      printf("\n");
      n--;                    //(3rd) jangan lupa untuk decr n nya juga
     }
return 0;
}