//Program membaca matrix MxN
#include <stdio.h>
int main(){
    int N, M;
    scanf("%d %d", &M, &N);
    int arr[M][N], row, col;
    for(row=0; row<M; row++)
    for(col=0; col<N; col++)
        scanf("%d", &arr[row][col]);

    //print data
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            printf("%d", arr[i][j]);
            if(i == N-1) 
                printf("\n");
            else printf(" ");
        }
        printf("\n");
    }
return 0;
}