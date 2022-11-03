#include <stdio.h>
int main(){
    int arr[]={2, -1, 5, 6, 0, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
        if(i==n-1)
            printf("\n");
        else printf(" ");
    }
return 0; 
}