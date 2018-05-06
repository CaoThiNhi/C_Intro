#include<stdio.h>

int main(){
  int i, j;

  for(i=1; i<=16; i++){
    for(j=i; j<=i+16*16-1 ;j=j+16 ){
      //  printf("%-3d %-4c", j, j);
      //  printf("  ");
      if(i==9 && j==9)
        printf("9  Tab\t");
      else printf("%-3d %c\t", j, j);
    }
    printf("\n");
  }


  return 0;
}
