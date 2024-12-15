#include <stdio.h>

void update(int *arr, int pos, int newValue) {
    arr[pos] = newValue; 
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    update(arr, 2, 99); 
    printArray(arr, size); 

    return 0;
}

