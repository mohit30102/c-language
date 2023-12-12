#include<stdio.h>

int main(){
  int a,b;
	printf("enter value a & b: ");
	scanf(" %d %d" ,&a ,&b);
  //a=120
  //b=100
  a=a+b;//220
  b=a-b;//220-100=120
  a=a-b;//120-220=100
	printf("\n result x  %d",a);
	printf("\n result y %d",b);
  return 0;
}