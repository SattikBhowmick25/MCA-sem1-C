#include<stdio.h>
#include<string.h>

int decimal(int i,char *s){
    int l=strlen(s);
    int k=s[0]-'0';
    static int j;
    j *= i;
    if(!l)  return j;
    if((k<0) || (k>9))  return 0;
    else{
        j *= 10;
        j += k;
        decimal(1,s+1);
    }
}

void I_D_B(int n){
    int i=0,bb[20],d=n;
    printf("\nDecimal %d=Binary ",n);
    while(n){
        bb[i++]=n%2;\
        n/=2;
    }
    while(i){
        printf("%d",bb[--i]);
    }
}

void R_D_B(int x,int n){
    static int a;
    int b=n%2;
    a=x;
    if(!a)  printf("\nDecimal %d=Binary ",n);
    if(n)   R_D_B(1,n/2);
    if(n)   putchar(b+'0');
}
int main(){
    int num1=10,num2=5;
    I_D_B(num1);
    R_D_B(0,num2);
    return 0;
}