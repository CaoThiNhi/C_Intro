#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT_INT 9999;

void insertionsort(int *, int);
void selectionsort(int *, int);
void swap(int *, int *);
void mergesort(int *, int, int);
void merge(int *, int, int, int);
int partition(int *, int, int);
void quicksort(int *, int, int);

int main()
{
  srand(time(NULL));
  int A[20];
  int i, temp=20;
  for (i = 0; i<20; i++)
    {
      temp = rand() %40;
      A[i] = temp;
    }
  for (i=0; i<20; i++) printf("%3d",A[i]);
  printf("\n");
  quicksort(A,0,19);
  for (i=0; i<20; i++) printf("%3d",A[i]);
  printf("\n");
  mergesort(A,0,19);
  for (i=0; i<20; i++) printf("%3d",A[i]);
  printf("\n");
  insertionsort(A,20);
  for (i=0; i<20; i++) printf("%3d",A[i]);
  printf("\n");
}

void insertionsort(int *A, int n)
{
  int i, j, last;
  for (i = 1; i<n; i++)
    {
      last = A[i];
      j = i;
      while (j > 0 && A[j-1] > last)
	{
	  A[j] = A[j-1];
	  A[j-1] = last;
	  j--;
	}
    }
}

void selectionsort(int *A, int n)
{
  int min, i, j;
  for (i = 0; i<n; i++)
    {
      min = i;
      for (j = i+1; j<n; j++)
	if (A[j] < A[min]) min = j;
      swap(&A[i],&A[min]);
    }
}

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void mergesort(int *A, int l, int r)
{
  int p;
  if (r > l)
    {
      p = (l+r)/2;
      mergesort(A,l,p);
      mergesort(A,p+1,r);
      merge(A,l,p,r);
    }
}

void merge(int *A, int l, int p, int r)
{
  int n1, n2, i, j, k;
  n1 = p-l+1+1;
  n2 = r - p+1;
  int *L, *R;
  L = (int *)malloc(n1*sizeof(int));
  R = (int *)malloc(n2*sizeof(int));
  k = 0;
  for (i = l; i<=p; i++)
    {
      L[k] = A[i];
      k++;
    }
  L[n1-1] = LIMIT_INT;
  k = 0;
  for (i = p+1; i<=r; i++)
    {
      R[k] = A[i];
      k++;
    }
  R[n2-1] = LIMIT_INT;
  i = 0; j = 0;
  for (k = l; k<=r; k++)
    {
      if (L[i] <= R[j])
	{
	  A[k] = L[i];
	  i++;
	}
      else
	{
	  A[k] = R[j];
	  j++;
	}
    }
  free(L);
  free(R);
}

int partition(int *A, int l, int r)
{
  int i, j, p;
  p = A[l]; i = l; j= r+1;
  while (i < j)
    {
      i++;
      while (i <= r && A[i] < p) i++;
      j--;
      while (j >= l && A[j] > p) j--;
      swap(&A[i], &A[j]);
    }
  swap(&A[i], &A[j]); swap(&A[l], &A[j]);
  return j;
}

void quicksort(int *A, int l, int r)
{
  int p;
  if (l < r)
    {
      p = partition(A,l,r);
      quicksort(A,l,p-1);
      quicksort(A,p+1,r);
    }
}
