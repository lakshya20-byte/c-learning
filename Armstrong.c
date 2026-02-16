# include<stdio.h>
/* Armstrong mean the number is which is equal to sum 
 of its own number 
 for ex 153 (1*3+5*3+3*3=153) */
 int main(){
    int num ; 
    printf("Enter the Armstrong number ");
    scanf("%d ",&num );

    int sum , d1 , d2,d3 ;
    d1 = num/100;  //first digit 
    d2 = (num/10)% 10; // Second digit 
    d3 = num%10 ; // Third digit 
    sum = (d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
    
    if(sum == num ) {
        printf("This is Armstrong number ");
   }
   else{
     printf("This is not Armstrong number ");
   }
       return 0;
 }