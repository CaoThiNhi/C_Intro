#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50

void thaythe(char *s, char a, char b){
  int i, n;

  n = strlen(s);

  for( i=0; i<n; i++){
    if(*(s+i) == a)
      *(s+i) = b;
  }

}

int main(){
  char s[SIZE];
  char a, b;

  printf("Nhap xau ki tu: ");
  scanf("%[^\n]s", s);
  while( getchar() != '\n' );
  printf("Nhap ki tu muon thay the: ");
  scanf("%c", &a);
  while( getchar() != '\n' );
  printf("Nhap ki tu thay the: ");
  scanf("%c", &b);

  printf("Xau ban dau la: %s\n", s);
  printf("Ki tu muon thay the la: %c\n", a);
  printf("Ki tu thay the la: %c\n", b);

  thaythe(s, a, b);

  printf("Xau ki tu sau khi bi thay the la: %s\n", s);

  return 0;
}
