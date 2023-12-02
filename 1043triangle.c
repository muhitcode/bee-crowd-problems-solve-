#include<stdio.h>
int main(){
  float A,B,C,trapez;
  scanf("%f %f %f",&A,&B,&C);
  if((A+B)>C && (B+C)>A && (C+A)>B){
    printf("Perimetro = %.1f\n",A+B+C);
  }else{
    trapez = (1.0/2.0)*(A+B)*C;
    printf("Area = %.1f\n", trapez);
  }
  return 0;
}