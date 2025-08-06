#include<stdio.h>
int main (){

    int L;
    printf ("Enter the Length of Rectangle: ");
    scanf("%d", &L);

    int B;
    printf ("Enter the Breadth of Rectangle: ");
    scanf("%d", &B);

    int A = L * B;
    int P = 2*(L+B);

    if (A>P)
    printf("Area is Greater than Perimeter\n");

    if (A<P)
    printf ("Area is less than Perimeter\n");

    if (A==P)
    printf ("Area is equal to Perimeter");
    

    return 0;
}