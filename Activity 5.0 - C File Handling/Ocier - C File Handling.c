#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *fptr;
char str[90];
int n;
int i=0;
fptr = fopen("E:\\Codingers\\text.txt","w");

printf("Input how many lines to be appended: ");
scanf("%d",&n);

while(i<n+1){
    fprintf(fptr,"\n",str);
    gets(str);
    fputs(str,fptr);
    i++;
}
printf("\n Data written successfully! \n");
fclose(fptr);
}
