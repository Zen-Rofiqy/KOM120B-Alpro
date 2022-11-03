#include <stdio.h>
int main(){                    //copy program sebelumnya
    int n,i, j;         
    scanf("%d", &n);           //scanf jadi 1 var
     for(i=1; i<=n; i++){      //(2nd) tambah enter, ulangi langkah 1 dng loop
        for(j=1; j<=i; j++){   //(1st) ubah menjadi j<=i. jadi ketika i(baris) bertambah, maka total j(bintang) akan bertambah juga
            printf("*");
        }
      printf("\n");
     }
return 0;
}