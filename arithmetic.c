# include<stdio.h>
/* print arithmetic operation like add, mutiply,
 division and subtraction */
 int main()
 {
    int a , b ; 
    printf("Enter two number");
    scanf("%d %d", &a ,&b );

    printf("Addition is %d \n", a+b);
    printf("Substraction is %d \n", a-b);
    printf("Multipy is %d \n", a*b);
    printf("Division is %d \n", a/b);
    return 0 ;
 } 