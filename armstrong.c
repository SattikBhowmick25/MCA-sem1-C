#include<stdio.h>
#include<math.h>

int countDigits(int num){
    int count=0;
    while(num>0){
        num/=10;
        count++;
    }
    return count;
}
int isArmstrong(int num){
    int digit,sum=0,copy=num;
    int numD=countDigits(num);
    while(num>0){
        digit=num%10;
        sum += (int)pow(digit,numD);
        num/=10;
    }
    printf("\n%d",sum);
    if(sum==copy)   return 1;
    return 0;
}
int main(){
    int num;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    if(isArmstrong(num))
        printf("\nArmstrong number");
    else
        printf("\nNot armstrong number");
    
    return 0;
}