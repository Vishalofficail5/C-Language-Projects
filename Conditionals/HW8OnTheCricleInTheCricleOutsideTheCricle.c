#include<stdio.h>
int main () {

    int a = 5;
    int b = 5;
    int r = 5;

    int x;
        printf ("Enter The Value of x: ");
        scanf ("%d", &x);
    int y;
        printf ("Enter The Value of y: ");
        scanf ("%d", &y);

    int Formula = (x-a)*(x-a) + (y-b)*(y-b);
    int Radius = r*r;                                                                                       
    if (Formula == Radius)
        printf ("On The Cricle");
    else if (Formula > Radius)
        printf ("Outside The Cricle");
    else if (Formula < Radius)
        printf ("In The Cricle");

    return 0;
}
// Dont write formula ever line give them a name it is ez to read and code with no error 