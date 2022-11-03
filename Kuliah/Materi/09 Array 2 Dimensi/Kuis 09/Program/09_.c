//Program membaca matrix MxN
#include <stdio.h>
int main(){
    int N, M;
    scanf("%d %d", &M, &N);
    int arr[M][N], row, col;
    for(int i=0; i<M; i++)
    for(int j=0; j<N; j++)
        scanf("%d", &arr[i][j]);

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