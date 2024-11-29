#include <stdio.h>

void calculateNotes(int amount) {
    int denominations[] = {100, 50, 20, 10};
    int noteCount[4] = {0};
    int i;

    for (i = 0; i < 4; i++) {
        if (amount >= denominations[i]) {
            noteCount[i] = amount / denominations[i];
            amount %= denominations[i];
        }
    }

    // Display the result
    printf("Minimum notes required:\n");
    for (i = 0; i < 4; i++) {
        if (noteCount[i] > 0) {
            printf("Rs. %d: %d\n", denominations[i], noteCount[i]);
        }
    }

    if (amount > 0) {
        printf("Remaining amount Rs. %d cannot be paid with available denominations.\n", amount);
    }
}

int main() {
    int amount;

    printf("Enter the amount to be paid: ");
    scanf("%d", &amount);
    calculateNotes(amount);
    return 0;
}