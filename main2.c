#include <stdio.h>
#include <stdlib.h>

int prime(int);

int main(int argc, char *argv[])
{
  int i, *j, *a, p=0, result, N, k, temp, small=0, big=0, *r; 
  
  N = argc-1;
  a=(int*) malloc(sizeof(int)*N);
  j=(int*) malloc(sizeof(int)*N);
  r=(int*) malloc(sizeof(int)*N);

  for (i=1;i<argc;i++)
  {
    a[i-1]=atoi(argv[i]);

    if(prime(a[i-1])==1)
    {
      j[i-1] = a[i-1];
    }
  }

  /*for (i=0; i<N; i++)
  {
    printf("%d ", a[i]);//debug
  }
  printf("\n");
  for (i=0; i<N; i++)
  {
    printf("%d ", j[i]);//debug
  }*/

  
  for(i=0; i<N-1; i++)
  {
    for(k=i+1; k<N; k++)
    {
      if(j[i]>j[k])
      {
        temp = j[i];
        j[i] = j[k];
        j[k] = temp;
      }
    }
  }

  /*printf("\n");
  for (i=0; i<p; i++)
  {
    printf("%d ", j[i]);//debug
  }*/

  for (i=0; i<N; i++)
  {
    if(j[i]>=2)
    {
      r[p] = j[i];
      p++;
    }
  }

  /*for (i=0; i<p; i++)
  {
    printf("%d ", r[i]);//debug
  }*/

  if(p==0)
  {
    printf("There are no prime numbers, Yay!\n");
  }
  else
  {
    printf("The smallest number is %d\n", r[0]);
    printf("The biggest number is %d\n", r[p-1]);
  }
  free(a);
  free(j);
  free(r);
}

int prime(int a)
{
  int i;
 
  for (i=2; i<=a-1; i++)
  { 
   if(a%i==0)
   {
    return 0;
   }
  }
  return 1;
}