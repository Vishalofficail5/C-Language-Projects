#include<stdio.h>
int main (){

    int x;
    printf ("Enter X-axis: ");
    scanf ("%d", &x);

    int y;
    printf ("Enter Y-axis: ");
    scanf ("%d", &y);

    if (x==0&&y==0)
        printf ("At The Origin (0,0)");
    else if (x>0&&y>0)
        printf ("AT THE 1st QUADRANT");
    else if (x<0&&y>0)
        printf ("AT THE 2nd QUADRANT");
    else if (x<0&&y<0)
        printf ("AT THE 3rd QUADRANT");
    else if (x>0&&y<0)
        printf ("AT THE 4th QUADRANT");
    else if (x==0)
        printf ("AT THE Y-AXIS");
    else if (y==0)
        printf ("AT THE X-AXIS");

    return 0;
}// In this code in b/w we cant use (,) because (,) First checks x == 0, but ignores the result. 
// Then checks y == 0 and returns only that result. this thing not happen we Logical end '&&'
// It checks both conditions If x is 0 AND y is also 0, then run the code inside the 'if'
// If either one is false, the whole condition is false.