#include <stdio.h>

int my_isalpha(char c){
    if((c>='A' && c<='z') && (c>='a' || c<='Z')){
        return 1;
    }
    else{
        return 0;
    }
}

int my_isdigit(char c){
    if(c>='0' && c<='9'){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char c;
    printf("Please, put value: ");
    scanf("%c",&c);
    if(my_isalpha(c)==1){
        printf("%c is letter",c);
    }
    else if(my_isdigit(c)==1){
        printf("%c is digit",c);
    }
    else{
        printf("%c is neither letter, nor digit",c);
    }
    return 0;
}