#include <stdio.h>
int main(){
    int number, nghin, tram, chuc, donVi, nguoc;
    printf("nhap so nguyen co 4 chu so: ");
    scanf("%d",&number);
    nghin=number/1000;
    tram=(number-nghin*1000)/100;
    chuc=((number-nghin*1000)-tram*100)/10;
    donVi=(((number-nghin*1000)-tram*100)-chuc*10);
    
    nguoc=donVi*1000+chuc*100+tram*10+nghin;
    printf("nguoc lai cua so vua nhap la: %d", nguoc);
    return 0;
}