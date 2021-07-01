// Program that prints the longest and shortest 5 lengths of the students according to the height of a 30-people entered

#include <stdio.h>

void sort(int arr[]) {
for(int i =0; i < 30; i++) {
   for(int j = 0; j < 30; j++) {
    if(arr[i] < arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}}}}

void printLongestAndShortestLength(int arr[]){
printf("\n5 shortest lenghts = ");
for(int i = 0; i < 5; i++)
printf("%d ",arr[i]);
    
printf("\n5 longest lenghts = ");
for(int i = 24; i < 30; i++)
printf("%d ",arr[i]);
}


void main() {
 int arr[30];
 printf("Enter the heights of 30 people = ");
 for(int i = 0; i < 30; i++){
        scanf("%d", &arr[i]);
 }
    sort(arr);
    printLongestAndShortestLength(arr);
}
