#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand( time(NULL) );
  int arr[10];
  int i;
  for (i = 0; i < 9; i++) {
    arr[i] = rand();
  }
  arr[9] = 0;
  printf("The original array:\n");
  for (i = 0; i < 10; i++) {
    printf("arr[%d]: %d\n", i, arr[i]);
  }
  int arr2[10];
  int *p = &arr[0];
  int *q = &arr2[0];
  for (i = 0; i < 10; i++) {
    *(q + i) = *(p + 9 - i);
  }
  printf("The second array:\n");
  for (i = 0; i < 10; i++) {
    printf("arr2[%d]: %d\n", i, arr2[i]);
  }
}
