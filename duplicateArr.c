#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j,count=0;
    int *arr,*ans;
    printf("\nEnter the number of elements of the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("\narr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    // Removing the duplicates
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==9999)    continue;
            if(arr[i]==arr[j]){
                arr[j]=9999;
                count++;
            }
        }
    }

    ans=(int*)malloc((n-count)*sizeof(int));
    j=0;
    for(i=0;i<n;i++){
        if(arr[i]!=9999){
            ans[j]=arr[i];
            j++;
        }
    }
    printf("\nResult array:");
    for(i=(n-count-1);i>=0;i--){
        printf("\t%d",ans[i]);
    }
}