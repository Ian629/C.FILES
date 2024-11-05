//Bank loan//
#include<stdio.h>

int main() {
    int age , income;
    
    printf("Enter the age");
    scanf("%d" , & age);
    
    printf("Enter the income");
    scanf("%d" , & income);
    
    if(age>=25 & income>=35000){
        printf("Congratulation you qualify for the loan");
    }
    else{
        printf("You do not qualify for the loan try next time");
    }
    return 0;
}
