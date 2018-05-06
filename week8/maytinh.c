#include<stdio.h>
#include<math.h>

void menu(){
  printf("\nMENU - MAY TINH KHOA HOC \n\n");
  printf("N. Nhap lieu (N)\n");
  printf("S. SIN X (S)\n");
  printf("C. CAN BAC HAI (C)\n");
  printf("E. E MU X (E)\n");
  printf("T. Thoat (T)\n\n");
}

int main(){
  char c;
  float x;

  do{
    menu();
    while( getchar() != '\n' );
    printf("Moi ban nhap lua chon: ");
    scanf("%c", &c);
    switch(c){
    case 'N' :
      do{
        printf("Nhap x: ");
        scanf("%f", &x);
        if(x<0) printf("Nhap sai.\nx phai la so thuc duong. x >= 0.\nXin moi nhap lai.\n");
      }while(x<0);

      break;
    case 'S' :
      printf("Sin(%g) = %g\n", x, sin(x));
      break;
    case 'C' :
      printf("Can bac hai: sqrt(%g) = %g\n", x, sqrt(x));
      break;
    case 'E' :
      printf("E mu x: exp(%g) = %g\n", x, exp(x));
      break;
    case 'T' :
      printf("Thoat!\n");
      break;
    default :
      printf("Ban nhap sai. Hay nhap lai lua chon !\n");
      break;
    }
  }while(c != 'T');

  return 0;
}
