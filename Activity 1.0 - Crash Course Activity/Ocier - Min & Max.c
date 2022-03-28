/*      Name: Amiel Jay Ocier
        Subject code: T137

    Create a program that accepts 10 positive integers and prints
    out the smallest and largest number(s) in the list.*/

#include<stdio.h>
int main (void){
int n1,n2,n3,n4,n5;
int n6,n7,n8,n9,n10;
int lowest;
int highest;
int loop=1;
printf("\n\n MIN & MAX \n");

printf("\n Please enter");
printf("\n 1st number: ");
scanf("%d",&n1);
    if(n1<0){
        printf("\n Invalid input! \n");
        return 0;
    }
printf(" 2nd number: ");
scanf("%d",&n2);
    if(n2<0){
        printf("\n Invalid input! \n");
        return 0;
    }
printf(" 3rd number: ");
scanf("%d",&n3);
    if(n3<0){
        printf("\n Invalid input! \n");
        return 0;
    }
printf(" 4th number: ");
scanf("%d",&n4);
    if(n4<0){
        printf("\n Invalid input! \n");
        return 0;
    }
printf(" 5th number: ");
scanf("%d",&n5);
    if(n5<0){
        printf("\n Invalid input! \n");
        return 0;
    }
printf(" 6th number: ");
scanf("%d",&n6);
    if(n6<0){
        printf("\n Invalid input! \n");
        return 0;
    }
printf(" 7th number: ");
scanf("%d",&n7);
    if(n7<0){
        printf("\n Invalid input! \n");
        return 0;
    }
printf(" 8th number: ");
scanf("%d",&n8);
    if(n8<0){
        printf("\n Invalid input! \n");
        return 0;
    }
printf(" 9th number: ");
scanf("%d",&n9);
    if(n9<0){
        printf("\n Invalid input! \n");
        return 0;
    }
printf(" 10th number: ");
scanf("%d",&n10);
    if(n10<0){
        printf("\n Invalid input! \n");
        return 0;
    }
//Lowest
if(n1<=n2&&n1<=n3&&n1<=n4&&n1<=n5&&n1<=n6&&n1<=n7&&n1<=n8&&n1<=n9&&n1<=n10){
    lowest = n1;}

else if(n2<=n1&&n2<=n3&&n2<=n4&&n2<=n5&&n2<=n6&&n2<=n7&&n2<=n8&&n2<=n9&&n2<=n10){
    lowest = n2;}

else if(n3<=n1&&n3<=n2&&n3<=n4&&n3<=n5&&n3<=n6&&n3<=n7&&n3<=n8&&n3<=n9&&n3<=n10){
    lowest = n3;}

else if(n4<=n1&&n4<=n2&&n4<=n3&&n4<=n5&&n4<=n6&&n4<=n7&&n4<=n8&&n4<=n9&&n4<=n10){
    lowest = n4;}

else if(n5<=n1&&n5<=n2&&n5<=n3&&n5<=n4&&n5<=n6&&n5<=n7&&n5<=n8&&n5<=n9&&n5<=n10){
    lowest = n5;}

else if(n6<=n1&&n6<=n2&&n6<=n3&&n6<=n4&&n6<=n5&&n6<=n7&&n6<=n8&&n6<=n9&&n6<=n10){
    lowest = n6;}

else if(n7<=n1&&n7<=n2&&n7<=n3&&n7<=n4&&n7<=n5&&n7<=n6&&n7<=n8&&n7<=n9&&n7<=n10){
    lowest = n7;}

else if(n8<=n1&&n8<=n2&&n8<=n3&&n8<=n4&&n8<=n5&&n8<=n6&&n8<=n7&&n8<=n9&&n8<=n10){
    lowest = n8;}

else if(n9<=n1&&n9<=n2&&n9<=n3&&n9<=n4&&n9<=n5&&n9<=n6&&n9<=n7&&n9<=n8&&n9<=n10){
    lowest = n9;}

else if(n10<=n1&&n10<=n2&&n10<=n3&&n10<=n4&&n10<=n5&&n10<=n6&&n10<=n7&&n10<=n8&&n10<=n9){
    lowest = n10;}
else{
    printf("\n lowest number unknown\n");
}

//Highest
if(n1>=n2&&n1>=n3&&n1>=n4&&n1>=n5&&n1>=n6&&n1>=n7&&n1>=n8&&n1>=n9&&n1>=n10){
    highest = n1;}

else if(n2>=n1&&n2>=n3&&n2>=n4&&n2>=n5&&n2>=n6&&n2>=n7&&n2>=n8&&n2>=n9&&n2>=n10){
    highest = n2;}

else if(n3>=n1&&n3>=n2&&n3>=n4&&n3>=n5&&n3>=n6&&n3>=n7&&n3>=n8&&n3>=n9&&n3>=n10){
    highest = n3;}

else if(n4>=n1&&n4>=n2&&n4>=n3&&n4>=n5&&n4>=n6&&n4>=n7&&n4>=n8&&n4>=n9&&n4>=n10){
    highest = n4;}

else if(n5>=n1&&n5>=n2&&n5>=n3&&n5>=n4&&n5>=n6&&n5>=n7&&n5>=n8&&n5>=n9&&n5>=n10){
    highest = n5;}

else if(n6>=n1&&n6>=n2&&n6>=n3&&n6>=n4&&n6>=n5&&n6>=n7&&n6>=n8&&n6>=n9&&n6>=n10){
    highest = n6;}

else if(n7>=n1&&n7>=n2&&n7>=n3&&n7>=n4&&n7>=n5&&n7>=n6&&n7>=n8&&n7>=n9&&n7>=n10){
    highest = n7;}

else if(n8>=n1&&n8>=n2&&n8>=n3&&n8>=n4&&n8>=n5&&n8>=n6&&n8>=n7&&n8>=n9&&n8>=n10){
    highest = n8;}

else if(n9>=n1&&n9>=n2&&n9>=n3&&n9>=n4&&n9>=n5&&n9>=n6&&n9>=n7&&n9>=n8&&n9>=n10){
    highest = n9;}

else if(n10>=n1&&n10>=n2&&n10>=n3&&n10>=n4&&n10>=n5&&n10>=n6&&n10>=n7&&n10>=n8&&n10>=n9){
    highest = n10;}
else{
    printf("\n highest number unknown\n");
}

printf("\n MIN: %d\n",lowest);
printf("\n MAX: %d\n",highest);

return 0;
}
