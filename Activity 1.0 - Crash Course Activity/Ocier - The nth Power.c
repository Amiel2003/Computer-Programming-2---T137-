/*      Name: Amiel Jay Ocier
        Subject code: T137

        Create a program that accepts two integers to represent X to the
        power of Y: The base, and the exponent X may be greater or lesser than 0,
        but should not equal to 0. For Y, several constraints are placed:

        If Y>0, multiply X by itself in terms of Y.

        If Y<0, do the same as above but the resulting number should become a
        denominator, with 1 as a numerator. It should be a fraction, not a floating
        integer.

        If Y==0, the result should always be 1 regardless of X.*/

#include<stdio.h>
int main (){
int x, y;
int power=1, expo;

printf("\n THE NTH POWER \n");
printf("\n Enter your base: ");
scanf("%d",&x);
printf(" Enter your exponent: ");
scanf("%d",&y);

expo = y;
if(x==0){
    printf("\n The base should not be zero \n");

}else if(y>0){
    while(y!=0){
        power = power*x;
        y--;
    }
    printf("\n %d to the power of %d: %d\n",x,expo,power);

}else if(y<0){
    y = y*1;
    while(y!=0){
        power = power*x;
        y++;
    }
    printf("\n %d to the power of %d: 1/%d\n",x,expo,power);

}else if(y==0){
    printf("\n %d to the power of 0: 1\n\n",x);

}else{
    printf("\n Unrecognized variables! \n");
    }

return 0;
}


