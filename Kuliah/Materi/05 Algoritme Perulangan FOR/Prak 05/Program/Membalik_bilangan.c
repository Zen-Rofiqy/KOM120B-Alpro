#include <stdio.h>

int main() {

  long int n, reverse = 0, remainder,i;

  scanf("%ld", &n);

for(i=n; n != 0;){
    remainder = n % 10;
    reverse = reverse * 10 + 3*remainder;
    n /= 10;
}
/* Kalo pake While
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + 3*remainder;
    n /= 10;
  }
*/
  printf("%ld", reverse);

  return 0;
}