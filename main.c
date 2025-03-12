#include <stdio.h>
#include <stdlib.h>

#define MANZANA   1
#define BANANA    2
#define ZANAHORIA 3
#define CHOCOLATE 4
#define ALMENDRA  5
#define MAX_COMIDA 5

int main()
{
    printf("\n-----BIENVENIDOS: LORO GLOTON-----\n\n");
    printf("Tipos de comidas disponibles: \n");
    printf("1 - Manzana \n2 - Banana \n3 - Zanahoria \n4 - Chocolate \n5 - Almendra \n");

    int comida, Total = 0, manzana = 0, banana = 0, zanahoria = 0;
    int cantManzanas = 0, cantBananas = 0, cantZanahorias = 0;
    char contador = 's';

    while(contador=='S' || contador=='s')
    {
        printf("Ingresa la comida: ");
        scanf("%d", &comida);

        if(comida==MANZANA || comida==BANANA || comida==ZANAHORIA)
        {
            ///proceso si el loro las puede comer
            if(comida==MANZANA)
            {
                ///manzana
                printf("Cuantas manzanas? ");
                scanf("%d", &cantManzanas);

                if(cantManzanas <= MAX_COMIDA)
                {
                    if((cantManzanas+Total)>MAX_COMIDA)
                    {
                        printf("El loro no tiene espacio para esa comida!\n");
                    }
                    ///Se guarda las manzanas
                    else
                    {
                        manzana = manzana + cantManzanas;
                    }
                }
                else if(cantManzanas > MAX_COMIDA)
                {
                    ///
                    printf("No! El loro no puede comer tanto ");
                }
            }
            else if(comida==BANANA)
            {
                ///zanahoria
                printf("Cuantas bananas? ");
                scanf("%d", &cantBananas);

                if(cantBananas <= MAX_COMIDA)
                {
                    if((cantBananas+Total)>MAX_COMIDA)
                    {
                        printf("El loro no tiene espacio para esa comida! ");
                    }
                    else
                    {
                        banana = banana + cantBananas;
                    }
                }
                else if(cantBananas > MAX_COMIDA)
                {
                    printf("No! El loro no puede comer tanto ");
                }
            }
            else if(comida==ZANAHORIA)
            {
                ///zanahoria
                printf("Cuantas zanahorias? ");
                scanf("%d", &cantZanahorias);

                if(cantZanahorias <= MAX_COMIDA)
                {
                    if((cantZanahorias+Total)>MAX_COMIDA)
                    {
                        printf("El loro no tiene espacio para esa comida ");
                    }
                    else
                    {
                        zanahoria = zanahoria + cantZanahorias;
                    }
                }
                else if(cantZanahorias > MAX_COMIDA)
                {
                    printf("No! El loro no puede comer tanto ");
                }
            }
        }
        else if(comida==CHOCOLATE || comida==ALMENDRA)
        {
            ///El loro no puede comer eso
            printf("\n--EL LORO NO PUEDE COMER ESO--");
        }
        else
        {
            ///comida invalida
            printf("\n!Esa comida no existe! ");
        }

        Total = manzana + banana + zanahoria;

        if(Total >= MAX_COMIDA)
        {
            ///cambio del contador para que pare
            printf("\!!!El loro esta lleno!!! \n");
            contador = 'N';
        }
        else
        {
            printf("\n--DESEA SEGUIR ALIMENTANDO AL LORO? (S/N)---\n");
            scanf(" %c", &contador);
        }

    } ///Fin del bucle while

    printf("\n\n Resumen del d%ca: \n", 161);
    printf("\nManzanas consumidas: %d", manzana);
    printf("\nBananas consumidas: %d", banana);
    printf("\nZanahorias consumidas: %d", zanahoria);
    printf("\nTotal de comida consumida: %d unidades. \n", Total);

    return 0;
}
