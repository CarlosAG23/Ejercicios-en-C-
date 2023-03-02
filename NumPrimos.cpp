#include <stdio.h>
#include <conio.h>
int main(){
	int ingreso, num, condicion;
	int conta1 = 0;
	int conta2 = 2;
	printf("Ingrese un numero entero: ");
	scanf("%d", &ingreso);
	
	if(ingreso < 0)
	{
		while(ingreso < 0)
		{
			printf("Ingrese un numero entero positivo");
			scanf("%d",&ingreso);
		}
	}
	
	if(ingreso <= 1)
	{
		printf("El numero ingresado no es primo: %d", ingreso);
	}
	
	if(ingreso > 1)
	{
		for(int i = 4; i <= ingreso; i++)
		{
			conta1=0;
			for(int j =1; j<=i;j++)
			{
				if(i%j==0)
				{
					conta1++;
				}
			}
			if(conta1 <= 2)
			{
				conta2++;
			}
		}
		printf("La cantidad de numeros primos es: %d", conta2);
	}
	
	return 0;
}
