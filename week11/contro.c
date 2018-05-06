#include<stdio.h>

int main(){

  int a, b, c;
  int *ptr;

  printf("Nhap ba so nguyen tu ban phim: \n");
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

  printf("Gia tri cua ba so nguyen vua nhap la: \n");
  ptr = &a;
  printf("a = %d\tptr1 = %p\n", *ptr, ptr);
  // printf("Dia chi ma con tro chi den la %p\n", ptr);
  ptr = &b;
  printf("b = %d\tptr2 = %p\n", *ptr, ptr);
  ptr = &c;
  printf("c = %d\tptr3 = %p\n", *ptr, ptr);

  return 0;
}
