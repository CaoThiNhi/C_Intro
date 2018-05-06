#include<stdio.h>
#include<math.h>

void menu(){
  printf("\n1. Nhap so N \n");
  printf("2. Liet ke cac so hoan hao [1,N]\n");
  printf("3. Liet ke cac so nguyen to [1,N]\n");
  printf("4. Liet ke cac uoc so cua N\n");
  printf("5. Thoat\n\n");
}

int soNguyenTo(int so)
{
    int ktra = 0;
    int i;
    if (so < 2) ktra =1;

    for (i = 2; i <= sqrt(so); i ++)
    {
        if (so%i == 0)
        {
          ktra =1;
        }
    }
    return ktra;
}
int main(){
  int choice, dem, ktra;
  long N, i, j, tong;
  do{
    menu();
    printf("Moi ban nhap lua chon: ");
    scanf("%d", &choice);

    switch(choice){
    case 1 :
      do{
      printf("Nhap N: ");
      scanf("%ld", &N);
      if(N < 0) printf("Nhap sai. N la mot so nguyen duong. Nhap lai!\n");
      }while(N<0);
      break;
    case 2 :
      dem = 0;

      printf("Cac so hoan hoan trong [1,%ld] la: \n", N);

      for(i=1; i<=N; i++){
        tong = 0;
        for(j=1; j<i; j++){
          if(i%j == 0) tong = tong + j;
        }
        if(tong == i) {
          printf("%ld\t",i);
          dem ++;
          if(dem%10 == 0) printf("\n");
        }
      }
      printf("\n");
      break;
    case 3 :
      dem = 1;

      printf("Cac so nguyen to trong [1,%ld] la: \n", N);
      printf("2\t");
      for(i=3; i<=N; i++){
        ktra = soNguyenTo(i);
        if(ktra == 0){
          printf("%ld\t", i);
          dem++;
          if(dem%10 == 0) printf("\n");
        }
      }
      printf("\n");
      break;
    case 4 :
      dem = 0;

      printf("Cac uoc so cua % ld la: \n", N);

      for(i=1; i<=N; i++){
          if(N%i == 0){
            printf("%ld\t",i);
            dem ++;
            if(dem%10 == 0) printf("\n");
          }
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
