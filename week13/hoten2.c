#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50

void nameSlide(char *s){
  int count = 0;
  while( *(s+count) != ' ' && *(s+count) != '\0')
    count++;
  if(*(s + count) == ' ')
    *(s+count) = '\0';
}

int main(){
  char s[SIZE];
  char s1[SIZE], s2[SIZE], s3[SIZE];

  printf("Nhap ho ten: ");
  scanf("%[^\n]s", s);

  nameSlide(s);

  printf("Ho cua ban la: %s\n", s);
  return 0;
}
