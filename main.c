#include <stdio.h>
#include <stdlib.h>
int ingresarNumero (float* numero);
int sumar (float numero1, float numero2);
int restar (float numero1,float numero2);
int dividir (float numero1, float numero2);
int multiplicar (float numero1, float numero2);
int main()
{


	int opcion,calculos,resultados,flag;
	float numero1,numero2,suma,resta,division,multiplicacion;

	do

{

		printf("\n1-  Ingresar primer operando.");
        printf("\n2-  Ingrese segundo operando.");
        printf("\n3-  Calcular todas las operaciones.");
        printf("\n  a-  Calcular la suma            <x+x>");
        printf("\n  b-  Calcular la resta           <x-x>");
        printf("\n  c-  Calcular la division        <x/x>");
        printf("\n  d-  Calcular la multiplicion    <x*x>");
        printf("\n  e-  Calcular el factorial       <x!x!>");
        printf("\n4-  Informar los resultados.");
        printf("\n5-  SALIR.\n");
        printf("\nIngrese una opcion del menu:");

    	scanf ("%d", &opcion);
    	fflush(stdin);
	switch (opcion)
	{
		case 1:
			ingresarNumero (&numero1);
			printf("\nSu primero operando es: %.2f",numero1);
			break;
		case 2:
            ingresarNumero (&numero2);
			printf("\nSu segundo operando es: %.2f",numero2);
			break;
		case 3://RESOLVEMOS LAS OPERACIONES
            resta = restar (numero1,numero2);

            suma = sumar(numero1,numero2);


            if (numero2==0)
            {
                printf("\nNO SE PUEDE DIVIDIR POR CERO!!!!!!\n");
            }
            else
            {
                division = dividir (numero1,numero2);
            }

            multiplicacion = multiplicar (numero1,numero2);
            break;
        case 4:
            printf("\nSuma %f" , suma);

            printf("\nResta %f", resta);

            printf("\nDivision %f",division);

            printf("\nMultiplicacion %f", multiplicacion);
            break;
        case 5:
            flag = 5;
			printf ("\n\nCerrando el programa...");
			break;
        default:
            printf("\n\nNo es una opcion valida.");

			break;
	}

}
	while (flag!=5);

	return 0;
}

int ingresarNumero (float* numero)
{		printf("Ingrese un numero:");
        scanf("%f", numero);
        return numero;
}

int sumar (float numero1, float numero2)
{
        float suma = 0;
        suma = numero1 + numero2;

        return suma;
}

int restar (float numero1,float numero2)
{
    float resta = 0;
    resta = numero1 - numero2;

    return resta;
    }

int dividir (float numero1, float numero2)
{
    float division = 0;
    division = numero1 / numero2;

    return division;
}
int multiplicar (float numero1, float numero2)
{
    float multiplicacion = 0;
    multiplicacion = numero1 * numero2;

    return multiplicacion;
}
/*
int sumar (int numero1, int numero2)

{
	int suma;
    suma = 0;

    suma = numero1 + numero2;

    return suma;
}*/
