#include<stdio.h>
int main ()
{
    int a , b ;
    // a and b are length and bredth of rectangle
    printf ("enter a ");
    scanf ("%d", &a);
    printf ("enter b ");
    scanf ("%d", &b);
    printf ( "perimeter : %d" , 2*(a+b) );
    printf ("area : %d", a*b);
    return 0;
}