#include <stdio.h>

int main()
{
  char a(10);
  gets s(10);
  
  printf("Nhap vao mot chuoi ky tu khong chua dau cach:");
  scanf("%s\n", &a);
  printf("Nhap vao mot chuoi ky tu co chua dau cach:");
  scanf("%s\n", &s);
  printf("Cac day so vua nhap la: %s \n %s \n", a, s);
  
  return 0;
}
