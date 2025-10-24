#include <stdio.h>

char my_toupper(char c){
    if(c>='a'&&c<='z'){
        return c-32;
    }
    else{
        return c;
    }
}

char my_tolower(char c){
    if(c>='A'&&c<='Z'){
        return c+32;
    }
    else{
        return c;
    }
}

int main(){
    char* str;
    printf("Please, put string: ");
    scanf("%s",str);
    printf("Upper variant: ");
    for(int i=0;i<(sizeof(str))/sizeof(str[0]);i++){
        printf("%c",my_toupper(str[i]));
    }
    printf("\nLower variant: ");
    for(int i=0;i<(sizeof(str))/sizeof(str[0]);i++){
        printf("%c",my_tolower(str[i]));
    }
    return 0;
}