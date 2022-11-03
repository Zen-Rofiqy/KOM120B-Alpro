#include <stdio.h>
int main(){
    int arr[]={303,304,365,454,487, 6, 12, 15, 78, 90,
               155,169,183,205,209,218, 5,269,282,287};
    int m, left=0, right=19;
    if(arr[left] < arr[right])
        printf("0\n");
    else{
        while(left<right){
            m=(left+right)/2;
            if(arr[0]<=arr[m])
                left=m+1;
            else right=m;
        }
        printf("%d\n", left);
    }
return 0;
}
/*
OUTPUT : 5
*/