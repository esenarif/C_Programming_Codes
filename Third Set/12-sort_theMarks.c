// The program that sorts the marks entered from the keyboard in ascending order

#include <stdio.h>

int main(){
    
    int line, i, j, nos=1; // nos: number of stars
    char character;

      printf("Enter the number of line = ");
    scanf("%d", &line);
    
    printf("Enter the mark = (Enter the just one character,number, mark) \n");
    
    scanf(" %c", &character);
    printf("\n");
    
    for(i=0; i<line; i++){  //line
        
        for(j=0; j<nos; j++){ // star
            printf("%c", character);    
        }
    
    printf("\n");
    
    nos++;
    }
    return 0;
}
