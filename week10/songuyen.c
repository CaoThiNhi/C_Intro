#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define arraySize 100

int main(){
  int s[arraySize];
  int i, dem = 0, tong = 0, tong2 = 0, smallest;

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

  for( i=0; i<arraySize; i++)
    tong = tong + s[i];
  printf("Tong cua 100 so nguyen do la: %d\n", tong);

  for( i=0; i<arraySize; i++)
    if(s[i]%2 ==1)
      tong2 = tong2 + s[i];
  printf("Tong cua cac so le trong 100 so nguyen do la: %d\n", tong2);

  smallest = s[0];
  for( i=0 ; i<arraySize; i++){
    if(smallest >= s[i]) smallest = s[i];
  }
  printf("So nho nhat trong day so la: %d\n", smallest);

  return 0;
}
