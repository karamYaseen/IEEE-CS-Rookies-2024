#include <stdio.h>

int isSubsequence(int a[], int n, int b[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            j++;
        }
        i++;
    }

    return (j == m);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[m];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; ++i) {
        scanf("%d", &b[i]);
    }

    // Check if B is a subsequence of A
    if (isSubsequence(a, n, b, m)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
