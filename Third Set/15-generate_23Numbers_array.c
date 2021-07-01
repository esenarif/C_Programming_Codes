// Function that prints a 23 numbered array sent into it with the main function.(Generate the 23 numbers randomly)

#include <stdio.h>
#include <stdlib.h>


int random(){
  return rand()%100;
}

int main(void) {
 
 int a[23],i;
 
 for(i = 0; i<23; i++) {
 
 a[i]=random();
 printf("%d\n ",a[i]);

}
}
