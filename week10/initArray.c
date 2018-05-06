#include<stdio.h>
#define arraySize 20

int main(){
  int s[arraySize];
  int i, k;

  for(i=0; i<=arraySize/2; i++)
    s[i]= 2 + 2*i;

  k = 0;
  for(i=arraySize/2; i<=arraySize; i++){
    s[i]= 1 + 2*k;
    k++;
  }
  printf("So phan tu cua mang la: \n");
  for(i=0; i<arraySize; i++)
    printf("s[%d] = %d \n", i, s[i]);

  return 0;
}
