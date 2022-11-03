#include <stdio.h>
int main(){
    int n, i, s, d;
    scanf("%d\n", n);
    i=1;
    scanf("%d", s);
        while(i++<n){
             scanf("%d", d);
             if(d<s) s=d;
        }
    printf("%d\n", s);
    return 0;
}