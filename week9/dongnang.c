#include<stdio.h>

float dongnang(float m, float v){
  return m*v*v/2;
}

int main(){
  float m, v, kq;

  do{
    printf("Nhap khoi luong (kg): ");
    scanf("%f", &m);
    printf("Nhap van toc (m/s): ");
    scanf("%f", &v);
    if(m<0 || v<=0)printf("Nhap lieu sai! Hay nhap lai! \n");
  }while(m<0 && v<=0);

  kq = dongnang(m, v);

  printf("Dong nang la: %g \n", kq);
  return 0;
}
