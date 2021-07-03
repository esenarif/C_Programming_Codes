/*
Program that displays 5 strings entered from the keyboard in alphabetical order (A-Z). The sorting process in the program should be done in the bubble function that uses the bubble sorting algorithm.

Sample Run:
Please Enter the Names:
Betül
Seçil
Abdullah
Adem
Kenan

In Order:
Adem
Abdullah
Betül
Kenan
Seçil

*/


#include <stdio.h>
#include <string.h>

void main() {
  

  char name[50][50],temp[50];
  int n,i,j;
  
  printf("Enter the number of names : \n");
  scanf("%d",&n);

printf("Please enter %d names :",n);
  for(i=0;i<=n;i++)
  {
       
       fgets(name[i], sizeof name, stdin);
  }
     

     for(i=1;i<=n;i++)
	for(j=0;j<=n-i;j++)
	  if(strcmp(name[j],name[j+1])>0)
	  { 
            strcpy(temp,name[j]);
	    strcpy(name[j],name[j+1]);
	    strcpy(name[j+1],temp);
	  }
   
   
   printf("\nIn order:\n");
	      for(i=0;i<=n;i++)
		 printf("%s\n",name[i]);
 
}
