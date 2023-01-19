#include <stdio.h>
#include <stdlib.h>

float converte(float t);

int main(){
	
	float f, c;
	
	printf("digite o valor da temp em fah: ");
	scanf("%f", &f);
	fflush(stdin);	
	
	c=converte(f);
	
	printf("\ntemperatura %2.f\xF8 C\n\n", c);
	
	system("pause");
	return 0;
} //main

float converte(float t){
	
	float celsius;
	celsius = (t-32)/1.8;

	return celsius;
} //converte
