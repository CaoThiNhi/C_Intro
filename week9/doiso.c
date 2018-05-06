#include<stdio.h>

void printMenu(){
  printf("\nDOI SO\n");
  printf("1.Binary\n");
  printf("2.Octal\n");
  printf("3.Hexa\n");
  printf("4.Exit\n");
}

void printBinary(int n){
  int sodu;
  long binary =0, i =1;

  while(n != 0){
    sodu = n%2;
    n = n/2;
    binary = binary + (sodu*i);
    i = i*10;
  }

  printf("Binary: %ld\n", binary);
}

void printOctal(int n){
  int sodu;
  long octal = 0, i = 1;

  while(n != 0) {
        sodu = n%8;
        n = n/8;
        octal = octal + (sodu*i);
        i = i*10;
    }
  printf("Octal: %ld\n", octal);
}


void printHexa(int n){
  int sodu[50],i=0,length=0;

  while(n>0)
    {
      sodu[i]=n%16;
      n=n/16;
      i++;
      length++;
    }

  printf("Hexa: ");
  for(i=length-1;i>=0;i--)
    {
      switch(sodu[i])
        {
        case 10:
          printf("A");
          break;
        case 11:
          printf("B");
          break;
        case 12:
          printf("C");
          break;
        case 13:
          printf("D");
          break;
        case 14:
          printf("E");
          break;
        case 15:
          printf("F");
          break;
        default :
          printf("%d",sodu[i]);
        }
    }
  printf("\n");
}

int main(){

  int num, choice;

  do{
    printf("Input number decimal: ");
    scanf("%d", &num);

    if(num<0) printf("\nError. Number is a decimal (number >= 0)\n");
  }while(num < 0);
  do{
    printMenu();
    printf("Input choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1 :
      printBinary(num);
      break;
    case 2 :
      printOctal(num);
      break;
    case 3 :
      printHexa(num);
      break;
    case 4 :
      printf("Exit\n");
      break;
    default :
      printf("Input choice error. Input again. \n");
      break;
    }
  }while(choice != 4);

  return 0;
}
