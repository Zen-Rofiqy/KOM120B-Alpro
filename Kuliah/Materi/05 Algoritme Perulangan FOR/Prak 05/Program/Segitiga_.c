#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>


float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
float A = area (x1, y1, x2, y2, x3, y3);
float A1 = area (x, y, x2, y2, x3, y3);
float A2 = area (x1, y1, x, y, x3, y3);
float A3 = area (x1, y1, x2, y2, x, y);

return (A >= A1 + A2 + A3);
}


int main()
{
long int n;
double x[3];
double y[3];
double dtx, dty;
    scanf("%lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2]);
    scanf("%ld", &n);
for(int i = 0; i<n; i++){
    scanf("%lf %lf", &dtx, &dty);
    if (isInside(x[0], y[0], x[1], y[1], x[2], y[2], dtx, dty))
	    printf ("DALAM\n");
    else
	    printf ("LUAR\n");
}
return 0;
}
