#include <stdio.h>
#include <stdlib.h>
int main(){
    int row=3, col=4, i, j, count;
    int(*arr)[col] = calloc(row, sizeof *arr);

    count=0;
    for(i=0; i<row; i++)
    for(j=0; j<col; j++)
        arr[i][j] = ++count;
    
    printf("%d\n", arr[1][2]);
    free(arr);
return 0;
}