#include <stdio.h>

int main(){
    int smal_num=0,num=0,larg_num=0,sum_num=0;
    printf("Put values: ");
    for(int i=0;i<3;i++){
        scanf(" %d",&num);
        if(smal_num==0 || num<smal_num){
            smal_num=num;
        }
        if(larg_num==0 || num>larg_num){
            larg_num=num;
        }
        sum_num+=num;
    }
    printf("Smallest number: %d\nLargest number: %d\nSum of numbers: %d",smal_num,larg_num,sum_num);
    return 0;
}
