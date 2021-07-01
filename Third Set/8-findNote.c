// The function named findNote, which returns a student's letter grade according to the data(score out of 100, class average, standard deviation) sent to it.

#include<stdio.h>

void letterGrade(int a){
    if (a < 0 || a > 100) {
        printf("please enter a number between 0 and 100");
    }
    else if (a< 50) {
        printf("Your letter grade is F \n");
    }
    else if (a < 60) {
        printf("Your letter grade is D \n");
    }
    else if (a < 70) {
        printf("Your letter grade is C \n");
    }
    else if (a < 80) {
        printf("Your letter grade is B \n");
    }
    
    else {
        printf("You have grade A \n");
    }
}

int main() {
    int a;
    printf("Enter your grade = ");
    scanf("%d", &a);
    letterGrade (a);
    return 0;
}
