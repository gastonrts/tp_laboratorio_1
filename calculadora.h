int ingresarNumero (float* numero)
{		printf("Ingrese un numero:");
        scanf("%f", numero);
        fflush(stdin);
        return* numero;
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

double dividir (float numero1, float numero2)
{
    float division = 0;

    if (numero2==0)
    {
        printf("NO ES POSIBLE DIVIDIR UN NUMERO ENTRE CERO (0)\n\n");
    }
    else
    {
            division = numero1 / numero2;
    }

    return division;
}

int multiplicar (float numero1, float numero2)
{
    double multiplicacion = 0;
    multiplicacion = numero1 * numero2;

    return multiplicacion;
}

double factorizar (float numero)
{
    double factorial =0;
    if (numero==1)
    {
        return 1;
    }
    factorial = numero * factorizar(numero-1);
    /*factorial = numero2*contador;*/
    return factorial;
    }

