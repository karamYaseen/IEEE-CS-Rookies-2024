#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int a[num], b[num];
    int count_a[100001] = {0};
    int count_b[100001] = {0};

    for (int i = 0; i < num; ++i) {
        scanf("%d", &a[i]);
        count_a[a[i]]++;
    }

    for (int i = 0; i < num; ++i) {
        scanf("%d", &b[i]);
        count_b[b[i]]++;
    }

    // Check if B is a permutation of A
    int is_permutation = 1;

    for (int i = 1; i <= num; ++i) {
        if (count_a[i] != count_b[i]) {
            is_permutation = 0;
            break;
        }
    }

    // Print the result
    if (is_permutation) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
