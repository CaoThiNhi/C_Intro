#include<stdio.h>

float dongnang(float m, float v){
  return m*v*v/2;
}

float mass(){
  float m;

  do{
    printf("Nhap khoi luong (kg): ");
    scanf("%f", &m);
    if(m<0)printf("Nhap lieu sai m >=0 ! Hay nhap lai! \n");
  }while(m<0);

  return m;
}

float speed(){
  float v;

  do{
    printf("Nhap van toc (m/s): ");
    scanf("%f", &v);
    if(v<0)printf("Nhap lieu sai v >=0 ! Hay nhap lai! \n");
  }while(v<0);

  return v;
}

int main(){
  float m, v, kq;

  m = mass();
  v = speed();
  kq = dongnang(m, v);

  printf("Dong nang la: %g \n", kq);
  return 0;
}
