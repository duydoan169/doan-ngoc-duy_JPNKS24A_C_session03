#include <stdio.h>
int main(){
    float banKinh, chuVi, dienTich, PI=3.14;
    printf("nhap ban kinh: ");
    scanf("%f", &banKinh);
    chuVi=2*PI*banKinh;
    dienTich=PI*banKinh*banKinh;
    printf("chu vi  la %.2f\n", chuVi);
    printf("dien tich la %.2f\n", dienTich);
    return 0;
}