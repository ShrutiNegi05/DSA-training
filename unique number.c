#include <stdio.h>

int main() {
    int arr[10], isUnique;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique numbers in the array are:\n");


    for (int i = 0; i < 10; i++) {
        isUnique = 1;
        
        for (int j = 0; j < 10; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
