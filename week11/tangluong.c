#include<stdio.h>

void incomeplus(int *luong, int heso){
  *luong += heso*1000000;
}

int main(){
  int luong, nam, heso;

  printf("Nhap luong hien tai: ");
  scanf("%d", &luong);
  printf("Nhap so nam lam viec: ");
  scanf("%d", &nam);
  heso = nam/3;

  if( heso == 0)
    printf("Ban chua du dieu kien de tang luong.\nSo nam lam viec >= 3\n");
  else{
    printf("He so tang luong cua ban la: %d\n", heso);

    incomeplus(&luong, heso);

    printf("Luong cua ban la: %d\n", luong);
  }


  return 0;
}
