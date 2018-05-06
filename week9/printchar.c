#include<stdio.h>

void printMenu(){
  printf("1.Ve tam giac vuong can 5*5\n");
  printf("2.Ve hinh vuong 9*9\n");
  printf("3.Nhap ki tu\n");
  printf("4.Exit\n");
}

void printChar(char c, int n){
  int i;
  for(i=1; i<=n; i++){
    printf("%c", c);
  }
}

void hinhVuong(){
  int i, j;
  for(i=1; i<=9; i++){
    for(j=1; j<=9; j++){
      // printf("*");
      if( i==5 && j==5){
        printf(" ");
        continue;
      }else printf("*");
    }
    printf("\n");
  }
}
int main(){
  int choice, k, j, dem;
  char c;

  do{
    printMenu();

    printf("Input choice: ");
    scanf("%d", &choice);
    switch(choice){
    case 1 :
      for(k=1; k<=5; k++){
        printChar('*', k);
        printf("\n");
      }
      break;
    case 2 :
      hinhVuong();
      printf("\n");
      for(k=1; k<=9; k++){
        if(k==5) {
          printChar('*',4);
          printChar(' ',1);
          printChar('*',4);
        }else{
          printChar('*',9);
        }
        printf("\n");
      }
      break;
    case 3 :
      dem = 0;
      do{
        while( getchar() != '\n' );
        // while (((c = getchar()) != EOF) && (c != '\n'));
        c = getchar();
        printf("\n Entered character is: ");
        putchar(c);
        printf("\n");
        dem ++;
        if('0'>c || c>'9' && 'A'>c || c>'Z' && 'a'>c || c>'z')
          printf("#\n");
        if(dem >= 3) {
          printf("Ban nhap qua 3 lan \n");
          break;
        }
      }while('0'>c || c>'9' && 'A'>c || c>'Z' && 'a'>c || c>'z');
      break;
    case 4 :
      printf("Exit\n");
      break;
    default :
      printf("Input choice Error. Input again.\n");
      break;
    }
  }while(choice != 4);

  return 0;
}
