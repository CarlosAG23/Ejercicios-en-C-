#include <stdio.h>
#include <conio.h>

int main(){
	int ingreso;
	printf("Ingrese un numero entero: ");
	scanf("%d", &ingreso);
	
	int x;
	x = (ingreso % 2);
	if(x ==0)
	{
		printf("\n El numero: %d es par",ingreso);
	}
	else
	{
		printf("\n El numero: %d es impar", ingreso);
	}
	
	return 0;
}
