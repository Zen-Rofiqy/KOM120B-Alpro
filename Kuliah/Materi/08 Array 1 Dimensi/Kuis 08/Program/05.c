#include <stdio.h>
#define N 5
int main(){
    int dt[N]={1,2,3,4,5};
    int i, t;
    for(i=0; i<N; i++){
        t=dt[i];
        dt[i]=dt[N-i-1];
        dt[N-i-1]=t;
    }
    for(i=0; i<N; i++)
        printf("%d ", dt[i]);
return 0;
}
/*
OUTPUT : 1 2 3 4 5
*/