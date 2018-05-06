#include <stdio.h>
int main()
{
  int a,b,c;
  char s[20];
  
  printf("Nhap vao ten tran dau:", s);
  gets(s);
  printf("Nhap vao so luong ve ban ra loai A:\n");
  scanf("%d", &a);
  printf("Nhap vao so luong ve ban ra loai B:\n");
  scanf("%d", &b);
  printf("Nhap vao so luong ve ban ra loai C:\n");
  scanf("%d", &c);

  printf("Tong tien ban ve: %.2d$\n ", 15*a+12*b+9*c);
  printf("Tong tien VFF thu duoc: %.2f$\n ", (15*a+12*b+9*c)*0.95);
  
  return 0;

}
