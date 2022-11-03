#include<stdio.h>
int main()
{
    int i, dt,sm, n;
    scanf ("%d", &n);
    scanf ("%d", &dt);
    sm=dt;
    i=1;
    while (i++ <= n-1){
        scanf ("%d",&dt);
        if (dt<sm)
         sm=dt;
    }
    printf ("%d", sm);
    return 0;
}