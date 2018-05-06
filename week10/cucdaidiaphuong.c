#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define arraySize 100

int main(){
  int s[arraySize];
  int i, dem = 0, tong = 0;

  srand(time(NULL));
  for(i=0; i<arraySize; i++ ){
    s[i] = rand() % 101;
  }

  printf("100 so nguyen la:\n");
  for(i=0; i<arraySize; i++){
    printf("%3d ", s[i]);
    dem++;
    if(dem%10 == 0){
      printf("\n");
    }
  }

  dem = 0;
  printf("Cac so cuc dai dia phuong la: \n");
  for(i=1; i<arraySize-1; i++){
    if(s[i]>s[i-1] && s[i]>s[i+1]){
      printf("%3d ", s[i]);
      tong = tong + s[i];
      dem++;
      if(dem%10 == 0){
        printf("\n");
      }
    }
  }
  printf("\n");
  printf("Tong cua cac so cuc dai dia phuong la : %d \n", tong);
}
