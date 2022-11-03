//Program Menghitung Teras Matriks NxN
#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N][N], row, col, sum;
    for(row=0; row<N; row++)
    for(col=0; col<N; col++)
        scanf("%d", &arr[row][col]);
        
    //print trace
    sum=0;
    for(int i=0; i<N; i++)
        sum+=arr[i][i];
    printf("%d\n", sum);
return 0;
}