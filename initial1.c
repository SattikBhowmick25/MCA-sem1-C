#include<stdio.h>
#include<string.h>
#define SIZE 50

int main(){
    char str[SIZE]="Jadavpur University";
    char initials[SIZE]="";
    int i,count=1;
    initials[count++]=str[0];
    initials[count++]='.';
    for(i=1;i<SIZE-1;i++){
        if(str[i]==' ' && str[i+1]!=' '){
            initials[count++]=str[i+1];
            initials[count++]='.';
        }
    }
    printf("\nInitials: ");
    for(i=0;i<count;i++){
        printf("%c",initials[i]);
    }
    printf("\n");
    return 0;
}