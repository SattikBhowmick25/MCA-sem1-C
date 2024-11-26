#include<stdio.h>
#include<stdlib.h>
#define SIZE 8

// Function prototypes
void displayArray(int arr[SIZE][SIZE]);
void verticalSwap(int arr[SIZE][SIZE]);
void horizontalSwap(int arr[SIZE][SIZE]);
void randomSwap(int arr[SIZE][SIZE]);

int main(){
    int choice;
    int arr[SIZE][SIZE];
    int i,j,value=1;
    // Initializing the array with values 1-64
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            arr[i][j]=value++;
        }
    }
    // Menu-driven loop
    void (*functions[3])(int[SIZE][SIZE]) = {verticalSwap, horizontalSwap, randomSwap};
    do {
        printf("\n Array before exchange:\n");
        displayArray(arr);

        printf("\nMenu:\n");
        printf("\n1. Vertical Swap");
        printf("\n2. Horizontal Swap");
        printf("\n3. Random Swap ");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            functions[choice - 1](arr); 
        } else if (choice != 4) {
            printf("\nInvalid choice. Please try again");
        }
    } while (choice != 4);

    return 0;
}

void displayArray(int arr[SIZE][SIZE]){
    int i,j;
    printf("\n");
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}

void verticalSwap(int arr[SIZE][SIZE]){
    int i,j,temp;
    for(i=0;i<SIZE/2;i++){
        for(j=0;j<SIZE;j++){
            temp=arr[i][j];
            arr[i][j]=arr[SIZE-i-1][j];
            arr[SIZE-i-1][j]=temp;
        }
    }
    printf("\nArray after vertical swap: ");
    displayArray(arr);
}

void horizontalSwap(int arr[SIZE][SIZE]) {
    for (int j = 0; j < SIZE / 2; j++) {
        for (int i = 0; i < SIZE; i++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][SIZE - j - 1];
            arr[i][SIZE - j - 1] = temp;
        }
    }
    printf("\nArray after horizontal swap: ");
    displayArray(arr);
}

void randomSwap(int arr[SIZE][SIZE]) {
    int total = SIZE * SIZE;
    for (int i = 0; i < total - 1; i++) {
        int j = i + rand() % (total - i);

        // Convert 1D indices to 2D
        int x1 = i / SIZE, y1 = i % SIZE;
        int x2 = j / SIZE, y2 = j % SIZE;

        // Swap elements
        int temp = arr[x1][y1];
        arr[x1][y1] = arr[x2][y2];
        arr[x2][y2] = temp;
    }
    printf("\nArray after random swap: ");
    displayArray(arr);
}
