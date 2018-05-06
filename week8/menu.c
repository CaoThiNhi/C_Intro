#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printMenu(){
  printf("\n\nTRO CHOI DOAN SO\n");
    printf("1.Doan so\n");
    printf("2.Ket qua\n");
    printf("3.Thoat\n");
  }

int main(){
  int choice;
  int xs, guess;

  srand(time(NULL));
  xs = 1 + rand()%9;

  // printf("\t DOAN SO\n\n");
  do{
    printMenu();
    printf("\nLua chon cua ban la: ");
    scanf("%d", &choice);

    switch(choice){
    case 1 :
      do{
        printf("Chon so may man cua ban: ");
        scanf("%d", &guess);
        if(1>guess || guess>10)
          printf("Nhap sai!\n So can doan trong khoang[1,10]\n");
        else printf("Moi ban chon 2 de xem ket qua.\n");
      }while(1>guess || guess>10);
      break;
    case 2 :

      //printf("So can doan la: %d", xs);
      printf("Ket qua: \n");
      if(xs> guess){
        printf("So ban doan lon hon so can doan\n");
        printf("Moi ban chon 1 de doan lai\n");
      }
      else if(xs < guess){
      printf("So ban doan nho hon so can doan\n");
      printf("Moi ban chon 1 de doan lai\n");
      }
      else {
        printf("Chuc mung ban da doan dung.\n");
        printf("So can doan la: %d\n", xs);
        printf("Tro choi ket thuc\n");
        return 0;
      }
      break;
    case 3 :
      printf("Quit\n");
      break;
    default :
      printf("Lua chon cua ban sai!\nMoi ban chon lai!\n");
      break;
    }
  }while( choice!=3 );

  return 0;
}
