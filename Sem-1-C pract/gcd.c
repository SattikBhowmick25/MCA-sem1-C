#include<stdio.h>

int gcdEuclid(int a,int b){
    if(b==0){
        return a;
    }
    return gcdEuclid(b,a%b);
}

int gcdFactorization(int a,int b){
    int i,gcd;
    int min=a>b?a:b;
    for(i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}

int LCMOfArray(int arr[],int n){
    int result=arr[0],i;
    for(i=1;i<n;i++){
        result=lcm(result,arr[i]);
    }
    return result;
}
int main(){
    int a,b,choice;
    
    while(1){
        printf("\nEnter a: ");
        scanf("%d",&a);
        printf("\nEnter b: ");
        scanf("%d",&b);
        printf("\n1. Euclid Algo");
        printf("\n2. Factorization Algo");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("\nGCD Euclid: %d",gcdEuclid(a,b));
                    break;
            case 2: printf("\nGCD Factorization: %d",gcdFactorization(a,b));
                    break;
            case 3: return 0;
            default:printf("\nInvalid choice!");
        }
    }
    return 0;
}