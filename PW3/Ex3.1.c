#include <stdio.h>

int main(){
    int number;
    printf("Please, put the value: ");
    scanf("%d",&number);
    if(number%7==0){
        printf("%d is divisible by 7",number);
    }
    else{
        printf("%d is NOT divisible by 7",number);
    }
    return 0;
}