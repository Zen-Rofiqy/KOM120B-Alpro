#include<stdio.h>
int main()
{
    int i=1, dt,sm, n, j=0;
    scanf ("%d", &n);
    scanf ("%d", &dt);
    sm=dt;
    while (i++ <= n-1){
        scanf ("%d",&dt);
        if(dt<sm){
         sm=dt;
         j=0;
        }
        if(dt == sm){
            j++;
        }
        i++;
    }
    printf ("%d", sm);
    return 0;
}