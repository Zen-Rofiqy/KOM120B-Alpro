#include <stdio.h>
int main() {
int a, b=4;
for (; a=b, b--; )
printf("%d %d\n",a,b);
return 0;
}