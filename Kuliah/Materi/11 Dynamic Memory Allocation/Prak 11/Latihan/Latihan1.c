//Program Merge 2 array dengan DMA
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, m;
    int *d1, *d2, *d3;
    scanf("%d %d", &n, &m);
    d1 = (int*)malloc(n*sizeof(int));
    d2 = (int*)malloc(m*sizeof(int));
    d3 = (int*)malloc((n+m)*sizeof(int));
    
    //Baca data
    for(int i=0;i<n;i++)
        scanf("%d", &d1[i]);
    for(int i=0;i<m;i++)
        scanf("%d", &d2[i]);
    
    //Merge
   int i=0, j=0, k=0;
    while(i < n)
        d3[k++] = d1[i++];
    while(j < m)
        d3[k++] = d2[j++];
    
    //Sort
    for(i=0; i< n+m; i++){
        k=i;
        for(j=i+1; j<n+m; j++)
            if(d3[j] < d3[k])
                k=j;
        
        int temp = d3[k];
        d3[k] = d3 [i];
        d3 [i] = temp;
    }

    //Print
    for(int i=0; i<n+m; i++)
        printf("%d ", d3[i]);
    printf("\n");  

return 0;
}