#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *fptr;
char str[90];
int n;
int i=0;
fptr = fopen("E:\\Codingers\\text.txt","a");

printf("Input how many lines to be appended: ");
scanf("%d",&n);
printf("\nEnter text: \n");

while(i<n){
    scanf("%s",&str);
    fprintf(fptr,"\n",str);
    fputs(str,fptr);
    i++;
}
printf("\nData written successfully! \n");
fclose(fptr);
}
