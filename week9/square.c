#include<stdio.h>

double square(double a){
  return a*a;
}

int main(){
  double num = 0.0, sqr = 0.0;

  printf("Nhap vao mot so: ");
  scanf("%lf", &num);

  sqr = square(num);

  printf("Binh phuong cua %g la: %g\n", num, sqr);

  return 0;
}
