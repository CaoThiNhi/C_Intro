/* Cao Thi Nhi - 20132870 */
// Date Create:
#include<stdio.h>

void printMenu(){
  printf("\n\nTAI KHOAN TIEN GUI ABC\n");
  printf("1.Tien gui va thoi han\n");
  printf("2.Lai suat nam\n");
  printf("3.Chi tiet lai suat (bang ke)\n");
  printf("4.Thoat\n\n");
}

int main(){
  float f;
  long tien, tienbd, tienlai, sodu, tongls;
  char name[50];
  int i, choice, thang;

  printf("Ten tai khoan: ");
  scanf("%[^\n]s", name);
  printf("So tien: ");
  scanf("%ld", &tienbd);
  printf("Lai suat: ");
  scanf("%f", &f);
  printf("So thang gui: ");
  scanf("%d", &thang);

  do{
    printf("\n\nTai khoan khach hang: %s", name);
    printMenu();
    printf("Moi ban chon: ");
    scanf("%d", &choice);
    switch(choice){
    case 1 :
      printf("Ten tai khoan: %s\n", name);
      printf("So tien gui: %ld VND\n", tienbd);
      printf("Thoi han: %d thang\n", thang);
      break;
    case 3 :
      tien = tienbd;
      tongls = 0;
      printf("Bang thong ke: Chi Tiet Lai suat");
      printf("\nThang\tTien dau ky    \tTien lai       \tSo du          \n");
      for(i=1; i<=thang; i++){
        long(tienlai) = tien*f/100;
        tongls += tienlai;
        sodu = tien + tienlai;
        printf("%5d\t%-15ld\t%-15ld\t%-15ld\n", i, tien, tienlai, sodu);
        tien = sodu;
  }

      break;
    case 2 :
      tien = tienbd;
      tongls = 0;
      printf("Lai suat mot thang: %f %%\n", f);
      for(i=1; i<=thang; i++){
        long(tienlai) = tien*f/100;
        tongls += tienlai;
        sodu = tien + tienlai;
        tien = sodu;
      }
      printf("Lai suat nam: %ld VND\n", tongls);
      break;
    case 4 :
      printf("Quit!\n");
      break;
    default :
      printf("Nhap sai. Ban hay nhap lai.\n");
      break;
    }
  }while(choice != 4);

  return 0;
}
