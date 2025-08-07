#include<stdio.h>
#include<stdbool.h>
int main (){

    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    bool flag = true; // in computer true=1 this for prime
    for (int i=2; i<=n/2; i++){
        if (n%i==0){
            flag = false;  // in computer false=0 this for composite
            break;          
        }
        
    }
        if (n==1)
        printf ("%d is neither prime nor composite", n);
        else if (flag == true)
        printf ("%d is Prime Number", n);
        else 
        printf ("%d is composite number", n);

    return 0;
}

// In this code we use 2 new things frist is "bool" which  a new data type  " flag " is variable for using bool we have to  use #include<stdbool.h> at the header file .