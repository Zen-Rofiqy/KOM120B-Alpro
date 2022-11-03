#include <stdio.h>
#define R 3
#define C 4
int main(){
    int arr[R][C]={ {1,2,3,4}, 
                    {5,6},
                    {7,8}};
    int sum=0;
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j+=2)
            sum+=arr[i][j];
    }
    printf("%d\n", sum);
    return 0;
}
//OUTPUT : 16