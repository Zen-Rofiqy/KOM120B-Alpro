#include <stdio.h>
#define N 5
int main(){
    int dt[N]={10, 20, 30, 40, 50};
    for(int i=1; i<N; i++)
        dt[i]+=dt[i-1];
    printf("%d\n", dt[N-1]);
return 0;
}