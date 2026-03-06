#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target, i;
    int found = 0; // Flag to check if element is found

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to search (R): ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found at index %d.\n", target, i);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
