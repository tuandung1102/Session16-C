#include <stdio.h>

int find(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i; 
    }
    return -1; 
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5; 

    int position = find(arr, size, target); 
    printf("%d\n", position); 

    return 0;
}

