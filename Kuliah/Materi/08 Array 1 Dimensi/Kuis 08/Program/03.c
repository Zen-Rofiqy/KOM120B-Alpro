#include <stdio.h>
int main(){
    int arr[5]={2};
    int i;
    for(i=0; i<5; i++)
        arr[i/3]=i;
    printf("%d%d%d%d%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
return 0;
}
/*
OUTPUT :
24000
*/