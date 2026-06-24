#include <stdio.h>

int fab(int n);
int main()
{
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for(int i = 1; i <= terms; i++){
        printf("%d ", fab(i));
    }
    return 0;
}
int fab(int n)
{   if (n == 0)
    return 0;

    if (n == 1)
    return 1;

    else
    return fab(n - 1) + fab(n - 2);

}