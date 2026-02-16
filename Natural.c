# include<stdio.h>
// natural number which start from 1, 2 , 3 and so on
int main(){
    int num;
    printf("Enter natural number");
    scanf("%d",& num );
    
    if (num <= 10){
     printf("Number is natural ");
    }
    else{
        printf("Number is not natural");
    }
}