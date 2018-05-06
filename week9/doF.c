#include<stdio.h>

float celcius(int f){
  return 5.0/9*(f-32);
}

int main(){

  int i, j, h, s;

  printf("Nhap do F cao nhat (h): ");
  scanf("%d", &h);
  printf("Nhap khoang cach giua cac gia tri (s): ");
  scanf("%d", &s);
  for(i=0;i<20;i= i+s ){
    for(j=i;j<=h;j+=20){
      printf("%d  %6.2f\t", j, celcius(j));
    }
    printf("\n");
  }
  return 0;
}
