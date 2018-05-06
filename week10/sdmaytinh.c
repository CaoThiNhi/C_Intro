#include<stdio.h>
#include<string.h>

#define SIZE 40
#define DIENNANG 400

void printMenu(){
  printf("1. Dung may\n");
  printf("2. Roi may\n");
  printf("3. Trang thai cac may\n");
  printf("4. Dien nang tieu thu tich luy tren cac may\n");
  printf("5. Tong dien nang tieu thu va tien dien thanh toan\n");
  printf("6. Nhung may duoc dung nhieu nhat va it nhat\n");
  printf("7. Thoat\n");
}

int main(){
  int choice, i, may, may2, max, min;
  int flag = 0, flag2 = 0, dem = 0, tong_dien_nang = 0, tong_tien = 0;
  int A[SIZE], B[SIZE], C[SIZE];
  char trangthai[20];

  for( i=0; i<SIZE; i++){
      A[i] = 0;
      B[i] = 0;
      C[i] = 0;
  }

  do{
    printMenu();

    printf("Ban hay chon chuc nang: ");
    scanf("%d", &choice);

    switch( choice ){
    case 1 :
      flag2 = 0;
      do{
        printf("Ban muon su dung may so: ");
        scanf("%d", &may);

        if(may<1 || may>SIZE)
          printf("Chi co 40 may. So may ban nhap trong khoang [1~40]. Hay nhap lai\n");
        else if(A[may-1] == 1){
          printf("May dang duoc su dung. Hay chon may khac\n");
          flag2 = 0;
        }

        if(A[may-1] == 0) {
          A[may-1] = 1;
          flag2 = 1;
          C[may-1] += 1;
        }
      }while(may<1 || may>SIZE && A[may-1] == 1);

      flag = 1;
      if(flag2 == 1)
        B[may-1] += DIENNANG;
      break;
    case 2 :
      if(flag == 0){
        printf("Ban hay chon may muon dung truoc\n");
        break;
      }
      do{
        printf("Ban muon tat  may so: ");
        scanf("%d", &may2);

        if(may2<1 || may2>SIZE)
          printf("Chi co 40 may. So may ban nhap trong khoang [1~40]. Hay nhap lai\n");

        if(A[may2-1] == 0) printf("May ban chon da tat roi\n");
        else{
          A[may2-1] = 0;
          printf("Ban da doi may thanh cong\nMay %d da tro ve trang thai trong\n", may2);
        }
      }while(may2<1 || may2>SIZE);
      break;
    case 3 :
      dem = 0;

      printf("May\tTrang thai\tMay\tTrang thai\tMay\tTrangthai\tMay\tTrangthai\tMay\tTrangthai\n");
      for( i=0; i<SIZE; i++){

        if(A[i] == 0) strcpy(trangthai, "Tat");
        else strcpy(trangthai, "Dang su dung");
        dem++;

        printf("%3d\t%-12s\t", i+1, trangthai);

        if(dem%5 == 0){
          printf("\n");
        }

      }
      break;
    case 4 :
      dem = 0;

      printf("May\tDien nang\tMay\tDien nang\tMay\tDien nang\tMay\tDien nang\tMay\tDien nang\n");
      for( i=0; i<SIZE; i++){
        dem++;

        printf("%3d\t%9d\t", i+1, B[i]);

        if(dem%5 == 0){
          printf("\n");
        }

      }
      break;
    case 5 :
      for( i=0; i<SIZE; i++)
        tong_dien_nang += B[i];

      tong_tien = 750*tong_dien_nang/1000;

      printf("Tong dien nang tieu thu la: %d\n", tong_dien_nang);
      printf("Tong tien dien thanh toan la: %d\n", tong_tien);
      break;
    case 6 :
      dem = 0;
      max = C[0];
      min = C[0];

      for( i=0; i<SIZE; i++){
        if(C[i] > max) max = C[i];
        if(C[i] < min) min = C[i];
      }

      printf("Cac may duoc su dung nhieu nhat (%d lan) la: \n", max);
      for( i=0; i<SIZE; i++){
        if(C[i] == max)
          printf("%d\t ", i+1);
      }
      printf("\n");
      printf("Cac may duoc su dung it nhat (%d lan) la: \n", min);
      for( i=0; i<SIZE; i++){
        if(C[i] == min){
          dem++;
          printf("%d\t ", i+1);

          if(dem%5 == 0)
            printf("\n");
        }
      }
      printf("\n");
      break;
    case 7 :
      printf("Thoat\n");
      break;
    default :
      printf("nhap sai. Ban hay nhap lai chuc nang [1~7]\n");
      break;
    }

  }while(choice != 7);

  return 0;
}
