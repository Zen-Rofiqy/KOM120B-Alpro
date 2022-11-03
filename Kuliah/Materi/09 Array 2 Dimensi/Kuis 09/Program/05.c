#include <stdio.h>
int main(){ 
    int arr[][4]={{1,2,3,4},{5,6,7,8}};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", n);
    printf("Size Int : %d\n", sizeof n);
    printf("Size arr : %d\n", sizeof arr);
    printf("Size arr[0] : %d\n", sizeof arr[0]);
    printf("Size arr[1] : %d\n", sizeof arr[1]);
    printf("Size arr[2] : %d\n", sizeof arr[2]);
    printf("Size arr[3] : %d\n", sizeof arr[3]);
    printf("Size arr[0][0] : %d\n", sizeof arr[0][0]);
return 0;
}
/*
OUTPUT : 2
Size of int = 4 byte
dalam arr ada 8 int, berarti 32 byte
dalam lokasi arr[0] ada 4 int, berarti 16 byte
jadi 32/16 = 2 byte
*/