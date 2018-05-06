#include<stdio.h>
#define arraySize 12

int main(){
  int s[arraySize];
  int i;

  for(i=0; i<arraySize; i++){
    //   while( getchar() != '\n' );
    printf("Nhap luong mua thang %d: ", i+1);
    scanf("%d", &s[i]);
  }

  printf("Thang\tLuong mua\n");
  for(i=0; i<arraySize; i++){
    printf("%5d\t%9d\n", i+1, s[i]);
  }

  return 0;
}
