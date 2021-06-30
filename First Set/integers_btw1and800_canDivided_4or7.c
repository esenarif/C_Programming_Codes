// Program that writes integers between 1 and 800 that can be divided exactly by 4 or 7.

#include <stdio.h>

int main() {

printf("Numbers that divided by 4 or 7 btw 1 to 800 = \n");

for(int i=1; i<=800; i++){

if(i%4==0 || i%7==0) printf("%d\n", i);

}
    return 0;
}
