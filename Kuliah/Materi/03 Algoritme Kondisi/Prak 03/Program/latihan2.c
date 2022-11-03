#include <stdio.h>
int main(){
    int uts, uas;
    float rata;
        scanf("%d %d", &uts, &uas);
        rata= (uts+uas)/2.0;   //Karena tidak lulus itu lebih simple maka di if terlebih dahulu
            if(((uts > 40) && (uas > 40)) && rata > 60) 
                printf("LULUS\n");
            else if(((uts > 40) || (uas > 40)) && rata >60)
                printf("LULUS BERSYARAT\n");
            else if(rata < 60)
                printf("TIDAK LULUS\n");

    return 0;
}