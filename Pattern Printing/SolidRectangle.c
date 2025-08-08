#include<stdio.h>
int main (){

    int m;
    printf("Enter the numbers of Rows: ");
    scanf("%d",&m);

    int n;
    printf("Enter the numbers of Columns: ");
    scanf("%d",&n);
//  Nested loop 
    for(int i=1; i<=m; i++){      // Rows
        for(int j=1; j<=n; j++){  //  Columns

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}