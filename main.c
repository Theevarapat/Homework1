#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prime(int k);

int main(int argc, char *argv[])
{
  int *a, N, small, big, i, p=0, *j, k;

  N = argc-1;
  a = (int*) malloc(sizeof(int)*N);
  j = (int*) malloc(sizeof(int)*N);

  for(i=2; i<=argc; i++)
  {
    a[i-2] = atoi(argv[i-1]);
    printf("%d ", a[i-2]);
    for(k=2; k<=*(a+(i-2)); k++)
    {
      if(a[i-2]%k!=0)
      {
        j[i-2] = a[i-2];
        printf("%d ", j[i-2]);
        p++;
        break;
      }
    }
  }

  for(i=0; i<j[p]; i++)
  {
    printf("%d ", j[i]);
  }
  
  small = j[0];
  big = j[p];

  printf("The smallest number is %d\n", small);
  printf("The biggest number is %d\n", big);

  
  
  return 0;
}

int prime(int k)
{


}