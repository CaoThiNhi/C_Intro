#include<stdio.h>
#define SIZE 3

int main(){
  int A[SIZE][SIZE];
  int B[SIZE][SIZE];
  int C[SIZE][SIZE];
  int i, j, k, tmp;

  printf("\nNhap cac phan tu cua ma tran thu nhat: \n");
  for(i=0;i<SIZE;i++)
  for(j=0;j<SIZE;j++)
    {
      printf("A[%d][%d] = ", i+1, j+1);
      scanf("%d",&tmp);
      A[i][j] = tmp;
    }

  printf("\nNhap cac phan tu cua ma tran thu hai: \n");
  for(i=0;i<SIZE;i++)
  for(j=0;j<SIZE;j++)
    {
      printf("B[%d][%d] = ", i+1, j+1);
      scanf("%d",&tmp);
      B[i][j] = tmp;
    }

  for (i = 0; i < SIZE; ++i)
    for (j = 0; j < SIZE; ++j){
      C[i][j]= 0;
      for(k = 0; k <SIZE; k++)
        C[i][j] += A[i][k]*B[k][j];
    }

  printf("Ma tran A la: \n");
  for (i = 0; i < SIZE; ++i){
    for (j = 0; j < SIZE; ++j)
      printf("%3d ", A[i][j]);
    printf("\n");
  }

  printf("Ma tran A la: \n");
  for (i = 0; i < SIZE; ++i){
    for (j = 0; j < SIZE; ++j)
      printf("%3d ", B[i][j]);
    printf("\n");
  }

  printf("Ma tran tich C la: \n");
  for (i = 0; i < SIZE; ++i){
    for (j = 0; j < SIZE; ++j)
      printf("%3d ", C[i][j]);
    printf("\n");
  }

  return 0;
}
