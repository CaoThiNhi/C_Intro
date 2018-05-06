#include<stdio.h>

int main(){
  char c;
  int inspace = 0;

  while( (c = getchar()) != '\n' ){
    if( c == ' ' )
      {
        if(inspace == 0){
          inspace = 1;
          putchar(c);
        }
      }
    if( c != ' '){
      inspace = 0;
      putchar(c);
    }
  }

  printf("\nBye Bye\n");

  return 0;
}
