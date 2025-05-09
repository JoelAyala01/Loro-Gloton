# Loro-Gloton
Desarrollar un programa que simule el comportamiento de un loro glotón que puede comer distintos tipos de comida. El loro podrá pedir hasta 5 comidas, y el usuario debe introducir el tipo de comida y la cantidad que desea darle. El programa valida que el tipo de comida sea uno de los permitidos y verifica que la cantidad ingresada sea positiva. Además, el programa le permite al usuario decidir si desea continuar ingresando más comidas para el loro o si quiere finalizar.  

Requisitos:  Tipos de comida: El loro puede comer los siguientes tipos de comida:  1 - Manzana 2 - Banana 3 - Zanahoria El loro no puede comer:  4 - Chocolate 5 - Almendra 
Uso de macros: Se deben utilizar macros para:  Definir los tipos de comida permitidos y no permitidos. Por ejemplo: #define MANZANA 1 #define BANANA 2 #define ZANAHORIA 3 #define CHOCOLATE 4 #define ALMENDRA 5 Definir un límite máximo de comidas que el loro puede consumir (5 comidas en este caso). 
#define MAX_COMIDAS 5 Ingreso de datos:  El programa debe permitir que el usuario ingrese un número que corresponde a un tipo de comida. Si el tipo de comida es válido (permitido), el programa solicitará la cantidad de la comida. Si la comida seleccionada no está permitida (como chocolate o almendra), el programa debe mostrar un mensaje de error y no contar esa comida. 

Interacción con el usuario:  Después de cada comida ingresada, el programa debe preguntarle al usuario si desea ingresar otra comida (usando la opción S para sí y N para no). Si el usuario responde "sí", el programa continúa pidiendo más comidas. Si el usuario responde "no" o si el número de comidas alcanzó el máximo (5), el programa termina. Resumen final:  Al final del programa, se debe mostrar un resumen de cuántas unidades de cada tipo de comida el loro ha comido. El programa debe mostrar el total de la comida consumida. Ejemplo de uno de los escenarios:
 
![image](https://github.com/user-attachments/assets/42653e87-c750-4260-b0f1-5d2fbbcc01c2)
