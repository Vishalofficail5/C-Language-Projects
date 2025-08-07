#include<stdio.h>
int main (){

    int v;
    printf("Enter the Number: ");
    scanf("%d", &v);

    int sum = 0;
    while (v>=2)
    {
        int ld = v%10;
        if (ld%2==0);
        v=v/10;
        sum = sum + ld;
         
    }
    printf("%d", sum );


    return 0;
}