#include<stdio.h>
int main () {

    int x;
    printf ("ENTER WEEK NUMBER: ");
    scanf ("%d", &x);

    switch (x)
    {
    case 1:
        printf("MONEDAY");
break;
    case 2:
        printf("TUESDAY");
break;
    case 3:
        printf("WEDNESDAY");
break;
    case 4:
        printf("THURSDAY"); 
break;
    case 5:
        printf("FRIDAY");
break;
    case 6:
        printf("SATURDAY");
break;
    case 7:
        printf("SUNDAY=FUNDAY");
        break;
    default:
        printf("Invalid Number");
        break;
    }
  
    
    return 0;
}