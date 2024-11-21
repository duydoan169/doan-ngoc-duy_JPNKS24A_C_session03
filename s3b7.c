#include <stdio.h>
int main(){
    int number, nghin, tram, chuc, donVi, tong;
    printf("nhap so nguyen co 4 chu so: ");
    scanf("%d",&number);
    nghin=number/1000;
    tram=(number-nghin*1000)/100;
    chuc=((number-nghin*1000)-tram*100)/10;
    donVi=(((number-nghin*1000)-tram*100)-chuc*10);
    
    tong=nghin+tram+chuc+donVi;
    printf("tong cac chu so trong so vua nhap la: %d", tong);
    return 0;
}