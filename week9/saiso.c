#include<stdio.h>
#include<math.h>

void printMenu(){
  printf("\nMAY TINH\n");
  printf("1.Nhap gia tri X va sai so epsilon\n");
  printf("2.Sin(X)\n");
  printf("3.Sqrt(X)\n");
  printf("4.E^X\n");
  printf("5.Exit\n");
}

float inputNumber(){
  float n;

  do{
    printf("Nhap X: ");
    scanf("%f", &n);

    if(n<0) printf("\nError. Number >= 0.\n");
  }while(n < 0);

  return n;
}

float inputEpsilon(){
  float epsilon;
  do{
    printf("Nhap Epsilon: ");
    scanf("%f", &epsilon);

    if(epsilon<0) printf("\nError. Epsilon >= 0.\n");
  }while(epsilon < 0);

  return epsilon;
}

void tinhSin(float n, float epsilon){

  int i = 1;
  float denominator;
  float lastsinx, sinx;

  printf("Sin(%g) = ", n);
  n = n * (3.142 / 180.0);

  float x1 = n;
  sinx = n;

  do{
    lastsinx = sinx;
    denominator = 2*i*(2*i + 1);
    x1 = -x1*n*n/denominator;
    sinx = sinx + x1;
    i = i+1;
  }while (epsilon <= fabs(lastsinx - sinx));

  printf("%g\n", sinx);
}

void canBacHai(float n, float epsilon){
  float xn, ketqua;

  xn = (n+1)/2;
  do {
    ketqua = xn;
    xn = 0.5 * (xn + n/xn);
  } while (fabs(xn-ketqua) > epsilon);
  printf("Sqrt(%g) = %g\n", n, xn);
}

void tinhEmuX(float n, float epsilon){
  float mu=1, e=1;
  int gt=1,i=1;
  while(mu/gt> epsilon)
    {
      e=e+mu/gt;
      i++;
      mu=mu*n;
      gt=gt*i;
    }
  printf("E^%g = %g\n", n, e);
}

int main(){

  int choice, flag = 0;
  float x, epsilon;

  do{
    printMenu();
    printf("Input choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1 :
      x = inputNumber();
      epsilon = inputEpsilon();
      flag = 1;
      break;
    case 2 :
      if(flag == 1)
       tinhSin(x, epsilon);
      else{
        printf("Ban hay nhap du lieu truoc.\n");
      }
      break;
    case 3 :
      if(flag == 1)
       canBacHai(x, epsilon);
      else{
        printf("Ban hay nhap du lieu truoc.\n");
      }
      break;
    case 4 :
      if(flag == 1)
       tinhEmuX(x, epsilon);
      else{
        printf("Ban hay nhap du lieu truoc.\n");
      }
      break;
    case 5 :
      printf("Exit\n");
      break;
    default :
      printf("Input choice error. Input again. \n");
      break;
    }
  }while(choice != 5);

  return 0;
}
