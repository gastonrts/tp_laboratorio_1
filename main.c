#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"
int main()
{


	int opcion,flag;
	float numero1=0,numero2=0,suma,resta,division,multiplicacion,factorialA,factorialB;

	do

{

		printf("\n1-  Primer operando.\t%.2f",numero1);
        printf("\n2-  Segundo operando.\t%.2f",numero2);
        printf("\n3-  Calcular todas las operaciones.");
        printf("\n  a-  Calcular la suma            %.2f + %.2f",numero1,numero2);
        printf("\n  b-  Calcular la resta           %.2f - %.2f",numero1,numero2);
        printf("\n  c-  Calcular la division        %.2f / %.2f",numero1,numero2);
        printf("\n  d-  Calcular la multiplicion    %.2f * %.2f",numero1,numero2);
        printf("\n  e-  Calcular el factorial       %.2f !  %.2f !",numero1,numero2);
        printf("\n4-  Informar los resultados.");
        printf("\n5-  SALIR.\n");
        printf("\nIngrese una opcion del menu:");

    	scanf ("%d", &opcion);
    	fflush(stdin);
	switch (opcion)
	{
		case 1:
			ingresarNumero (&numero1);
			break;
		case 2:
            ingresarNumero (&numero2);
			break;
		case 3://RESOLVEMOS LAS OPERACIONES
            resta = restar (numero1,numero2);

            suma = sumar(numero1,numero2);

            multiplicacion = multiplicar (numero1,numero2);

            division = dividir (numero1,numero2);


            if (numero1>0)
            {
                factorialA = factorizar(numero1);
            }

            else
            {
                printf ("\nERROR, NO SE PUEDE SACAR UN FACTORIAL DE UN NUMERO NEGATIVO O EL NUMERO 0\n");
            }
            if (numero2>0)
            {
                factorialB = factorizar(numero2);
            }

            else
            {
                printf ("ERROR, NO SE PUEDE SACAR UN FACTORIAL DE UN NUMERO NEGATIVO.");
            }


            break;
        case 4:
            printf("\nSuma %.2f" ,suma);

            printf("\nResta %.2f",resta);

            printf("\nDivision %.2f",division);

            printf("\nMultiplicacion %.2f",multiplicacion);

            printf("\nFactorial A: %.2f ", factorialA);

            printf("\nFactorial B: %.2f ", factorialB);

            break;
        case 5:
            flag = 5;
			printf ("\n\nCerrando el programa...");
			break;
        default:
            printf("\n\nNO ES UNA OPCION VALIDA");

			break;
	}

}
	while (flag!=5);

	return 0;
}






