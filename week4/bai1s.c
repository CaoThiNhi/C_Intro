#include <stdio.h>
int main()
{
  int i,ngay,thang,nam;
  i=20176912;
  ngay=8; thang=5; nam=1998;
  printf("\t%-10s\n","TRUONG DAI HOC BACH KHOA HA NOI");
  printf("\t\t%-5s\n","THE SINH VIEN");
  printf("\t\t\b\b%-10s%-8d\n","MSSV:",i);
  printf("\t\t\b\b%-10s%-15s\n","Ho ten:","MAU TIEN VINH");
  printf("\t\t\b\b%-12s%-2d\\%1d\\%-7d%-10s\n","Ngay sinh:",ngay,thang,nam,"NAM");
  printf("\t\t\b\b%-10s%-10s\n","Ho khau:","Thanh Hoa- Thanh Hoa");
  printf("\t\t\b\b%-6s%-10s\n","Lop:","TT.CNTT VIET NHAT B");
  printf("\t\t\b\b%-10s%-8s%-16s%-8s\n","Khoa hoc:","K62","Co gia tri den:","31/08/2022");
  printf("%-10s\n","NPH: 15/09/2017");
  return 0;
}  
