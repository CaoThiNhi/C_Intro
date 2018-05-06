#include<stdio.h>

void swap(int *x, int *y, int *z){
  int tmp;

  tmp = *x;
  *x = *y;
  *y = *z;
  *z = tmp;
}

int main(){

  int a, b, c;

  printf("Nhap ba so:\n");
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);


  swap(&a, &b, &c);
  printf("Hai so sau khi hoan doi vi tri la: \n");
  printf("a = %d\tb =%d\tc = %d\n", a, b, c);

  return 0;
}
