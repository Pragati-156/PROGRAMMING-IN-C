#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("enter first number: ");
    scanf ("%d" , &a);

    printf ("enter second number:");
    scanf ("%d", &b);

    printf("enter third number : ");
    scanf ( " %d", &c);

    largest=( a>b)?(( a>c)? a:c):((b>c)? b:c);

    printf("largest number is: %d\n",largest);

    return 0;

}