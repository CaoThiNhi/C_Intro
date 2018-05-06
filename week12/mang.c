#include <stdio.h>
#define SIZE 5

int addNumbers(int *fiveNumber){
  int i, sum=0;
  for(i=0; i<5; i++; fiveNumbers++){
    sum+= *fiveNumbers;
      }

  return sum;
}

int sum(int a[], int SIZE){
  int i, sum=0;
  for( i=0; i<SIZE; i++){
    sum += a[i];
  }

  return sum;
}
int main(){
  int a[SIZE];
  int i, sum1, sum2;

  printf("Nhap phan tu mang: \n");
  for( i=0; i<SIZE; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  sum1 = addNumbers(&a);
  sum2 = sum(a, SIZE);

  printf("Tong cua mang a la: %d\t%d\n", sum1, sum2);

  return 0;
}
