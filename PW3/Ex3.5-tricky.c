#include <stdio.h>
#include <stdlib.h>

int my_strcmp(char* str1,char* str2){

    for(int i=0;i<(sizeof(str1)/sizeof(str1[0]));i++){
        if((*(str1+i)!='\0')&&str1[i]!=str2[i]){
            return 0;
        }
    }
    return 1;
}

char* my_strcat(char* str1, char* str2){
    char* str3=calloc(100,2*sizeof(char));
    
    int i=0;
    int j=0;
    while(str1[i]!='\0'){
        str3[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0'){
        str3[i]=str2[j];
        j++;
        i++;
    }
    return str3;
}

char* my_strcpy(char* dest, char* source){
    int i=0;

    while(1){
        if(source[i]=='\0'){
            break;
        }
        dest[i]=source[i];
        i++;
    }
    
    return dest;
}

int main(){
    char* str1;
    char* str2;
    char* dest=calloc(100,2*sizeof(char));

    printf("Test of my_strcat, please put strings: ");
    scanf("%s %s",str1,str2);
    printf("%s \n",my_strcat(str1,str2));

    printf("Test of my_strcmp, please put strings: ");
    scanf("%s %s",str1,str2);
    if(my_strcmp(str1,str2)==1){
        printf("%s and %s are equal\n",str1,str2);
    }
    else{
        printf("%s and %s are NOT equal\n",str1,str2);
    }

    printf("Test of my_strcpy, please put string: ");
    scanf("%s",str1);
    printf("%s is copied one",my_strcpy(dest,str1));
    return 0;
}