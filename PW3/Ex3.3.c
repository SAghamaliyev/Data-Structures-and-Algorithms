#include <stdio.h>

int my_strlen(char* string){
    int i=0;
    while(string[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    char* string;
    printf("Please, write your string: ");
    scanf("%s",string);
    printf("The length of \"%s\" is %d",string,my_strlen(string));
    return 0;
}