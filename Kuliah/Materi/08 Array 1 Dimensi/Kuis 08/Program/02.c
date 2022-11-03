#include <stdio.h>
int main(){
    int i; 
    int ddt[10]={1,2,[8]=10,20};
    for(i=0; i<10; i++)
        printf("%d ", ddt[i]);

return 0;
}
/*
OUTPUT :
1 2 0 0 0 0 0 0 10 20
*/