#include <stdio.h>
int main(){
    unsigned long int n;
     scanf("%lu", &n);
    int kue(){
        if (n!=0){
            return n + kue(n-1);
        }
        else{
            return 1;
        }
    }
    kue();
     printf("%lu\n",kue);
    return 0;
}