#include <stdio.h>

int main(){
    int seconds,minutes;
    printf("Write seconds: ");
    scanf("%d",&seconds);
    minutes=seconds/60;
    seconds=seconds%60;
    printf("Minutes: %d, Seconds: %d",minutes,seconds);
    return 0;
}