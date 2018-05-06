#include<stdio.h>

void swap1(int x, int y){
  int tmp;

  tmp = x;
  x = y;
  y = tmp;
}

void swap2(int *x, int *y){
  int tmp;

  tmp = *x;
  *x = *y;
  *y = tmp;
}

int main(){

  int a, b;

  printf("Nhap hai so:\n");
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);

  swap1(a, b);
  printf("Hai so sau khi hoan doi vi tri la: \n");
  printf("a = %d\tb =%d\n", a, b);

  swap2(&a, &b);
  printf("Hai so sau khi hoan doi vi tri la: \n");
  printf("a = %d\tb =%d\n", a, b);

  return 0;
}
