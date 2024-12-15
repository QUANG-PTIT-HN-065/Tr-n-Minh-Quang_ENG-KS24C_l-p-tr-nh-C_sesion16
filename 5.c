#include <stdio.h>
void updateArray(int *arr, int value, int position) {
    arr[position] = value; 
}
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Mảng ban đầu: ");
    printArray(numbers, size);
    int newValue = 99; 
    int position = 4;  
    updateArray(numbers, newValue, position);
    printf("Mảng sau khi cập nhật: ");
    printArray(numbers, size);

    return 0;
}
