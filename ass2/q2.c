//
// Created by gywxm on 2024/10/12.
//
#include<stdio.h>

int main(){
    char a;
    a=getchar();
    if(a>='a'&&a<='z')printf("lowercase letter");
    else if(a>='A'&&a<='Z')printf("uppercase letter");
    else if(a>='0'&&a<='9')printf("digit");
    else printf("others");
    return 0;
}