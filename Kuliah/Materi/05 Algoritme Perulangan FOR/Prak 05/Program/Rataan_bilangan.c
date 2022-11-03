#include <stdio.h>
int main(){
    int i, n, k, sum=0, dt, c=0;
    double mean; //selalu pake double & long int
    scanf("%d %d", &n, &k);
    if(n!=0 && n>k && k!=0){
     for(i=1; i<=n; i++){
         scanf("%d", &dt);
         if(i%k==0){
            sum+=dt;
            c++;
         }
     }
    mean=1.0*sum/c;
    }
    else {
        mean=0;
    }
    printf("%.2lf\n", mean);
    return 0;
}