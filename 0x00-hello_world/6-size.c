#include <stdio.h>
int main(void){
  int a;
  char b;
  long int c;
  long long int d;
  float e;
  printf("size of a is: %zu bytes\n ", sizeof(a));
  printf("size of b is: %zu bytes\n ", sizeof(b));
  printf("size of c is: %zu bytes\n", sizeof(c));
  printf("size of d is: %zu bytes\n",sizeof(d));
  printf("size of e is: %zu bytess\n", sizeof(e));
  return 0;

}
