#include <stdio.h>

int main() {
    int num, max;
    
    printf("Enter number 1: ");
    scanf("%d", &num);
    
    max = num;
    
    for (int i = 2; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if (num > max) {
            max = num;
        }
    }
    
    printf("The maximum number is: %d\n", max);

    return 0;
}
