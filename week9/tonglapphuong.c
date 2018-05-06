#include<stdio.h>
int sum(int n){
  int tong = 0;
  int i;

  for(i=1; i<=n; i++){
    tong = tong + i*i*i;
  }

  return tong;
}

void timUoc(int n){
  int i;

  for(i=1; i<=n; i++){
    if(n%i == 0) printf("%d\t", i);
  }

  printf("\n");
}

void soLapPhuong(int n){
  int i, j;

  for( i=1; i<=n; i=i+10 ){
    for(j=i; j<i+10; j++){
    printf("%d %d\n", j, j*j*j);
    }
    printf("\t");
  }
}

int main(){
  int n;
  do{
    printf("Nhap N: ");
    scanf("%d", &n);

    if(n <= 0) printf("N phai la so nguyen duong (n > 0). Xin hay nhap lai!\n");
  }while(n<=0);

  soLapPhuong(n);
  return 0;
}
