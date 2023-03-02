#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num)
{
   if(num ==1 ||num ==0)
    {      
      return num;  
    }
    else
    {
     return fibonacci(num-1)+fibonacci(num-2);
    }
}

int main(void)
{
    int num;
		
	printf("Ingrese el numero de recursividad: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) 
    {
      printf("%d\n", fibonacci(i));
    }
      
  return 0;
}
