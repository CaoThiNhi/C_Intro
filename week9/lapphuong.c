#include<stdio.h>
#include<math.h>

void menu(){
  printf("\n1. Nhap so N \n");
  printf("2. In ra tong lap phuong cua cac so 1~N\n");
  printf("3. Liet ke cac uoc so cua N\n");
  printf("4. In ra binh phuong cua cac so 1~N\n");
  printf("5. Thoat\n\n");
}

int lapPhuong(int so)
{

    return so*so*so;
}

void uocSo(int so){
  int  dem = 0;
  int i;

  for(i=1; i<=so; i++){
          if(so%i == 0){
            printf("%d\t",i);
            dem ++;
            if(dem%10 == 0) printf("\n");
          }
  }
}

int binhPhuong(int so){

  return so*so;
}

int main(){
  int choice, dem, ktra, N, i, j;
  long tong;
  do{
    menu();
    printf("Moi ban nhap lua chon: ");
    scanf("%d", &choice);
    printf("\n");

    switch(choice){
    case 1 :
      do{
      printf("Nhap N: ");
      scanf("%d", &N);
      if(N < 0) printf("Nhap sai. N la mot so nguyen duong. Nhap lai!\n");
      }while(N<0);
      break;
    case 2 :
      tong = 0;

      for(i=1;i<=N;i++){
        tong= tong + lapPhuong(i);
      }
      printf("Tong lap phuong cua cac so 1~N la: %ld\n", tong);
      break;
    case 3 :
      printf("Cac uoc so cua % d la: \n", N);
      uocSo(N);
      printf("\n");
      break;
    case 4 :
      printf("Binh phuong cua cac so tu 1~N la: \n");
      for(i=1;i<=10;i++){
        for(j=i; j<=N; j=j+10){
        printf("%-4d %6d\t", j, binhPhuong(j));
        }
        printf("\n");
      }
      printf("\n");
      break;
    case 5 :
      printf("Thoat!\n");
      break;
    default :
      printf("Nhap sai. Moi ban lua chon lai!\n");
      break;
    }
  }while(choice != 5);

  return 0;
}
