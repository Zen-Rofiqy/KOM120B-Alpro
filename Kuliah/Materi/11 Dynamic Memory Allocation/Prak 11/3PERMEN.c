//Program Bagi Kantong Permen Sama Rata
#include <stdio.h>
#include <stdlib.h>

//Fungsi Mencari Titik Bagi
int SamaRata(int permen[], int kantong){
    int kiri = 0;
    for(int i=0; i<kantong; i++){
        kiri += permen[i];

        int kanan = 0;
        for(int j=i+1; j<kantong; j++)
            kanan += permen[j];
        
        if(kiri == kanan)
            return i+1;
    }
    return -1;  //Jika tidak mungkin dibagi
}

void BAGI(int permen[], int kantong){
    int tb = SamaRata(permen, kantong);
    if(tb == -1 || tb == kantong){
        printf("-1\n");
        return;
    }

    //Total Hasil Bagi
    int sum=0;
    for(int i=0; i<kantong; i++)
        sum += permen[i];
    printf("%d\n", sum/2);
}

int main(){
    int kantong;
    int *permen;
    scanf("%d", &kantong);
    permen = (int*)malloc(kantong*sizeof(int));

    //Baca data
    for(int i=0; i<kantong; i++)
        scanf("%d", &permen[i]);
    BAGI(permen, kantong);
return 0;
}