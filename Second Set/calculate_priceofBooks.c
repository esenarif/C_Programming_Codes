/* 

The prices of children's books, novels and dictionaries sold in a stationery are determined as follows:
Children's book: 5 TL each

Novel: 0.1 TL per page for the first 200 pages, and an additional 0.05 TL for each page after 200
Dictionary: Pocket dictionaries 7.5 TL, large dictionaries 15 TL
Develop the C program that calculates the price of the book (c, C, r, R, s or S) whose first letter is entered as capital or lowercase letters, by reading the required information for each book type from the keyboard and writing it on the screen. If the type of book or dictionary type is entered incorrectly, an appropriate error message should be displayed on the screen and the program should be terminated.

NOTE: For example, enter c or C for pocket dictionary and b or B for large dictionary.

Sample Output-1
Enter the book type (c, C, r, R, s, S): R
Enter the number of pages: 250
Total Price = 22.50 TL

Sample Output-2
Enter the book type (c, C, r, R, s, S): s
Enter dictionary type (c, C, b, B): x
! ERROR: There's no such type!

Sample Output-3
Enter the book type (c, C, r, R, s, S): O
! ERROR: There is no book type like that!

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
char type;
double price;

printf(" Select the book type =  < c,C, n,N, l,L, p,P > \n");   // c,C children book  -  n,N novels  -  l,L large dictionary  -  p,P pocket dictionary
printf("\n");
scanf("%c", &type);

if (type =='c' || type =='C'){
	
	int childrenBook;
	printf("Enter number of children books = ");
	scanf("%d", &childrenBook);
	
	price = 5*childrenBook;
	
	printf("Price is = %.2f TL", price);

}


else if (type =='n' || type =='N'){
	
	int page;
	printf("Enter number of pages of novel = ");
	scanf("%d", &page);
	
	if (page<=200){
		price=page*0.1;
		
		printf("Price is %.2f TL", price);
	}
	
	if(page>=200){
		price=(0.1*200) + (page-200) * 0.05;
	}
	printf("Price is %.2f TL", price);
	
}


else if (type =='p' || type =='P'){
	
	float pocketD;
	printf("Enter number of pocket dictionaries = ");
	scanf("%f", &pocketD);
	
    price = (7.5) * pocketD;
	
	printf("Price is = %.2f TL", price);

}

else if (type =='l' || type =='L'){
	
	int largeD;
	printf("Enter number of large dictionaries = ");
	scanf("%d", &largeD);
	
	price = 15*largeD;
	
	printf("Price is = %.2f TL", price);

}


else{
	printf("There is no book type like that!");
}


return 0;
}
