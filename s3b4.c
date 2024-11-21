#include <stdio.h>
int main(){
    float toan, van, anh, diemTong, diemTrungBinh;
    printf("nhap diem toan van anh: ");
    scanf("%f %f %f", &toan, &van, &anh);
    diemTong=toan+van+anh;
    diemTrungBinh=(toan+van+anh)/3;
    printf("tong diem la  la %.2f\n", diemTong);
    printf("diem trung binh la %.2f\n", diemTrungBinh);
    return 0;
}