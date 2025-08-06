#include<stdio.h>
int main (){

  // M1

    int x;
    printf ("Enter Marks: ");
    scanf ("%d", &x);

    if (x>=81)
        printf ("Very Good");
    
    if (x>=61 && x<=80)
        printf ("Good");
            
    if (x>=41 && x<=60)
        printf ("Average");
        
    if (x<=40)
        printf ("Fail");    



// M2

    int x;
    printf ("Enter Marks: ");
    scanf ("%d", &x);

    if (x>=81) 
        printf("Very Good");
        else {
            if (x>=61)
            printf ("Good");
            else {
                if (x>=41)
                printf ("Average");
                else{
                    printf ("Fail");
                }
            }
        }
        
    // M3
    
    int x;
    printf ("Enter Marks: ");
    scanf ("%d", &x);

    if (x>=81)
        printf ("Very Good");
    else if (x>=61)
        printf ("Good");
    else if (x>=41)
        printf ("Average");
    else 
        printf ("Fail");
        
    
    return 0;
} 