#include<stdio.h>

int main(void)
{
  int a[3] = {17,289,4913}, *p, *q;

  p = a;
  /* p trỏ đến phần tử đầu tiên của a, nghĩa là &a[0] */
  q = p+2;
  /* q trỏ đến a[2]. Tương đương với q = &a[2]*/

  printf("a = %p\n", a);
  printf("p = %p, q = %p\n", p, q);
  printf("p trỏ đến %d và q trỏ đến %d\n", *p, *q);
  printf("Khoảng cách con trỏ giữa p và q là %ld\n", q-p);
  printf("Khoảng cách nguyên giữa p và q là %ld\n",
   (long)q-(long)p);

   return 0;
}
