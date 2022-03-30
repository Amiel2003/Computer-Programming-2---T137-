/*
Name: Amiel Jay Ocier
Subject Code: T137

*/

#include <stdio.h>
int main(){
    int acc;
    int pin;
    int tarzan[3][2];
    //Account 1
    tarzan[0][0] = 3216;
    tarzan[0][1] = 143;
    //Account 2
    tarzan[1][0] = 2101;
    tarzan[1][1] = 150;
    //Account 3
    tarzan[2][0] = 5666;
    tarzan[2][1] = 360;


    printf("\n Enter ID Number: ");
    scanf("%d",&acc);

if(acc==tarzan[0][0]){
        printf("\n Enter PIN: ");
        scanf("%d",&pin);

        if(pin==tarzan[0][1]){
            printf("\n You have succesfully logged in ID#: %d\n",tarzan[0][0]);
        }else
        printf("\n Invalid ID/PIN! \n");
    }
else if(acc==tarzan[1][0]){
        printf("\n Enter PIN: ");
        scanf("%d",&pin);

        if(pin==tarzan[1][1]){
            printf("\n You have succesfully logged in ID#: %d\n",tarzan[1][0]);
        }else
        printf("\n Invalid ID/PIN! \n");
}
else if(acc==tarzan[2][0]){
        printf("\n Enter PIN: ");
        scanf("%d",&pin);

        if(pin==tarzan[2][1]){
            printf("\n You have succesfully logged in ID#: %d\n",tarzan[2][0]);
        }else
        printf("\n Invalid ID/PIN! \n");
}
else
    printf("\n Enter PIN: ");
        scanf("%d",&pin);

         printf("\n Invalid ID/PIN! \n");

    return 0;
}
