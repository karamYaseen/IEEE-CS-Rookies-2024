#include <stdio.h>

int main() {
    int numberOfElements;
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];
    for (int i = 0; i < numberOfElements; ++i) {
        scanf("%d", &arr[i]);
    }

    // Find the minimum and maximum numbers and their indices
    int min_num = arr[0], max_num = arr[0];
    int min_index = 0, max_index = 0;

    for (int i = 1; i < numberOfElements; ++i) {
        if (arr[i] < min_num) {
            min_num = arr[i];
            min_index = i;
        }
        if (arr[i] > max_num) {
            max_num = arr[i];
            max_index = i;
        }
    }

    // Swap the minimum and maximum numbers
    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    // Print the array after the replacement operation
    for (int i = 0; i < numberOfElements; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
