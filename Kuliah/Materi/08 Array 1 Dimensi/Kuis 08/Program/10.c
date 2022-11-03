#include <stdio.h>
int main(){
    int i=0, j=0, k=0;
    int a[5]={10,20,30,40,50};
    int b[3]={23,25,35};
    int c[8]={0};
    while(i<5 && j<3){
        if(a[i] < b[j])
            c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    for(i=0; i<8; i++)
        printf("%d ", c[i]);
    printf("\n");
return 0;
}