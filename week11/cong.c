#include<stdio.h>

int main(){

  int a, b, c;
  int *ptr;

  printf("Nhap ba so: \n");
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

  ptr = &a;
  *ptr = *ptr + 100;
  //a = *ptr;

  ptr = &b;
  *ptr = *ptr + 100;
  //b = *ptr;

  ptr = &c;
  *ptr = *ptr + 100;
  //c = *ptr;

  printf("Cac so sau khi cong 100 la: \n");
  printf("%d\t%d\t%d\n", a, b, c);
  return 0;
}
