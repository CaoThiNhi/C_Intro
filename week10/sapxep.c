#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define arraySize 100

void sort(int s[],int size){
  int i, j, tmp, dem = 0;

  for( i=0; i<size-1; i++)
    for( j=i+1; j<size; j++)
      if(s[i] <= s[j]){
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
      }

  printf("Day so sau khi sap xep theo thu tu giam dan la : \n");
  for( i=0; i<size; i++){
    printf("%3d ", s[i]);
    dem++;
    if(dem%10 == 0){
      printf("\n");
    }
  }
}

void sort2(int s[],int size){
  int i, j, tmp, dem = 0;

  for( i=0; i<size-1; i++)
    for( j=i+1; j<size; j++)
      if(s[i] <= s[j] && s[i]%2 == 1 && s[j]%2 == 1){
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
      }

  printf("Day so sau khi sap xep cac so le theo thu tu giam dan la : \n");
  for( i=0; i<size; i++){
    printf("%3d ", s[i]);
    dem++;
    if(dem%10 == 0){
      printf("\n");
    }
  }
}

int main(){
  int s[arraySize];
  int i, tmp, dem = 0;

  srand(time(NULL));
  for(i=0; i<arraySize; i++ ){
    s[i] = rand() % 101;
  }

  printf("Day so nguyen la:\n");
  for(i=0; i<arraySize; i++){
    printf("%3d ", s[i]);
    dem++;
    if(dem%10 == 0){
      printf("\n");
    }
  }
  sort2(s, arraySize);
  sort(s, arraySize);



  return 0;
}
