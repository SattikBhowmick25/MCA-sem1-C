#include<stdio.h>

void main(){
    int n,i,f=1,sq=0;
    printf("\nEnter the numner of terms: ");
    scanf("%d",&n);
    printf("\nThe perfect square numbers are: ");
    for(i=1;i<=n;i++){
        sq += f;
        f += 2;
        printf("%d\t",sq);
    }
    printf("\n");
}