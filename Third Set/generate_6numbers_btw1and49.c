// Program that randomly generates 6 numbers between 1 - 49

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    
    int i, number;
    
    srand(time(NULL));
    
    for(i = 0 ; i < 6 ; i++) {
       
        number = rand() % 49;
        printf("%d\t",number);
    }
   
    return 0;
}
