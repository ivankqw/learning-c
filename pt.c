#include <stdio.h>

int main(void) {
    // ===== 1. Pointer to an array of 10 ints =====
    int arr2d[3][10]; // 3 rows, each with 10 ints
    int (*ptr_to_row)[10] = arr2d; // points to first row

    // Fill arr2d with row*10 + col
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 10; c++)
            arr2d[r][c] = r * 10 + c;

    printf("Pointer to array of 10 ints:\n");
    printf("ptr_to_row points to row 0: first element = %d\n", (*ptr_to_row)[0]);
    ptr_to_row++; // moves to next row (skips 10 ints)
    printf("After ptr_to_row++: first element in row 1 = %d\n\n", (*ptr_to_row)[0]);

    // ===== 2. Array of 10 pointers to int =====
    int a = 100, b = 200, c = 300;
    int *array_of_ptrs[10]; // 10 independent int pointers

    array_of_ptrs[0] = &a;
    array_of_ptrs[1] = &b;
    array_of_ptrs[2] = &c;

    printf("Array of 10 pointers to int:\n");
    printf("array_of_ptrs[0] points to value %d\n", *array_of_ptrs[0]);
    printf("array_of_ptrs[1] points to value %d\n", *array_of_ptrs[1]);
    printf("array_of_ptrs[2] points to value %d\n", *array_of_ptrs[2]);

    return 0;
}
