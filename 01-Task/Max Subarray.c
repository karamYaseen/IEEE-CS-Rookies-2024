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

        for (int i = 0; i < arrSize; ++i) {
            int max_num = arr[i];
            for (int j = i; j < arrSize; ++j) {
                if (arr[j] > max_num) {
                    max_num = arr[j];
                }
                printf("%d ", max_num);
            }
        }
        printf("\n");
    }

    return 0;
}
