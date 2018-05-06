#include<stdio.h>

int main(){
  int x;
  int i = 0, n;
  int a[25];

  do{
    printf("Nhap x: ");
    scanf("%d", &x);

    if(x<0) printf("Nhap sai. X la so nguyen duong.\nNhaplai.\n");

  }while(x<0);

  while(x !=0 ){
    a[i] = x%10;
    i++;
    x=x/10;
  }

  n = i;
  printf("So dao nguoc la: ");

  for(i=0; i<n; i++){
    printf("%d", a[i]);
  }
  printf("\n");

  return 0;
}
