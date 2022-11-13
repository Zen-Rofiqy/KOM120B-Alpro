#include <stdio.h>
#include <stdlib.h>
int LIS(int n, int *dt){
    int *lis2, maks=0;
    lis2 = (int*)malloc(n*sizeof(int));    
    for(int i=0; i<n; i++){
        lis2[i] = 1;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(dt[i] > dt[j] && lis2[i] < lis2[j] +1)
                lis2[i] = lis2[j] +1;
        }
    }
    for(int i=0; i<n; i++){
        if(maks < lis2[i]) maks = lis2[i];
    }
    free(lis2);
    return maks;
}
int main(){
    int n, lis;
    int *dt;
    scanf("%d", &n);
    dt = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &dt[i]);
    }
    lis = LIS(n, dt);
    printf("%d\n", n-lis);
return 0;
}