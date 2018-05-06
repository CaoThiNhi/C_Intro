#include<stdio.h>
#define SIZE 5

void printMenu(){
  printf("1.Nhap mang\n");
  printf("2.In mang\n");
  printf("3.Dich trai\n");
  printf("4.Dich phai\n");
  printf("5.Thoat\n");
}

void rotateLeft(int *a, int f){
  int i, tmp=0;
  int b[f], c[SIZE-f];
  int *ptr1, *ptr2;

  ptr1 = b;
  ptr2 = c;

  for( i=0; i<f; i++){
    *(ptr1+i) = *(a+i);
  }

  /*  for( i=0; i<SIZE-f; i++ ){
    tmp = *(a+i);
    *(a+i) = *(a+i+f);
    *(a+i+f) = tmp;
    }*/

  for( i=f; i<SIZE; i++ ){
    tmp = *(a+i);
    *(ptr2+i-f) = tmp;
  }

  printf("Day so sau khi dich trai la:\n");
  for(i=0; i<SIZE-f; i++){
    printf("%d\t", *(ptr2+i));
  }
  for(i=0; i<f; i++){
    printf("%d\t", *(ptr1+i));
  }
  printf("\n");
}

void rotateRight(int *a, int f){
  int i, tmp=0;
  int b[f], c[SIZE-f];
  int *ptr1, *ptr2;

  ptr1 = b;
  ptr2 = c;

  for( i=0; i<SIZE-f; i++){
    *(ptr1+i) = *(a+i);
  }

  /*  for( i=0; i<SIZE-f; i++ ){
    tmp = *(a+i);
    *(a+i) = *(a+i+f);
    *(a+i+f) = tmp;
    }*/

  for( i=SIZE-f; i<SIZE; i++ ){
    tmp = *(a+i);
    *(ptr2+i-SIZE+f) = tmp;
  }

  printf("Day so sau khi dich phai la:\n");

  for(i=0; i<f; i++){
    printf("%d\t", *(ptr2+i));
  }
  for(i=0; i<SIZE-f; i++){
    printf("%d\t", *(ptr1+i));
  }
  printf("\n");
}

int main(){

  int a[SIZE], i, f, choice;

  do{

    printMenu();

    printf("Moi ban chon chuc nang: ");
    scanf("%d", &choice);

    switch(choice){
    case 1:
      printf("Nhap du lieu cho mang: \n");
      for( i=0; i<SIZE; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
      }
      break;
    case 2 :
      printf("Mang da nhap la:\n");
      for( i=0; i<SIZE; i++)
        printf("%d\t", a[i]);

      printf("\n");

      break;
    case 3 :
      do{
        printf("Nhap offset: ");
        scanf("%d", &f);
        if(f>=SIZE || f<=0) printf("Offset phai nam trong khoang (0~n)");
      }while(f>=SIZE || f<=0);

      rotateLeft(a, f);
      break;
    case 4 :
      do{
        printf("Nhap offset: ");
        scanf("%d", &f);
        if(f>=SIZE || f<=0) printf("Offset phai nam trong khoang (0~n)");
      }while(f>=SIZE || f<=0);

      rotateRight(a, f);
      break;
    case 5 :
      printf("Thoat!\n");
      break;
    default :
      printf("Nhap sai. Ban hay nhap lai\n");
      break;
  }
  }while(choice != 5);

  return 0;
}
