#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50

void nameSlide(char *s, char *s1, char *s2, char *s3){
  int i;
  int space = 0;
  int space2 = 0;
  int n, n1, n2;

  n = strlen(s);

  for(i=0; i<n; i++){
    if(s[i] == ' '){
      space ++;
    }
  }

  //  printf("%d %d\n", n, space);

  for( i=0; i<n; i++){
    s1[i] = s[i];
    if(s[i] == ' '){
      space2 ++;
    }

    if( s[i] == ' ' && space2 == 1){
      s1[i] = '\0';
    }
  }

  n1 = strlen(s1);
  space2 = 1;

  for( i=n1+1; i<n; i++){
    s2[i-n1-1] = s[i];
    if(s[i] == ' '){
      space2 ++;
    }

    if( s[i] == ' ' && space2 == space){
      s2[i-n1-1] = '\0';
    }
  }
    printf("Ho cua ban la: %s\n", s1);
    printf("Ten dem cua ban la: %s\n", s2);
}

int main(){
  char s[SIZE], s1[SIZE], s2[SIZE], s3[SIZE];

  printf("Nhap ho ten: ");
  scanf("%[^\n]s", s);

  nameSlide(s, s1, s2, s3);

  return 0;
}
