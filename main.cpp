#include <stdio.h>
#include <stdlib.h>

int *allocateAndInput(int *size) {
    printf("Enter the initial size: ");
    scanf("%d", size);

    if (*size <= 0) {
        printf("Invalid size\n");
        exit(0);
    }

    int *numbers = (int *)calloc(*size, sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        exit(0);
    }

    printf("Enter %d numbers:\n", *size);
    for (int i = 0; i < *size; i++) {
        scanf("%d", &numbers[i]);
    }

    return numbers;
}

int main() {
    int size;
    int *numbers = allocateAndInput(&size);

    printf("The numbers are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

    free(numbers);

    return 0;
}
