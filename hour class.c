#include <stdio.h>

int main() {
    int n = 3;

    for (int i = 0; i < 2 * n - 1; i++) {
      
        int l = (i < n) ? i : 2 * n - 2 - i;

        for (int j = 0; j < l; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * (n - l) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}