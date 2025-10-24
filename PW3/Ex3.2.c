#include <stdio.h>

int main(){
    int leap_year;
    printf("Please write a year: ");
    scanf("%d",&leap_year);
    if(leap_year%400==0 || (leap_year%4==0 && leap_year%100!=0)){
        printf("The %d year is leap",leap_year);
    }
    else{
        printf("The %d year is NOT leap",leap_year);
    }
    return 0;
}