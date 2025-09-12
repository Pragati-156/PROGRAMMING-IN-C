#include<stdio.h>
int main()
{
    int a;
    printf("enter an integer: ");
    scanf("%d", &a);

    ( a & 1) ? printf("%d is odd.\n" , a) : printf("%d is even.\n" , a);
    
    return 0;

}
