#include<stdio.h>
int main (){

    int RAM;
    printf ("Enter the age of RAM: ");
    scanf ("%d", &RAM);

    int SHYAM;
    printf ("Enter the age of SHYAM: ");
    scanf ("%d", &SHYAM);

    int AJAY;
    printf ("Enter the age of AJAY: ");
    scanf ("%d", &AJAY);

    if (RAM<SHYAM){
        if (RAM<AJAY)
        printf ("RAM is Youngest");
        else //AJAY<RAM<SHYAM
        printf ("AJAY is Youngest");
    }
    else{ // SHYAM<RAM
        if (SHYAM<AJAY)
        printf ("SHYAM is Youngest");
        else // AJYA<SHYAM<RAM
        printf ("AJAY is Youngest");
        
    }

    return 0;
}