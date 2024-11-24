#include<stdio.h>

int isComposite(int num){
    int i;
    if(num==1 || num==2)  return 0;
    for(i=2;i*i<=num;i++){
        if(num%i==0)    return 1;
    }
    return 0;
}

void displayfactors(int n){
    int i,factor;
    for(i=1;i<=n;i++){
        if(isComposite(i)){
            printf("\nFactors of %d are:\t1",i);
            for(factor=2;factor<=i/2;factor++){
                if(i%factor==0) printf("\t%d",factor);
            }
            printf("\t%d",i);
        }
    }
}

int main(){
    int n;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    displayfactors(n);
}