#include <stdio.h>
#include <stdlib.h>

int x;

int fib(int n){
  if (n==0) return 0;
  if (n==1) return 1;
  return fib(n-1) + fib(n-2);
}

int main(void)
{
    int y;
    char *str;

    y = 4;
    printf("stack memory: %d\n", y);

    str = malloc(100*sizeof(char));
    str[0] = 'b';
    printf("heap memory: %c--%c--%c\n", str[0], str[1], str[99]);
    char *str2;
    str2 = malloc(200*sizeof(char));
    str2[199] = 'e';
    printf("heap memory: %c--%c--%c\n", str2[0], str2[1], str2[199]);
    free(str);
    free(str2);

    printf("fib(5) = %d \n", fib(5));

    return 0;
}
