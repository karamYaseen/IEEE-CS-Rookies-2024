#include <stdio.h>
#include <stdbool.h>

bool isValidCode(char code[], int n) {
    if (n != 4) {
        return false;
    }

    for (int i = 0; i < n; ++i) {
        if (!((code[i] >= 'a' && code[i] <= 'z') || (code[i] >= '0' && code[i] <= '9'))) {
            return false;
        }
    }

    return true;
}

int main() {
    char code[5];
    scanf("%s", code);

    // Check if the code is valid
    if (isValidCode(code, 4)) {
        printf("Valid code\n");
    } else {
        printf("Invalid code\n");
    }

    return 0;
}
