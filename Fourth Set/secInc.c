/*

Write a function named secInc that increments the value of a variable of type time struct containing integer hour, minute, second members by one second.
When the time value sent to it is 21:58:32, the value it will convert to should be 21:58:33.

*/


#include <stdio.h>

struct secInc {
    
    int hours;
    int minutes;
    int seconds;
};

struct secInc updateTime(struct secInc now) {   
    now.seconds++; 
    if (now.seconds == 60) {
        now.seconds = 0; 
        now.minutes++; 
        
        if (now.minutes == 60) {
            now.minutes = 0;
            now.hours++; 
        }
    }

    return now; 
}

struct secInc clockKeeper(struct secInc now) {
    
    now = updateTime(now); 

    return now; 
}

int main(void) {
    
    struct secInc clockKeeper(struct secInc now); 
    struct secInc present, future; 

    printf("Enter the time (as hour:minute:second): "); 
    scanf("%i:%i:%i",  &present.hours, &present.minutes, &present.seconds); 

    future = clockKeeper(present); 

    
    printf("One second incremented : %.2i:%.2i:%.2i\n", future.hours, future.minutes, future.seconds); 

    return 0; 
}
