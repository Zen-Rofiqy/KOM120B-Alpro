#include <stdio.h>
int main(){                             //copy previous program
    int i, j, m, n, num;
    scanf("%d %d", &m, &n);
    num=0;
    for (i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            printf("%d", (num++ % 10));  //(1) we use %10 agar setiap num++ akan diambil satuan saja
            if(j==n) printf("\n");       //(2) using if to enter and space
            else printf(" ");
        }
    }
return 0;
}