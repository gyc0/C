//
// Created by gywxm on 2024/10/14.
//
#include<stdio.h>

int main(){
    int a,b,c,lcm,m,n;
    scanf("%d %d",&a,&b);
    m=a;
    n=b;
    while(1){
        c=a%b;
        if(c==0)break;
        a=b;
        b=c;
    }
    lcm=m*n/b;
    printf("gcd=%d, lcm=%d",b,lcm);
    return 0;
}