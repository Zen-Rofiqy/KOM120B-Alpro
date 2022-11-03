#include <stdio.h>
#define R 2
#define C 3
int main(){
    int arr[R][C]={0};
    for(int i=0; i<R; i++)
    for(int j=0; j<C; j++)
        arr[i][j/2]=i+j;

    //Cetak matriks arr berukuran RxC
    for(int i=0; i<R; i++)
    for(int j=0; j<C; j++){
        printf("%d", arr[i][j]);
        if(j==C-1)
            printf("\n");
        else printf(" ");
    }
return 0;
}
/*
OUTPUT : 
1 2 0
2 3 0
*/