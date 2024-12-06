#include <stdio.h>

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

int main() {
    int opcion;
    int a, b, resultado;

    do {
        printf("\n=== Calculadora Basica ===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Ingrese el primer numero:\n");
                scanf("%d",&a);
                printf("Ingrese el segundo numero:\n");
                scanf("%d",&b);
                resultado = sumar(a, b);
                printf("Resultado de la suma: \n\n", resultado);
                break;

            case 2:

            printf("Ingrese el primer nummero: \n");
            scanf("%d",&a);
            printf("Ingrese el segundo nummero: \n");
            scanf("%d",&b);
                resultado = restar(a, b);
                printf("Resultado de la resta:%d", resultado);
                break;

            case 3:
                printf("Ingrese el primer numero:\n");
                scanf("%d",&a);
                printf("Ingrese el segundo numero:\n");
                scanf("%d",&b);
                resultado = multiplicar(a, b);
                printf("Resultado de la multiplicacion: \n\n", resultado);
                break;
            case 4:
                printf("Saliendo de la calculadora...\n\n");
                break;
            default:
                printf("Opcion no valida. Intenta de nuevo.\n\n");
                break;
        }
    } while (opcion != 4);
    return 0;
}

int sumar(int a, int b) {
    return a+b;
}

int restar(int a, int b) {
    

    return a-b;
}

int multiplicar(int a, int b) {
    return a*b;
}
