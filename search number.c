#include <stdio.h>

int main() {
    int arr[10], num, index = -1;


    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == num) {
            index = i;
            break;
    }

    if (index != -1) {
        printf("The number is found at index: %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}
