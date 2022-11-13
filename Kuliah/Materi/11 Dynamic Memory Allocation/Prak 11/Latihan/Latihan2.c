//Program Longest Increment Subsequence (LIS)
#include <stdio.h>
#include <stdlib.h>

int LIS(int n, int *dt){
    int *lis, max=0;
    lis = (int*)malloc(n*sizeof(int));    

    //set nilai LIS
    for(int i=0; i<n; i++)
        lis[i] = 1;

    //bottom up LIS
    for(int i=1; i<n; i++)
        for(int j=0; j<i; j++)
            if(dt[i] > dt[j] && lis[i] < lis[j] +1)
                lis[i] = lis[j] +1;

    //Mengambil nilai LIS maximum
    for(int i=0; i<n; i++)
        if(max < lis[i])
            max = lis[i];
    
    //Free memory to avoid memory leak
    free(lis);

    return max;
}

int main(){
    int n;
    int *dt;
    scanf("%d", &n);
    dt = (int*)malloc(n*sizeof(int));
    
    //Baca data
    for(int i=0; i<n; i++)
        scanf("%d", &dt[i]);
    
    printf("%d\n", n-LIS(n, dt));
return 0;
}