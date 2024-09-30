//
// Created by gywxm on 2024/9/30.
//
#include<stdio.h>
#include<math.h>
const double PI=3.1415926;
int main()
{
    /*char c='b';
    int i=3,j=5;
    float x=22.354;
    double y=435.6789;
    printf("c='%c',ASCII=%d\ni=%-8dj=%d\nx=%-8.2fy=%.2lf",c,c,i,j,x,y);*/
    double a,b,c;
    double ang,area;
    scanf("%lf %lf %lf",&a,&b,&ang);
    ang=ang/180*PI;
    c=sqrt(a*a+b*b-2*a*b*cos(ang));
    area=1.0/2*a*b*sin(ang);
    printf("c=%.2lf area=%.2lf",c,area);
    return 0;
}