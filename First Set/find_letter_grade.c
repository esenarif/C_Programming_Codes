/*

Program that shows the letter grade of the student according to the table below. When the program runs, the question below should be suitable for work.
Score= %40 of the midterms + 60% of the final notes
Success score:
Score < 50 F
50 < 59 D
60 < 69 C
70 < 79 B
80 > score A

*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
		
	int midterm, final;                                                                                    
	double score;
	char LetterGrade;
	
	printf("Enter your midterm and final grades = \n ");
	scanf("%d%d", &midterm, &final);
	
	score = midterm *(0.4) + final*(0.6);
	
	if (score<50) {
		LetterGrade='F';
	}
	
	else if (score<50) {
		LetterGrade='F';
	}
	
	else if (score>50 && score<59) {
		LetterGrade='D';
	}
	
	else if (score>59 && score<69) {
		LetterGrade='C';
	}
	
	else if (score>69 && score<79) {
		LetterGrade='B';
	}
	
	else {
		LetterGrade='A';
	}
	
 printf("Your letter grade is = %c", LetterGrade);
	
	return 0;
	
}
