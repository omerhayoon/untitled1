#include <iostream>
#include <stdio.h>



int *allocateAndInput(int size) {
    int *numbers;
    numbers = (int *)calloc(size, sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        exit(0);
    }
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    return numbers;
}

int main() {
    int size;
    do {
        printf("Enter the initial size: ");
        scanf("%d", &size);
    } while (size <= 0);

    int *numbers = allocateAndInput(size);

    printf("The numbers are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d,", numbers[i]);
    }
    free(numbers);
    return 0;
}