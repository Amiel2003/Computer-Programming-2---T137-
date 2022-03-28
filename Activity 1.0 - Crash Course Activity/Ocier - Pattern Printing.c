/*      Name: Amiel Jay Ocier
        Subject code: T137

    Using nested loops, create a program that will accept an integer
    greater than 0, and print out lines of asterisk into a pattern
    specific to that input.*/

#include<stdio.h>
int main (){
int n;
int i,j;

printf("\n\n PATTERN PRINTING \n");
while(n<=0){
printf("\n Enter a number: ");
scanf("%d", &n);

if(n<=0){
    printf("\n Please enter a number greater than zero");
}
}
for(i=1;i<=n;i++){
    for(j=n;j>=1;j--){
        if(i>=j)
            printf("* ");
        else
            printf(" ");
    }
    printf("\n");
}

return 0;

}


