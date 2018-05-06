// x0 = n
// x k+1 = (xk + n/xk)/2
#include<stdio.h>
#include<math.h>
#define DO_CHINH_XAC 0.0001

int main(){
  double a, xn, ketqua;

  printf("Enter the value need to be squared cube: ");
  scanf("%lf", &a);

  xn = (a+1)/2;

  do{
    ketqua = xn;
    xn = 0.5 * (xn + a/xn);
  }while (fabs(xn-ketqua) > DO_CHINH_XAC);
  printf("\nResult = %lf\n", xn);

  return 0;
}
