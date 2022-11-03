#include<stdio.h>
int main(){
    int a,b,i;
    i=0;
        while(1){
            scanf("%d", &a);
            if (a == -1)
              break;
            scanf("%d", &b);
            if((b == 0) && (a == 0))
              continue;
            if(b == 0)    //note nested if dengan if saja bisa. tapi kalo else if harus ada if terlebih dahulu
              i++;
            else if(a == 0)
              i++;
            else if(((a % b) == 0) || ((b % a) == 0))
              i++;
        }
    printf("%d\n", i);
    return 0;
}