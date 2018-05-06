#include<stdio.h>
#include<math.h>

void menu(){
  printf("\nSO NGUYEN TO\n");
  printf("1.Nhap so N\n");
  printf("2.In ra cac so nguyen to [1,N]\n");
  printf("3.Thoat\n\n");
}

int soNguyenTo(int so)
{
    int ktra = 0;
    int i;
    if (so < 2) ktra =1;
    else if(so == 2) ktra =0;
    else for (i = 2; i <= sqrt(so); i ++)
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
  int  N, i;
  do{
    menu();
    printf("Moi ban nhap lua chon: ");
    scanf("%d", &choice);

    switch(choice){
    case 1 :
      do{
      printf("Nhap N: ");
      scanf("%d", &N);
      if(N < 0) printf("Nhap sai. N la mot so nguyen duong. Nhap lai!\n");
      }while(N<0);
      break;
    case 2 :
      dem = 0;

      printf("Cac so nguyen to trong [1,%d] la: \n", N);

      for(i=1; i<=N; i++){
        ktra = soNguyenTo(i);
        if(ktra == 0){
          printf("%d\t", i);
          dem++;
          if(dem%10 == 0) printf("\n");
        }
      }

      printf("\n");
      break;
    case 3 :
      printf("Thoat!\n");
      break;
    default :
      printf("Nhap sai. Moi ban lua chon lai!\n");
      break;
    }
  }while(choice != 3);

  return 0;
}
