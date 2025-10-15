#include <stdio.h>

int main(){
    float Celsius,Farenheit;
    printf("Write Farenheit: ");
    scanf("%f",&Farenheit);
    Celsius=(5.0/9.0)*(Farenheit-32);
    printf("Celsius is equal to: %.2f",Celsius);
    return 0;
}
