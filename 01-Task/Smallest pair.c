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

        int minSum = arr[0] + arr[1] + 1;  // Initialize with a valid sum

        for (int i = 0; i < arrSize - 1; ++i) {
            for (int j = i + 1; j < arrSize; ++j) {
                int currentSum = arr[i] + arr[j] + (j - i);
                if (currentSum < minSum) {
                    minSum = currentSum;
                }
            }
        }

        printf("%d\n", minSum);
    }

    return 0;
}
