/*  Submitted by: Ocier, Amiel Jay
    Section Code: T137

    Create a program that converts a floating integer value from a specific
    temperature measurement into another. The program should ideally accept
    three (3) inputs from the user: (1) the value to be converted, (2) the
    original measurement and (3) the converted measurement. The output should
    be the value after conversion.*/

#include<stdio.h>
int main(){
    float celsius;
    float fahrenheit;
    float kelvin;
    int choice;

    printf("\n Ocier's Temperature Converter \n");
    printf("\n Please select a conversion type \n");
    printf(" 1 - Celsius to Fahrenheit \n");
    printf(" 2 - Celsius to Kelvin \n");
    printf(" 3 - Fahrenheit to Celsius \n");
    printf(" 4 - Fahrenheit to Kelvin \n");
    printf(" 5 - Kelvin to Celsius \n");
    printf(" 6 - Kelvin to Fahrenheit \n");
    printf(" Enter your choice: ");
    scanf("%d", &choice);

if(choice == 1){
        printf("\n Celsius to Farenheit\n");
        printf(" Please enter a Celsius temperature: ");
        scanf("%f",&celsius);

        fahrenheit = (celsius * 1.8)+32;
        printf(" Result: %f Fahrenheit \n",fahrenheit);

}else if (choice == 2){
        printf("\n Celsius to Kelvin \n");
        printf(" Please enter a Celsius temperature: ");
        scanf("%f",&celsius);

        kelvin = celsius + 273.15;
        printf(" Result: %f Kelvin \n",kelvin);

}else if (choice == 3){
        printf("\n Fahrenheit to Celsius \n");
        printf(" Please enter a Fahrenheit temperature: ");
        scanf("%f",&fahrenheit);

        celsius = (fahrenheit - 32) / 1.8;
        printf(" Result: %f Celsius \n",celsius);

}else if (choice == 4){
        printf("\n Fahrenheit to Kelvin \n");
        printf(" Please enter a Fahrenheit temperature: ");
        scanf("%f",&fahrenheit);

        kelvin = (fahrenheit - 32) / 1.8 + 273.15;
        printf(" Result: %f Kelvin \n",kelvin);

}else if (choice == 5){
        printf("\n Kelvin to Celsius \n");
        printf(" Please enter a Kelvin temperature: ");
        scanf("%f",&kelvin);

        celsius = kelvin - 273.15;
        printf(" Result: %f Celsius \n",celsius);

}else if (choice == 6){
        printf("\n Kelvin to Fahrenheit \n");
        printf(" Please enter a Kelvin temperature: ");
        scanf("%f",&kelvin);

        fahrenheit = (kelvin - 273.15) * 1.8 + 32;
        printf(" Result: %f Fahrenheit \n",fahrenheit);

}else{
        printf(" \n Invalid choice\n");
        }
return 0;
}
