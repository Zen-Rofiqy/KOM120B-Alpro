#include <stdio.h>
int main(){
    int i; 
    int arr[5]={0};
    for(i=0; i<=5; i++)
        printf("%d ", arr[i]);
    
    //Hal unik
    printf("\n%d ", arr[6]); //Constant Value
    printf("%d ", arr[7]);   //Constant Value
    printf("%d ", arr[8]);   //Constant Value
    printf("%d ", arr[9]);   //Constant Value
    printf("%d ", arr[10]);  //Random Number
    printf("%d ", arr[11]);  //Random Number
return 0;
}
/*
OUTPUT :
0 0 0 0 0 (random number)
*/