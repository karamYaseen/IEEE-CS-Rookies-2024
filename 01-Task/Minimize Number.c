#include <stdio.h>

int main() {
    int arrSize;
    scanf("%d", &arrSize);

    int arr[arrSize];
    for (int i = 0; i < arrSize; ++i) {
        scanf("%d", &arr[i]);
    }

    int max_operations = 0;

    // Check if all numbers are even and perform operations accordingly
    while (1) {
        int all_even = 1;
        for (int i = 0; i < arrSize; ++i) {
            if (arr[i] % 2 != 0) {
                all_even = 0;
                break;
            }
        }

        if (all_even) {
            for (int i = 0; i < arrSize; ++i) {
                arr[i] /= 2;
            }
            max_operations++;
        } else {
            break;
        }
    }

    printf("%d\n", max_operations);

    return 0;
}
