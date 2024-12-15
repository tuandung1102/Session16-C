#include <stdio.h>

void deleteElement(int *arr, int *size, int pos) {
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1]; 
    }
    (*size)--;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    deleteElement(arr, &size, 3); 
    printArray(arr, size); 

    return 0;
}

