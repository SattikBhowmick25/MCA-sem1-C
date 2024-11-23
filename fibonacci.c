#include<stdio.h>
int fibonacci(int n){
    if(n<=1)    return n;
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
    int i,n;
    printf("\nEnter the number of terms in the fibonacci series: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\t",fibonacci(i));
    }
    printf("\n");
    return 0;
}