// The program that reverse the array and prints the results after transferring 10 numbers into the array.*/

#include<stdio.h>

void reverseArray(int arr[], int start, int end) {
 int temp;
 while (start < end) {
  temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
 }
} 


void printArray(int arr[], int size){

int i;
for (i=0; i < size; i++)
printf("%d ", arr[i]);

printf("\n");
}


int main() {
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int n = sizeof(arr) / sizeof(arr[0]);
 printArray(arr, n);
 reverseArray(arr, 0, n-1);
 printf("\n");
 printf("Reversed array is : \n");
 printf("\n");
 printArray(arr, n);
 return 0;
}
