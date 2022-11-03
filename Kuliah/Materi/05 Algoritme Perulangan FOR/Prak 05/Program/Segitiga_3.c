#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

double PanjangAntaraDuaTitik(double x1,double y1, double x2, double y2)
{
    return sqrt(pow(x1-x2,2) + pow(y1 - y2,2));
}

double RumusLuasVersiHeron(double x1, double y1,double x2,double y2,double x3,double y3)
{
    double L,p1,p2,p3;

    p1 = PanjangAntaraDuaTitik(x1,y1,x2,y2);
    p2 = PanjangAntaraDuaTitik(x1,y1,x3,y3);
    p3 = PanjangAntaraDuaTitik(x3,y3,x2,y2);

    L = sqrt((p1+p2-p3)*(p1+p3-p2)*(p2+p3-p1)*(p1+p2+p3));

    return L;
}

int ApakahDiDalam(double x, double y, double x1, double y1,double x2,double y2,double x3,double y3)
{
    double L,L1,L2,L3;
    L = RumusLuasVersiHeron(x1,y1,x2,y2,x3,y3);
    L1 = RumusLuasVersiHeron(x,y,x2,y2,x3,y3);
    L2 = RumusLuasVersiHeron(x1,y1,x,y,x3,y3);
    L3 = RumusLuasVersiHeron(x1,y1,x2,y2,x,y);

    if((L + 0.00001) >= (L1 + L2 + L3)) // penambahan sedikit nilai dari L untuk akurasi yang lebih tinggi
    {
        return 1;
    }

    return 0;
}



int main(int argc, char **argv)
{
    int n,i=0;
    double x1,y1,x2,y2,x3,y3,x,y;
    scanf("%lf %lf %lf %lf %lf %lf", &x1,&y1,&x2,&y2,&x3,&y3);
    scanf("%d",&n);
    while(i < n)
    {
        scanf("%lf %lf",&x,&y);
        if((ApakahDiDalam(x,y,x1,y1,x2,y2,x3,y3))) printf("DALAM\n");
        else printf("LUAR\n");
        i++;
    }
    return 0;
}
