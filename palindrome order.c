#include <stdio.h>

int main() {
    int arr[5];
    int isPalindrome = 1;  
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[5 - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The array is in palindrome order.\n");
    } else {
        printf("The array is not in palindrome order.\n");
    }

    return 0;
}
