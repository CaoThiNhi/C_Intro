#include <stdio.h>
#include <stdlib.h>
#define PHI_NOI_TRU 15000
#define THE_G 0.3
#define THE_S 0.5
#define THE_C 0.7


void printMenu(){
    printf("\n\n1. Input data\n");
    printf("2. Print the total patient\n");
    printf("3. Quit\n");
}

int main()
{
    int choice = 0;
    int guess = 0;
    char name[50];
    char pt, the;
    int tuoi;
    int ngay;
    int tong, tien;
    int tienpt, tienthuoc, tongtien = 0;
    int dem = 0, demG = 0, demS = 0, demC = 0, demK = 0;
    int tienbh;
    int tienbhmax = 0;

    while(choice != 3){
        printMenu();
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice){
        case 1 :
          tong = 0;
          tien = 0;
          tienpt =0;
          tienthuoc = 0;
          tienbh = 0;

          while( getchar() != '\n' );
          printf("\nNhap ten benh nhan: ");
          scanf("%[^\n]s", name);
          printf("Tuoi: ");
          scanf("%d", &tuoi);
          printf("So ngay nam vien: ");
          scanf("%d", &ngay);
          while( getchar() != '\n' );
          printf("Phau thuat (Y/N): ");
          scanf("%c", &pt);

          if(pt == 'Y' || pt == 'y'){
            printf("So tien phau thuat: ");
            scanf("%d", &tienpt);
          }

          printf("Tien thuoc: ");
          scanf("%d", &tienthuoc);

          tong = ngay*PHI_NOI_TRU + tienpt + tienthuoc;

          while( getchar() != '\n' );
          printf("The bao hiem Gold/Silver/Copper/Khong(G/S/C/K): ");
          scanf("%c", &the);

          if(the == 'G' || the == 'g'){
            tien = tong*THE_G;
            demG++;
          }else if(the == 'S' || the == 's'){
            tien = tong*THE_S;
            demS++;
          }else if(the == 'C' || the == 'c'){
            tien = tong*THE_C;
            demC++;
          }else{
            tien = tong;
            demK++;
          }

          tienbh = tong - tien;
          tongtien+=tien;
          if(tienbh>=tienbhmax) tienbhmax = tienbh;
          dem++;

          printf("\nBenh nhan: %s", name);
          printf("\nTuoi: %d", tuoi);
          printf("\nSo ngay nam vien: %d", ngay);
          printf("\nTien thuoc: %d", tienthuoc);
          printf("\nTong tien: %d VND", tong);
          printf("\nSo tien bao hiem chi tra: %d VND", tienbh);
          printf("\n\nSo tien phai tra: %d VND", tien);

          break;
        case 2 :
          printf("\nSo nguoi benh: %d", dem);
          printf("\nTrung binh tien vien phi: %d VND", tongtien/dem);
          printf("\nLoai the\tThe Gold\tThe Silver\tThe Citizen\tKhong\n");
          printf("        \t%8d\t%10d\t%11d\t%5d\n", demG, demS, demC, demK);
          printf("So tien bao hiem chi tra lon nhat: %d\n", tienbhmax);
          break;
        case 3 :
          printf("Quit!\n");
          break;
        default : printf("Nhap sai! Nhap lai!\n");
          break;
        }
    }

    return 0;
}
