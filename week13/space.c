#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50

int spaces(char *s){
  int soSpace = 0;
  int i, n;

  n =  strlen(s);

  for( i=0; i<= n; i++){
    if(s[i] == ' ' && s[i+1] != ' ')
      soSpace ++;
  }

  return soSpace;
}

int main(){
  char s[SIZE];

  printf("Ban hay nhap xau ky tu (ket thuc boi ENTER): ");
  scanf("%[^\n]s", s);

  //  while( getchar() != '\n' );
  printf("Xau ki tu ban vua nhap la: %s \n", s);

  printf("So khoang trong la: %d \n", spaces(s));

  return 0;
}
