#include <stdio.h>

int main(){
    char ch;
    printf("Enter value: ");
    ch=getchar();
    switch(ch){
        case '1':
            printf("One\n");
            break;
        case '2':
            printf("Two\n");
            break;
        case '3':
            printf("Three\n");
            break;
        default:
            printf("Other Character\n");
            break;            
    }
    return 0;
}
