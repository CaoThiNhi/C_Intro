#include<stdio.h>

int  namNhuan(int year){
  int ktra = 0;

  if((year%400 == 0) || (year%4 == 0 && year%100 != 0))
    ktra =1;
  if(ktra == 0) printf("Nam %d khong phai la nam nhuan\n", year);
  else printf("Nam %d la nam nhuan\n", year);

  return ktra;
}

int main(){
  int month, year, ktra;
  do{
    printf("Nhap thang: ");
    scanf("%d", &month);

    if(month < 1 || month > 12)
    printf("Nhap sai.Thang nam trong [1~12]. Nhap lai!\n");
  }while(month < 1 && month > 12);

  do{
    printf("Nhap nam: ");
    scanf("%d", &year);

    if(year< 0)
    printf("Nhap sai.Nam phai la mot so duong. Nhap lai!\n");
  }while(year<0);

  ktra= namNhuan(year);

  switch(month){
  case 1 :
  case 3 :
  case 5 :
  case 7 :
  case 8 :
  case 10 :
  case 12 :
    printf("Thang %d nam %d co 31 ngay \n", month, year);
    break;
  case 4 :
  case 6 :
  case 9 :
  case 11 :
    printf("Thang %d nam %d co 30 ngay \n", month, year);
    break;
  case 2 :
    if(ktra == 0) printf("Thang %d nam %d co 28 ngay\n", month, year);
    else printf("Thang %d nam %d co 29 ngay\n", month, year);
    break;
  default :
    break;
  }
  return 0;
}
