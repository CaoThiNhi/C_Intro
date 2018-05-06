#include<stdio.h>

#define HANG 5
#define COT 3

void printMenu(){
  printf("1.Bat den theo hang\n");
  printf("2.Bat den theo cot\n");
  printf("3.Bat den theo vi tri\n");
  printf("4.Cong suat tieu thu hien thoi\n");
  printf("5.Thoat\n");
}

int main(){

    int A[HANG][COT];
    int choice, i, j, k, flag, hang, cot;
    int congsuat = 0;

    flag = 0;

        for( i=0; i<HANG; i++)
          for( j=0; j<COT; j++)
             A[i][j] = 0;

    do{
      printMenu();

      printf("Moi ban nhap lua chon: ");
      scanf("%d", &choice);

      switch(choice){
      case 1 :
        congsuat = 0;
        do{
          printf("Ban hay chon hang den muon bat: ");
          scanf("%d", &hang);
          if(hang<1 || hang>HANG)
            printf("Nhap sai. Hang phai nam trong [1~%d]\n", HANG);
        }while(hang>HANG || hang<1);

        for( i=0; i<HANG; i++)
          for( j=0; j<COT; j++){
            if( i == hang-1 )
              A[i][j] = 1;
            // else
            //  A[i][j] = 0;
          }

        for( i=0; i<HANG; i++){
          for( j=0; j<COT; j++){
            printf("%d ", A[i][j]);
          }
          printf("\n");
        }

        flag = 1;

        break;
      case 2 :
        congsuat = 0;
        do{
          printf("Ban hay chon cot den muon bat: ");
        scanf("%d", &cot);
          if(cot<1 || cot>COT)
            printf("Nhap sai. Cot phai nam trong [1~%d]\n", COT);
        }while(cot>COT || cot<1);

        for( i=0; i<HANG; i++)
          for( j=0; j<COT; j++){
            if( j == cot-1 )
              A[i][j] = 1;
            //else
            //  A[i][j] = 0;
          }

        for( i=0; i<HANG; i++){
          for( j=0; j<COT; j++){
            printf("%d ", A[i][j]);
          }
          printf("\n");
        }

        flag = 1;

        break;
      case 3 :
        congsuat = 0;

        printf("Ban hay nhap vi tri den muon bat: \n");
        do{
          printf("Hang: ");
          scanf("%d", &hang);
          if(hang<1 || hang>HANG)
            printf("Nhap sai. Hang phai nam trong [1~%d]\n", HANG);
        }while(hang>HANG || hang<1);
        do{
          printf("COT: ");
          scanf("%d", &cot);
          if(cot<1 || cot>COT)
            printf("Nhap sai. Cot phai nam trong [1~%d]\n", COT);
        }while(cot>COT || cot<1);

        for( i=0; i<HANG; i++)
          for( j=0; j<COT; j++){
            if( i == hang -1 && j == cot-1 )
              A[i][j] = 1;
            // else
            //  A[i][j] = 0;
          }

        for( i=0; i<HANG; i++){
          for( j=0; j<COT; j++){
            printf("%d ", A[i][j]);
          }
          printf("\n");
        }

        flag = 1;
        break;
      case 4:
        for( i=0; i<HANG; i++)
          for( j=0; j<COT; j++){
            if(A[i][j] == 0)
                congsuat = congsuat + 0;
            else if(A[i][j] == 1 && (i-1)%2 == 1 && (j-1)%2 == 1)
              congsuat = congsuat + 10;
            else if(A[i][j] == 1 && (i-1)%2 == 0 && (j-1)%2 == 0)
                congsuat = congsuat + 20;
            else congsuat = congsuat + 15;
          }

        printf("Cong suat hien thoi la: %d\n", congsuat);
        break;
      case 5 :
        printf("Thoat\n");
        break;
      default :
        printf("Nhap sai! Ban hay chon tu 1 den 5. \n");
        break;
      }
    }while(choice != 5);


    return 0;
    }
