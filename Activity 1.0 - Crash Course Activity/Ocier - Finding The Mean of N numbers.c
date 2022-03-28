/*      Name: Amiel Jay Ocier
        Subject code: T137

    Create a program that accepts N positive integers, terminating
    only if 0 is used as an input. It will then output the mean or
    average of the positive integers.*/

#include<stdio.h>
int main(){
    int n, sum = 0;
    int d;
    do{
        printf("FINDING THE MEAN OF N NUMBERS\n");
        printf("Enter your numbers: ");
        scanf("%d",&n);

    sum+=n;

    }
    while(n!=0.0);
    printf("Average: %d", sum/5);

return 0;
}


