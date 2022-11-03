#include <stdio.h>
int main(){
    int uts, uas;
    float rata;
        scanf("%d %d", &uts, &uas);
        rata= (uts+uas)/2.0;   //Karena tidak lulus itu lebih simple maka di if terlebih dahulu
            if(rata<60.0) printf("TIDAK LULUS\n");
                else if(uts>40 && uas>40 && rata>60.0) printf("LULUS\n"); //karena lulus itu lebih simple maka di if terlebih dahulu
            else if(rata>60.0) printf("LULUS BERSYARAT\n");
    return 0;
}