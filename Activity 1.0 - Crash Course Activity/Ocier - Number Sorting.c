/*      Name: Amiel Jay Ocier
        Subject code: T137

    Create a program that accepts 10 positive integers and
    sorts these in descending order*/

#include <stdio.h>
void main (){

int number[30];

int i, j, a;

printf("\n NUMBER SORTING \n");
printf("\nEnter the 10 numbers \n");
for (i = 0; i < 10; ++i)
scanf("%d", &number[i]);


for (i = 0; i < 10; ++i)
{
  for (j = i + 1; j < 10; ++j)
   {
    if (number[i] < number[j])
       {
       a = number[i];
       number[i] = number[j];
       number[j] = a;
       }
   }
}

  printf("\n Descending Order: \n");
 for (i = 0; i < 10; ++i)
    {

      printf("%d,", number[i]);
     }
 }
