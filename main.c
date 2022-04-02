#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int cont = 0;

    printf("Ingresar un numero: ");     ///Pide de ingresar un numero
    scanf("%i", &num);

    for(int i = num; i > 0; i--)     ///Hago un for que vaya desde el num ingresado hasta 0
    {
        if(num % i == 0)            /// Si el resto del numero ingresado / i da de resto 0 entonces se suma un 1 al contador
        {
            cont++;                 ///La logica de esto es que si el contador es igual a 2 es primo ya que se dividio por si mismo y por 1
        }                           ///En cambio si el contador es diferente de 2 significaria que se dividio mas veces que por 1 y si mismo
    }
    if(cont == 2 || num == 1 || num == 0)   ///Aca especifique que el 0 y el 1 eran primos porque de la manera en que lo hice el 1 contaria 1 vez sola y lo mismo con el cero
    {
        printf("Es primo");
    }
    else
    {
        printf("No es primo");
    }


    return 0;
}
