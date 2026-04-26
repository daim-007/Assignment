#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nReciprocal series:\n");

    for(i = 1; i <= n; i++) {
        printf("1/%d+ ", i);
        sum += 1.0 / i;
    }

    printf("\n\nSum of reciprocals up to %d = %.4f\n", n, sum);

    return 0;
}