#include<stdio.h>

#define PHUCAP 3000000
#define SIZE 12

void printMenu(){
  printf("1.Che do chi tieu\n");
  printf("2.Nhap lieu\n");
  printf("3.Bang ke ca nam\n");
  printf("4.Bao cao thong ke\n");
  printf("5.Thoat\n");
}

void printCheDo(){
  printf("1.AN TOAN\n");
  printf("2.LINH HOAT\n");
}

int main(){

  int i, choice, choice2, flag = 0;
  int A[SIZE], B[SIZE];
  int sodu1 = PHUCAP, sodu2, max, min;

  do{
    printMenu();

    printf("Moi ban chon chuc nang: ");
    scanf("%d", &choice);

    switch(choice){
    case 1 :
        printCheDo();

        printf("Moi ban chon che do: ");
        scanf("%d", &choice2);

        switch(choice2){
        case 1 :
          printf("So chi khong duoc vuot muc hang thang\n");
          printf("Moi ban nhap lieu\n");

          flag = 1;
          break;
        case 2 :
          printf("So chi co the vuot muc hang thang nhung khong duoc vuot so tien con du\n");
          printf("Moi ban nhap lieu\n");
          flag = 2;
          break;
        default :
          printf("Chi co 2 che do. Moi ban chon lai\n");
          break;
        }
      break;
    case 2 :
      if(flag == 0){
        printf("Ban hay chon che do chi tieu truoc\n");
      }
      else if(flag == 1){
        sodu1 = PHUCAP;
        printf("Nhap chi tieu: \n");
        for( i=0; i<SIZE; i++){
          do{

            printf("Chi Tieu Thang %d : ", i+1);
            scanf("%d", &A[i]);
            if(A[i] > PHUCAP)
              printf("Ban dang o che do AN TOAN\nTien chi phai nho hon tien phu cap %d.\nHay nhap lai\n", PHUCAP);

          }while(A[i] > PHUCAP);
          sodu2 =  sodu1 - A[i];
          sodu1 = PHUCAP + sodu2;
          B[i] = sodu2;
        }
      }
      else if(flag == 2){
        sodu1 = PHUCAP;
        printf("Nhap chi tieu: \n");
        for( i=0; i<SIZE; i++){
          do{
            printf("Thang %d: ", i+1);
            scanf("%d", &A[i]);

            if(A[i] > sodu1){
              printf("So du: %d\n", sodu1);
              printf("Ban dang chon che do LINH HOAT. So chi co the vuoy muc phu cap hang thang nhung khong duoc vuot tong so tien con du. Xin hay nhap lai\n");
            }
          }while(A[i] > sodu1);

          sodu2 = sodu1 - A[i];
          sodu1 = sodu2 + PHUCAP;

          B[i] = sodu2;
        }
      }

      flag = 3;
      break;
    case 3 :
      if(flag != 3){
        printf("Xin hay nhap du lieu truoc\n");
        break;
      }

      max = A[0];
      min = A[0];
      for( i=0; i<SIZE; i++){
        if(A[i] > max) max = A[i];
        if(A[i] < min) min = A[i];
      }

      printf("So tien chi lon nhat la: %d\n", max);
      printf("So tien chi nho nhat la: %d\n", min);
      printf("So tien con du lai moi thang: \n");
      printf("Thang\tSo du\n");
      for( i=0; i<SIZE; i++){
        printf("%d\t%20d\n", i+1, B[i]);
      }

      printf("So tien con lai sau 1 nam la: %d\n", B[11]);
      break;
    case 4 :
      if(flag != 3){
        printf("Xin hay nhap du lieu truoc\n");
        break;
      }

      printf("Bao cao thong ke:\n");
      printf("Thang\tPhu cap\tTien chi\tSo du\n");
      for( i=0; i<SIZE; i++){
        printf("%d\t%d\t%10d\t%10d\n", i+1, PHUCAP, A[i], B[i]);
      }
      break;
    case 5 :
      printf("Thoat\n");
      break;
    default :
      printf("Chon sai! Moi ban chon lai chuc nang tu 1 den 5.\n");
      break;
    }

  }while(choice != 5);

  return 0;
}
