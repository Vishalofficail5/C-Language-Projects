  #include<stdio.h>
  int main (){

   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);
   
    int nsp = n-1 ;

    for(int i=1; i<=n; i++){
        for(int k=1; k<=nsp; k++){  // spaces ka liye loop
            printf("  ");
        }
        nsp = nsp-1;
        for(int j=1; j<=i; j++){  // Number triangle 
            printf("%d ",j);
        }
        int a = i-1;   // Extra chezz ka liya dimag
        for(int q=1; q<=i-1; q++){
            printf("%d ",a);
            a=a-1;
        }printf("\n");
    }  

    return 0;
  }
  
  
  