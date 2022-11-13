//Program Merge 2 array dengan DMA dan fungsi
#include <stdio.h>
#include <stdlib.h>

//Fungsi swap index array d3
void SWAP(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

//Fungsi Sortir d3
void SORT(int size, int *d3){
    int i, j, k;
    for(i=0; i< size; i++){
        k=i;
        for(j=i+1; j<size; j++)
            if(d3[j] < d3[k])
                k=j;
        SWAP(&d3[k], &d3[i]);
    }    
}

//Fungsi Merge d1 + d2 -> d3
void MERGE(int n, int m, int *d1, int *d2, int *d3){
   int i=0, j=0, k=0;
    while(i < n)
        d3[k++] = d1[i++];
    while(j < m)
        d3[k++] = d2[j++];
    
    int size = n+m;
    SORT(size,d3);
}

//Fungsi Print array d3
void OUT(int d3[], int size){
    for(int i=0; i<size; i++)
        printf("%d ", d3[i]);
    printf("\n");  
}

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
    
    //Panggil fungsi
    MERGE(n,m,d1,d2,d3);

    OUT(d3, n+m);

return 0;
}