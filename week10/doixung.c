#include<stdio.h>

int doixung(char s[], int n){

  int ktra = 1;

  for( i=0; i<n; i++)
    if(s[i] != s[n-i])
      ktra = 0;
  return ktra;
}
int main(){
  char s[];
  int n, i, ktra;

  printf("So phan tu cua mang la: ");
  scanf("%d", &n);

  for( i=0; i<n; i++){
    printf("s[%d] = ", i+1);
    scanf("%d", &s[i]);
  }

  ktra = doixung(s, n);
  if(ktra == 0) printf("Day so khong doi xung\n");
  else printf("Day so doi xung\n");
  return 0;
}
