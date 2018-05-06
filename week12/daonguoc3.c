#include<stdio.h>

int reverseInt(int *x){
  int n, sodu;

  sodu = 0;

  while(*x!= 0){
    n = sodu*10 + *x%10;
    *x = *x/10;

    sodu = n;
  }

  *x = n;
  return *x;
}
int main(){
  int x, n;

  do{
    printf("Nhap x: ");
    scanf("%d", &x);

    if(x<0) printf("Nhap sai. X la so nguyen duong.\nNhaplai.\n");

  }while(x<0);

  reverseInt(&x);

  printf("So dao nguoc la: %d\n", x);

  return 0;
}
