#include<stdio.h>
int main(){
  int v,t;
  float m, n;

  scanf("%d %d", &v, &t);
  m = (v * t);
  n = m / 12;
  printf("%.3f", n);
  return 0;
}