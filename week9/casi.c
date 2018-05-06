#include<stdio.h>

double getJudgeData(){
  double diem;
  do{
    printf("Nhap diem: ");
    scanf("%lf", &diem);

    if(diem<0 || diem>10) printf("Diem nam trong khoang [0~10]. Nhap lai.\n");
  }while(diem<0 && diem>10);
  return diem;
}

double diemLowest(double diem1, double diem2, double diem3, double diem4, double diem5){
  double lowest;
  lowest = diem1;
  if(lowest >= diem2) lowest = diem2;
  if(lowest >= diem3) lowest = diem3;
  if(lowest >= diem4) lowest = diem4;
  if(lowest >= diem5) lowest = diem5;

  return lowest;
}

double diemHighest(double diem1, double diem2, double diem3, double diem4, double diem5){
  double highest;
  highest = diem1;
  if(highest <= diem2) highest = diem2;
  if(highest <= diem3) highest = diem3;
  if(highest <= diem4) highest = diem4;
  if(highest <= diem5) highest = diem5;

  return highest;
}

void casiScore(double diem1, double diem2, double diem3, double diem4, double diem5){
  double lowest, highest, diemTB;

  lowest = diemLowest(diem1, diem2, diem3, diem4, diem5);
  highest = diemHighest(diem1, diem2, diem3, diem4, diem5);
  diemTB = (diem1 + diem2 + diem3 + diem4 + diem5 - lowest -highest)/3.0;

  printf("Diem cua ca si la: %g\n", diemTB);
  printf("%g %g", lowest, highest);
}
int main(){
  double diem1, diem2, diem3, diem4, diem5, lowest, highest;

  diem1 = getJudgeData();
  diem2 = getJudgeData();
  diem3 = getJudgeData();
  diem4 = getJudgeData();
  diem5 = getJudgeData();

  casiScore(diem1, diem2, diem3, diem4, diem5);

  return 0;
}
