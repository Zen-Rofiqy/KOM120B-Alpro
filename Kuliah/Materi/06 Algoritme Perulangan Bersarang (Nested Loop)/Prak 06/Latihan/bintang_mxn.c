#include <stdio.h>
int main(){
    int m, n,i, j;         
    scanf("%d %d", &m, &n);
     for(i=1; i<=m; i++){      //(2nd) tambah enter, ulangi langkah 1 dng loop
        for(j=1; j<=n; j++){   //(1st) buat baris berisikan * sebanyak n dng loop
            printf("*");
        }
      printf("\n");
     }
return 0;
}