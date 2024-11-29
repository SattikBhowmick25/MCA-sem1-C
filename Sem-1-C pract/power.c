#include<stdio.h>

double myPow(double x,int y){
    int i;
    double result=1;
    for(i=1;i<=y;i++){
        result *= x;
    }
    return result;
}

int main(){
    double x;
    int y;
    printf("\nEnter the base: ");
    scanf("%lf",&x);
    printf("\nEnter the exponent: ");
    scanf("%d",&y);
    printf("\n%lf^%d = %lf",x,y,myPow(x,y));
    return 0;
}