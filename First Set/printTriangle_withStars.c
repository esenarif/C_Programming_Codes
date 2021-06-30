// Program that prints triangles according to the edge length entered from the keyboard. (to print the edges, use combination of * character)

#include <stdio.h>

int main() {

int i, j, edge;

printf("Enter length of the triangle = ");
scanf("%d", &edge);
    
for (i=1; i<=edge; ++i) {
    for (j=1; j<=i; ++j){
        printf("*"); 
        
    }
        printf("\n");
    }
    
    return 0;
}
