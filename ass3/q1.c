//
// Created by gywxm on 2024/10/14.
//
#include<stdio.h>

int main(){
    int a,b,i=0;
    scanf("%d",&a);
    b=a;
    while(1){
        b=b/10;
        i++;
        if(b==0)break;
    }
    printf("%d digits in %d",i,a);
    return 0;
}