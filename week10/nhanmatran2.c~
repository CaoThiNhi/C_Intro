#include<stdio.h>
#define SIZE 3

int main(){
  int A[][SIZE] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int B[][SIZE] = {{1,1,1}, {2,2,2}, {3,3,3}};
  int C[SIZE][SIZE];
  int i = 0, j = 0, k;

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
