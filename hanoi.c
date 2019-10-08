#include <stdio.h>

void hanoi(int n, int a, int b)
{
  if (n == 1) 
    printf("posun kamen 1 od %d do %d\n", a, b);
  else
  {
    hanoi(n - 1, a, 6 - a);
    printf("posun kamen %d od %d do %d\n", n, a, b);
    d
    hanoi(n - 1, 6 - (a + b), b);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}
