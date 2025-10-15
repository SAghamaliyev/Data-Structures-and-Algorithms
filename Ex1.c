#include <stdio.h>
int count=0;
char ch;
void helper(){
    ch=getchar();
    int num=ch-'0';
    if(num>=0 && num<=9){
        count++;
        helper();
    }
    else{
        if(ch=='\n'){
            printf("%d",count);
        }
        else{
            helper();
        }
    }
}
int main(){
    printf("Write for character: ");
    helper();
    return 0;
}