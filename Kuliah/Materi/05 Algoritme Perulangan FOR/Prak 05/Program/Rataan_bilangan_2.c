#include <stdio.h>
int main(){
    int i, n, k, sum=0, dt, c=0;
    double mean;
    scanf("%d %d", &n, &k);
     for(i=1; i<=n; i++){
         scanf("%d", &dt);
         if(i%k==0){
            sum+=dt;
            c++;
         }
     }
    if(c==0) mean=0;
    else mean = 1.0*sum/c;
    printf("%.2lf\n", mean);
    return 0;
}