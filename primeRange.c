#include<stdio.h>

int isPrime(int num){
    int i;
    if(num==1)  return 0;
    if(num==2)  return 1;
    for(i=2;i*i<=num;i++){
        if(num%i==0)    return 0;
    }
    return 1;
}

void displayPrime(int n){
    int i,count=0;
    printf("\nThe prime numbers below %d are: ",n);
    for(i=1;i<=n;i++){
        if(isPrime(i)){
            printf("\t%d",i);
            count++;
        }
    }
    printf("\nThe number prime numbers under %d is: %d",n,count);
}
int main(){
    int n;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    displayPrime(n);
    return 0;
}