//
// Created by gywxm on 2024/10/12.
//
#include<stdio.h>

int main(){
    int a,b;
    char n;
    scanf("%d %d%c",&a,&b,&n);
    if(n=='y')printf("a=%d, b=%d",b,a);
    else printf("No swap!");
    return 0;
}