#include<stdio.h>

int findRoom(int n){
    int x,sumLeft=0,sumRight=0;
    int totalSum=n*(n+1)/2;

    for(x=1;x<n;x++){
        sumLeft=(x-1)*x/2;
        sumRight=totalSum-sumLeft-x;
        if (sumLeft == sumRight) {
            return x; 
        }
    }
    return -1;
}

int main() {
    int n;

    printf("Enter the total number of rooms (n): ");
    scanf("%d", &n);

    int roomNumber = findRoom(n);
    if (roomNumber != -1) {
        printf("The professor lives in room number: %d\n", roomNumber);
    } else {
        printf("No such room number exists where the sums are equal.\n");
    }

    return 0;
}