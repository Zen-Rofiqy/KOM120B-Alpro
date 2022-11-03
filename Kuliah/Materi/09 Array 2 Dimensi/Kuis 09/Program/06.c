//Program Transpose Matrix
#include <stdio.h>
#define R 2
#define C 4
int main(){
    int arr[R][C]={ {1,2,3,4}, 
                    {5,6,7,8}};
    for(int i=0; i<C; i++)
    for(int j=0; j<R; j++){
        printf("%d", arr[j][i]);
        if(j==R-1)
            printf("\n");
        else printf(" ");
    }
    return 0;
}
/*
OUTPUT : 
1 5
2 6
3 7
4 8
*/