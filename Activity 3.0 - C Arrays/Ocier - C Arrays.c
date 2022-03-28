/*
Name: Amiel Jay Ocier
Subject Code: T137

Create a Program that adds all the array elements and prints the sum

+ Array size limit is 5 to 10 only.
+ The user must input the array size
+ The user must input the elements.
*/

#include <stdio.h>
int main()
{
    int elements[10], i, n , sum = 0;
    printf("\n Enter the size of the Array (5-10): ");
    scanf("%d",&n);
    if(n>10){
        printf("\n This size exceeds the maximum point! \n");
        return 0;
    }else if(n<5){
        printf("\n This size exceeds the minimum point! \n");
        return 0;
    }else

    for(i=0; i<n; ++i)

    {
        printf(" Enter Element %d:", i+1);
        scanf("%d", &elements[i]);

        sum += elements[i];
    }
    printf("\n Sum of all array elements = %d\n", sum);
    return 0;
}
