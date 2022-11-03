#include<stdio.h>
#include<math.h>
float dist(float x1, float y1, float x2, float y2);
float area(int x1, int x2, int y1, int y2, int x3, int y3);
void point(int x1, int x2, int y1, int y2, int x3, int y3, int p1, int p2);

int main(){
int x1,y1,x2,y2,x3,y3,p1,p2;
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
float ar=area(x1,y1,x2,y2,x3,y3);
printf("area=%.2f",ar);
printf("enter co-cordinates of p\n");
scanf("%d%d",&p1,&p2);
point(x1,x2,y1,y2,x3,y3,p1,p2);

return 0;
}

void point(int x1, int x2, int y1, int y2, int x3, int y3, int p1, int p2){
float a =area(x1,y1,x2,y2,p1,p2)+area(x1,y1,p1,p2,x3,y3)+area(p1,p2,x2,y2,x3,y3);
float b=area(x1,y1,x2,y2,x3,y3);
if(a==b)
printf("1");
else
printf("0");
}

float dist(float x1, float y1, float x2, float y2){

float d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
d=sqrt(d);

return d;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3){
float a=dist(x1,y1,x2,y2);
float b=dist(x2,y2,x3,y3);
float c=dist(x1,y1,x3,y3);
float s=(a+b+c)/2;

s=s*(s-a)*(s-b)*(s-c);

float area=sqrt(s);
return area;
}