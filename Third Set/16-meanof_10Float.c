// The function that returns the mean of the 10 float number array according to a decimal array and the number of elements sent into it.

#include <stdio.h>
int main() {
    int n, i;
    float num[10], sum = 0.0, avg;

    printf("Enter the numbers of elements = ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Enter the numbers between 1 and 100 !\n");
        printf("Enter the number again = ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter the numbers = ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Mean is = %.2f", avg);
    return 0;
}
