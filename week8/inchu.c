#include<stdio.h>

int main(){
  char c;
  while((c = getchar()) != '\n')
    {
      //  if('a'<=c && c<='z' || 'A'<=c && c<='Z')
      //  putchar(c);
      //  else putchar('#');
      if('0'<=c && c<='9')
        putchar('#');
      else putchar(c);
    }
  // putchar('#');
  printf("\nGood Bye.\n");
  return 0;
}
