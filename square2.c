#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    printf("Sum of square series = %d", sum);

    return 0;
}
