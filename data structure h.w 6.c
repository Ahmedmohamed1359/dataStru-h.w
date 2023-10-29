// 2-//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100


int compareIntegers(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int numbers[ARRAY_SIZE];


    srand(time(NULL));


    for (int i = 0; i < ARRAY_SIZE; i++) {
        numbers[i] = rand() % 1000;
    }


    qsort(numbers, ARRAY_SIZE, sizeof(int), compareIntegers);

    printf("Sorted numbers (from largest to smallest):\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
