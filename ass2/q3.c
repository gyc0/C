//
// Created by gywxm on 2024/10/12.
//
#include<stdio.h>
#include<math.h>

int main(){
    float a,b;
    char n;
    scanf("%f%c%f",&a,&n,&b);
    if(n=='+')printf("%g+%g=%g",a,b,a+b);
    else if(n=='-')printf("%g-%g=%g",a,b,a-b);
    else if(n=='*')printf("%g*%g=%g",a,b,a*b);
    else if(n=='/'){
        if(fabs(b)>1e-6)printf("%g/%g=%g",a,b,a/b);
        else printf("Error: division by zero");
    }
    else printf("Illegal operation");
    //another possible vision
    /*
    switch(n){
        case '+' :
            printf("%g+%g=%g",a,b,a+b);break;
        case '-' :
            printf("%g-%g=%g",a,b,a-b);break;
        case '*' :
            printf("%g*%g=%g",a,b,a*b);break;
        case '/' :
            if(fabs(b)>1e-6)printf("%g/%g=%g",a,b,a/b);
            else printf("Error: division by zero");
            break;
        default : printf("Illegal operation");break;
    }
     */
    return 0;
}
