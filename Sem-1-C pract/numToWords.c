#include <stdio.h>

void numberToWords(int num, char *words[]) {
    if (num == 0) {
        printf("zero ");
        return;
    }

    if (num / 10000000 > 0) {
        printf("%s crore ", words[num / 10000000]);
        num %= 10000000;
    }

    if (num / 100000 > 0) {
        printf("%s lakh ", words[num / 100000]);
        num %= 100000;
    }

    if (num / 1000 > 0) {
        printf("%s thousand ", words[num / 1000]);
        num %= 1000;
    }

    if (num / 100 > 0) {
        printf("%s hundred ", words[num / 100]);
        num %= 100;
    }

    if (num > 0) {
        if (num <= 20) {
            printf("%s ", words[num]);
        } else {
            printf("%s ", words[20 + (num / 10)]);
            if (num % 10 > 0) {
                printf("%s ", words[num % 10]);
            }
        }
    }
}

void indianNumberSystem(int num, char *words[]) {
    printf("Indian Number System: ");
    numberToWords(num, words);
    printf("\n");
}

void internationalNumberSystem(int num, char *words[]) {
    printf("International Number System: ");
    if (num / 1000000 > 0) {
        printf("%s million ", words[num / 1000000]);
        num %= 1000000;
    }

    if (num / 1000 > 0) {
        printf("%s thousand ", words[num / 1000]);
        num %= 1000;
    }

    if (num / 100 > 0) {
        printf("%s hundred ", words[num / 100]);
        num %= 100;
    }

    if (num > 0) {
        if (num <= 20) {
            printf("%s ", words[num]);
        } else {
            printf("%s ", words[20 + (num / 10)]);
            if (num % 10 > 0) {
                printf("%s ", words[num % 10]);
            }
        }
    }
    printf("\n");
}

int main() {
    char *words[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", 
        "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", 
        "eighty", "ninety"
    };

    int num;
    printf("Enter an 8-digit number: ");
    scanf("%d", &num);

    if (num < 0 || num > 99999999) {
        printf("Invalid input! Please enter an 8-digit number.\n");
    } else {
        indianNumberSystem(num, words);
        internationalNumberSystem(num, words);
    }

    return 0;
}
