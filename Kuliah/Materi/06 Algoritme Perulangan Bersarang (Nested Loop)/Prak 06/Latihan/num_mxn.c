#include <stdio.h>
int main(){
    int i, j, m, n, num;
    scanf("%d %d", &m, &n);
    num=0;
    for (i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            printf("%d ", num++);  //(1) algoritma menuliskan num++ dng loop 
                                   //note : space diprint langsung
            if(num>9) num=0;       //(2) ketika num>9, num harus diubah ke 0 lagi
        }
    printf("\n");
    }
return 0;
}