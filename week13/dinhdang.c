#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define SIZE 20

int ktStyle(char *s){
  int i, n, ktra = 1;

  n =  strlen(s);

  if(n!=7){
    ktra = 0;
      }

  for( i=0; i<3; i++){
    if(isalpha(*(s+i)) == 0)
      {
        ktra = 0;
      }
  }

  for( i=3; i<n; i++){
    if(isdigit(*(s+i)) == 0)
      {
        ktra = 0;
      }
  }

    return ktra;
}

int main(){
  char s[SIZE];
  int ktra = 1;

  do{

    printf("Nhap ma so khach hang (LLNNNN): ");
    scanf("%[^\n]s", s);

    ktra = ktStyle(s);

    if( ktra == 0){
      printf("Sai dinh dang\n");
    }
    while( getchar() != '\n' );
  }while(ktra == 0);


  return 0;
}
