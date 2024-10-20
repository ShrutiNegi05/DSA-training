#include <stdio.h>
void printHollowSquare(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");  
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printHollowSquare(rows, cols);

    return 0;
}
