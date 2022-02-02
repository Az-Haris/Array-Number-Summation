#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num[100], n, i, sum=0;

    printf("How many numbers you want to print? = ");
    scanf("%d", &n);

    printf("Please Enter the Values by spacing = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=sum+num[i];
    }

    printf("Your Summation Result is = %d",sum);



    getch();
    return 0;
}
