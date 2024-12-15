#include <stdio.h>

void insertElement(int *arr, int *size, int pos, int value) {
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[pos] = value; 
    (*size)++; 
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {1, 2, 3, 5, 6}; 
    int size = 5; 

    insertElement(arr, &size, 3, 4); 
    printArray(arr, size); 

    return 0;
}

