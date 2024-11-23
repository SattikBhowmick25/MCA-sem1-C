#include<stdio.h>

int main(){
    char key;
    char op='+';
    int i,result=0,numVal;
    printf("\nAccept calculator(version 0) Input(Press = and <Enter> to End):");
    Check_Key:
    {
        numVal=0;
        Accept_Key:
        key=getchar();
        if(key>='0' && key<='9'){
            numVal=numVal*10+key-'0';
            goto Accept_Key;
        }
        if(op=='+') result+=numVal;
        if(op=='-') result-=numVal;
        if(op=='*') result*=numVal;
        if(op=='/') result/=numVal;
        if(key!='='){
            op=key;
            goto Check_Key;
        }
    }
    printf("\nResult = %d\nPress . and Enter to exit",result);
    while(op=getchar()!='.');
    return 0;
}