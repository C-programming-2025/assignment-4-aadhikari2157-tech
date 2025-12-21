#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; 
    int *ptr;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Too many elements.\n");
        return 1;
    }

    ptr = arr;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("The elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
