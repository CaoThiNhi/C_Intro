#include<stdio.h>

float swapp(float a, float b){
  float mtp;

  mtp = a;
  a = b;
  b = mtp;

  printf("a = %g\n", a);
  printf("b = %g\n", b);

  return a, b;

}
int main(){
  float a = 5.6, b= 9.5;

  swapp(a, b);

  printf("\n\n");
  printf("a = %g\n", a);
  printf("b = %g\n", b);

  return 0;
}
