#include <stdio.h>
int main(){
    float canhDay, chieuCao, dienTich;
    printf("nhap do dai canh day va chieu cao: ");
    scanf("%f %f", &canhDay, &chieuCao);
    dienTich=(canhDay*chieuCao)/2;
    printf("dien tich la %.2f\n", dienTich);
    return 0;
}