#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("nhap celsius: ");
    scanf("%f", &celsius);
    fahrenheit=celsius+1.8+32;
    printf("fahrenheit la %.2f", fahrenheit);
    return 0;
}