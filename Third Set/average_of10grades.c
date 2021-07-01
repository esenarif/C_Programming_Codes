// According to the 10 exam grade entered from the keyboard as integers, code the C program that prints the ones above the average on the screen.

#include <stdio.h>
int main() {
    
    int i, n;
    float numbers[10], sum = 0.0, avg;

    for (i = 0; i < 10; ++i) {
        printf("Enter grade %d = ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    avg = sum / 10;
    printf("Average is = %.2f\n", avg);
    printf("The grades that greater than average are = \n");
    for (i=0;i<10;i++){
        if(numbers[i]>avg)
        {
            printf("%.2f\n",numbers[i]);
        }
    }
    return 0;
}
