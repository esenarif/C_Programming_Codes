// The function that finds the total number of vowels inside of the 10 char type array.*/

#include <stdio.h>

int main() {
    char line[10];
    int vowels;

    vowels =  0;

    printf("Enter the string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
       
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
 line[i] == 'U') {
            
            vowels++;
      
        }
    }

    printf("Count of vowels: %d", vowels);
    
    return 0;
}
