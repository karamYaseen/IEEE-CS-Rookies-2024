#include <stdio.h>

int main() {
    int numOfTestCases;
    scanf("%d", &numOfTestCases);

    while (numOfTestCases--) {
        int arrSize;
        scanf("%d", &arrSize);

        int arr[arrSize];
        for (int i = 0; i < arrSize; ++i) {
            scanf("%d", &arr[i]);
        }

        int count = 0;
        
        // Iterate through all subarrays and check if they are non-decreasing
        for (int i = 0; i < arrSize; ++i) {
            int min_val = arr[i];
            for (int j = i; j < arrSize; ++j) {
                if (arr[j] >= min_val) {
                    // Subarray is non-decreasing
                    count++;
                    min_val = arr[j];
                } else {
                    // Subarray is not non-decreasing
                    break;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
