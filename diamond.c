#include <stdio.h>
#include <stdbool.h>

bool printDiamond(int rows) {
    
    if (rows % 2 == 0) {
        printf("Error: Number of rows must be odd.\n");
        return false;
    }

    int mid = rows / 2;

    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
       
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return true;
}

int main() {
    int rows;

    printf("Enter the number of rows (odd number): ");
    scanf("%d", &rows);

    bool result = printDiamond(rows);

    if (result) {
        return 0;
    }

    return 1;  
}
