#include <stdio.h>
int main(){ 
    double arr[][3]={ {1.2, 9.0, 2.3},
                      {2.1, 4.5},
                      {9.4, 3.7, 4.5}};
    printf("%lf\n", arr[2][1]);
    printf("%lf\n", arr[1][2]);
    return 0;
}
/*
OUTPUT : 3.700000
tapi kyknya harusnya 3.7
*/
