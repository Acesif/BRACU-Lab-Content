#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main (int argc, char *argv[])
{
int number[30];
int n = argc;

for (int i = 1; i < argc; i++){
	     number[i-1] = atoi(argv[i]);
 }

for (int i = 0; i < n; i++)
 {
  for (int j = i + 1; j < n; j++)
 {
  if (number[i] < number[j])
  {
   int a = number[i];
   number[i] = number[j];
   number[j] = a;
  }
   }
    }
    for (int i = 0; i < n-1; i++)
    {
     printf("%d\n", number[i]);
    }

}
