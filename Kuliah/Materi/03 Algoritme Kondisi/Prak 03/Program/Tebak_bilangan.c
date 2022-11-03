#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
        if(c<a) printf("kiri\n");
            else if(a<c && c<b) printf("tengah\n");
        else if (c>b) printf("kanan\n");
            else printf("tepi\n");
    return 0;
}