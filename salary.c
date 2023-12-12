#include<stdio.h>
int main(){
    int salary;
	float hra,da,ta,gross_salary;
	printf("enter your basic salary");
	scanf("%d",&salary);

	hra = (float)salary*10/100;
	da = (float)salary*5/100;
	ta = (float)salary*7/100;

	printf("\n hra is %.2f",hra);
	printf("\n da is %.2f",da);
	printf("\n ta is %.2f",ta);

	gross_salary = salary+hra+da+ta; 

	printf("\n total salary is %.2f",gross_salary); 
  
  	return 0;
}