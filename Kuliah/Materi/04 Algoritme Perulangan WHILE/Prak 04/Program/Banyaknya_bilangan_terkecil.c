#include<stdio.h>
#include<limits.h> //lib untuk LONG_MAX (mengambil nilai max dari tipe data)
int main(){
    long int n,tmp, sm, i=0;
    sm = LONG_MAX;
    int j=0;
      scanf("%ld", &n);
        while(i<n){
            scanf("%ld", &tmp);
            if(tmp < sm){   //mencari bilangan terkecil
                sm = tmp;
                j = 0;   //j harus jadi 0 lagi kalo nemu yang terkecil
            }
            if(tmp == sm){
                j++;   
            }
            i++;
        }
    printf("%ld %d\n", sm, j);
    return 0;
}