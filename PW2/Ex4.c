#include <stdio.h>

int main(){
    char ch;
    printf("Enter something: ");
    scanf("%c",&ch);
    if((ch-'0')>=0 && (ch-'0')<=9){
        printf("Its numeric value");
    }
    else if((ch-'a')>=0 && (ch-'a')<=25){
        printf("Its lowercase letter");
    }
    else if((ch-'A')>=0 && (ch-'A')<=25){
        printf("Its uppercase letter");
    }
    else{
        printf("Its something else");
    }
    return 0;
}
