#include <stdio.h>

int main() {
    int n, i, j, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; 
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                if(freq[j] == -1) {
                    freq[j] = 0;
                    count++;  
                }
                freq[i] = 0; 
            }
        }
    }

    printf("\nTotal number of duplicate numbers: %d\n", count);

    return 0;
}
