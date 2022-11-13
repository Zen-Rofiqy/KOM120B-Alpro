#include <stdio.h>
#define N 5
#define M 7
int main(){
    int nilai, r, i, c;
    /* 
    int **arr = (int**)malloc(r*sizeof(int*));
    for(i=0; i<r; i++)
        arr[i] = (int*)malloc(c*sizeof(int));
    */

    /* Benar 
    int arr[N][M]={5}; 
    */
    
    /*
    int *arr[N];
    for(int i=0; i<N; i++)
        arr[i] = (int*)malloc(M*sizeof(int));
    */
    
    /*
    int arr[N][M];
    */

    /* INI SALAH
    arr = (int*)malloc(N*M*sizeof(int));
    */

    for(int i=0; i<N; i++)
    for(int j=0; j<M; j++){
        scanf("%d", &nilai);
        arr[i][j] = nilai;
    }
return 0;
}